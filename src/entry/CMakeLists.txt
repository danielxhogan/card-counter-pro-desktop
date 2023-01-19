# ./src/entry

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(main
	main.cpp
)

target_link_libraries(main
	PRIVATE Qt6::Widgets
			ui
)

install(TARGETS main DESTINATION bin)
