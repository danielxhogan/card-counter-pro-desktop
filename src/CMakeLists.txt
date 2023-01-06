# ./src

add_executable(main
	main.cpp
)

target_link_libraries(main
	PRIVATE compiler_flags
)

target_sources(main INTERFACE
	FILE_SET main_header
	TYPE HEADERS
	BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
	FILES ${CMAKE_CURRENT_SOURCE_DIR}/main.h
)

install(TARGETS main DESTINATION lib)
install(TARGETS main FILE_SET main_header DESTINATION include)
