# ./src

add_executable(main
	main.cpp
)

target_include_directories(main PRIVATE ${PROJECT_BINARY_DIR})

target_link_libraries(main
	PRIVATE compiler_flags
)

install(TARGETS main DESTINATION bin)
