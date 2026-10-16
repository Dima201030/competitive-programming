cmake_minimum_required(VERSION 3.20)
project(competitive-programming LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

file(GLOB_RECURSE ALL_SOURCES CONFIGURE_DEPENDS
    "codeforces/*.cpp"
    "itmo/*.cpp"
)

file(GLOB ROOT_SOURCES CONFIGURE_DEPENDS "*.cpp")
list(APPEND ALL_SOURCES ${ROOT_SOURCES})
list(SORT ALL_SOURCES)

foreach(SOURCE_FILE ${ALL_SOURCES})
    file(RELATIVE_PATH REL_PATH "${CMAKE_SOURCE_DIR}" "${SOURCE_FILE}")
    get_filename_component(SOURCE_DIR "${SOURCE_FILE}" DIRECTORY)
    file(RELATIVE_PATH REL_DIR "${CMAKE_SOURCE_DIR}" "${SOURCE_DIR}")
    get_filename_component(OUTPUT_NAME "${SOURCE_FILE}" NAME_WE)

    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" EXEC_NAME "${OUTPUT_NAME}")
    string(REPLACE "/" ";" DIR_PARTS "${REL_DIR}")
    list(REVERSE DIR_PARTS)
    foreach(PART IN LISTS DIR_PARTS)
        if(NOT TARGET ${EXEC_NAME})
            break()
        endif()
        string(REGEX REPLACE "[^A-Za-z0-9_]" "_" PART_CLEAN "${PART}")
        set(EXEC_NAME "${PART_CLEAN}_${EXEC_NAME}")
    endforeach()

    if(TARGET ${EXEC_NAME})
        message(WARNING "Duplicate target name, skip: ${REL_PATH}")
        continue()
    endif()

    set(IS_BROKEN FALSE)
    file(SIZE "${SOURCE_FILE}" FILE_SIZE)
    if(FILE_SIZE EQUAL 0)
        set(IS_BROKEN TRUE)
        message(STATUS "Empty file, added EXCLUDE_FROM_ALL: ${REL_PATH}")
    else()
        file(READ "${SOURCE_FILE}" FILE_CONTENT)
        if(NOT FILE_CONTENT MATCHES "main[ \t\n]*\\(")
            set(IS_BROKEN TRUE)
            message(STATUS "No main(), added EXCLUDE_FROM_ALL: ${REL_PATH}")
        endif()
    endif()

    if(IS_BROKEN)
        add_executable(${EXEC_NAME} EXCLUDE_FROM_ALL ${SOURCE_FILE})
    else()
        add_executable(${EXEC_NAME} ${SOURCE_FILE})
    endif()

    set_target_properties(${EXEC_NAME} PROPERTIES
        FOLDER "${REL_DIR}"
        OUTPUT_NAME "${OUTPUT_NAME}"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/${REL_DIR}"
    )

    source_group("${REL_DIR}" FILES ${SOURCE_FILE})
endforeach()