cmake_minimum_required(VERSION 3.22)
project(ft70dr C ASM)

set(CMAKE_C_STANDARD 11)

add_subdirectory(platform/ft70d)

add_subdirectory(apps/blinky)