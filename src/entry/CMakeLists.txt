# ./src/entry

list(APPEND CMAKE_PREFIX_PATH "C:/Qt/6.2.4/msvc2019_64")
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(main
	main.cpp
)

target_include_directories(main PRIVATE ${PROJECT_BINARY_DIR})

target_link_libraries(main PRIVATE Qt6::Widgets CardCounterPRO mainwindow)

install(TARGETS main DESTINATION bin)
