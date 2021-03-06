#!/usr/bin/env python3
# -*- coding: utf-8 -*-
__author__ = "Ivo Marvan"
__email__ = "ivo@marvan.cz"
__description__ = '''
    Experiments with multiple T265 cameras.
'''
import pyrealsense2 as rs
import logging
import datetime
from squaternion import Quaternion, quat2euler

logging.basicConfig(
    level=logging.DEBUG,
    format='[%(levelname)s] %(asctime)s.%(msecs)03d: (%(threadName)-9s) %(message)s',
    datefmt="%H:%M:%S"
)

def get_devices_serial_numbers(device_suffix:str='T265') -> [str]:
    '''
    Return list of serial numbers conected devices.
    Eventualy only fit given suffix (like T265, D415, ...)
    (based on https://github.com/IntelRealSense/librealsense/issues/2332)
    '''
    ret_list = []
    ctx = rs.context()
    for d in ctx.devices:
        if device_suffix and not d.get_info(rs.camera_info.name).endswith(device_suffix):
            continue
        ret_list.append(d.get_info(rs.camera_info.serial_number))
    return ret_list


class T265CameraSource:

    def __init__(self, serial_number:str):
        self.__serial_number = serial_number
        self.__pipeline = None
        self.__config = None
        self.__start_pipeline()


    def __del__(self):
        if not self.__pipeline is None:
            self.__pipeline.stop()

    def get_serial_number(self):
        return self.__serial_number

    def __start_pipeline(self):
        # Configure depth and color streams
        self.__pipeline = rs.pipeline()
        self.__config = rs.config()
        self.__config.enable_device(self.__serial_number)
        self.__config.enable_stream(rs.stream.pose)
        self.__pipeline.start(self.__config)
        logging.debug('T265 ({}) camera is ready.'.format(self.__serial_number))

    def get(self) -> rs.pose:
        frames = self.__pipeline.wait_for_frames()
        data = frames.get_pose_frame()
        return data.get_pose_data()

    def get_xyz(self) -> (float, float, float):
        data = self.get()
        return data.translation.x, data.translation.y, data.translation.z,

    def get_state(self) -> (float, float, float):
        data = pose.get_pose_data()
        x = data.translation.x
        y = data.translation.y
        # extract the quaternions
        qx = data.rotation.x
        qy = data.rotation.y
        qz = data.rotation.z
        qw = data.rotation.w
        # convert to euler angles
        q = Quaternion(qw,qx,qy,qz)
        _, _, yaw = quat2euler(*q, degrees = True)
        return x, y, yaw


if __name__ == "__main__":
    number_of_experiments = 2
    serial_numbers =  get_devices_serial_numbers()
    sources = [T265CameraSource(serial_number) for serial_number in serial_numbers]

    print('Serial experiment', '-' * 50)
    print('serial_numbers', serial_numbers)
    for camera_index, source in enumerate(sources):
        for experiment_index in range(number_of_experiments):
            print(datetime.datetime.now(),  source.get_serial_number(), source.get_state())
    print('Parallel experiment', '-' * 50)
    for experiment_index in range(number_of_experiments):
        for camera_index, source in enumerate(sources):
            print(datetime.datetime.now(), source.get_serial_number(), source.get_state(), )
