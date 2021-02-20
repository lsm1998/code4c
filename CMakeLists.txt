cmake_minimum_required(VERSION 3.10.2)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set(CMAKE_C_STANDARD 11)

project(${ProjectId} C)

FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})

include_directories(include)

# for循环加入源文件
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")
foreach(file ${files})
    get_filename_component(name `${file} NAME)
    add_executable(${name} ${file})
    target_link_libraries(${name} ${GTK3_LIBRARIES})
endforeach()
# add_executable(hello main.c)