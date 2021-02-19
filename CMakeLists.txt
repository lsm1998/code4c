cmake_minimum_required(VERSION 3.17)

set(CMAKE_C_STANDARD 11)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)

project(${ProjectId} C)

include_directories(include)

# for循环加入源文件
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")
foreach(file ${files})
    get_filename_component(name `${file} NAME)
    add_executable(${name} ${file})
endforeach()
# add_executable(hello main.c)