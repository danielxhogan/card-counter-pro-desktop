# ./

cmake_minimum_required(VERSION 3.24)
project(card-counter-pro-desktop VERSION 1.0 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_INSTALL_PREFIX $ENV{INSTALL_PREFIX})
configure_file(env.h.in ${PROJECT_BINARY_DIR}/env.h)
file(COPY images/ DESTINATION ${PROJECT_BINARY_DIR}/images)

list(APPEND CMAKE_PREFIX_PATH $ENV{QT_PATH})
find_package(Qt6 REQUIRED COMPONENTS Widgets)


add_subdirectory(images)
add_subdirectory(src)


add_library(env INTERFACE)

target_sources(env INTERFACE
	FILE_SET env_header
	TYPE HEADERS
	BASE_DIRS ${PROJECT_BINARY_DIR}
	FILES ${PROJECT_BINARY_DIR}/env.h
)

install(TARGETS env FILE_SET env_header DESTINATION include)
