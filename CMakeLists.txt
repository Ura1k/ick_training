cmake_minimum_required(VERSION 3.5)
project(ICK_Training)

###############################################################################

set(CMAKE_C_STANDART 11)
set(CMAKE_CXX_STANDART 17)

set(CMAKE_BUILD_TYPE Debug)

# For each new chapter subdirectory, you add a new subdirectory bellow
###############################################################################

add_subdirectory(chapter_0)
add_subdirectory(chapter_1)
add_subdirectory(chapter_2)