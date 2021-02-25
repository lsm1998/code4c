cmake_minimum_required(VERSION 3.10.2)
project(utils C)

set(CMAKE_C_STANDARD 11)

if (WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS 1)
endif (WIN32)

include_directories(include)

add_library(utils SHARED
        math.c)

install(TARGETS utils
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)