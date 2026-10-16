cmake_minimum_required(VERSION 3.20)
project(competitive-programming LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE CODEFORCES_SOURCES "codeforces/*.cpp")

foreach(SOURCE_FILE ${CODEFORCES_SOURCES})
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${SOURCE_FILE}
    )
endforeach()