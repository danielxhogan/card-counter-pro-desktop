# ./src/ui

set(SRC
    gameboard.cpp
    betselection.cpp
    playbuttons.cpp
    instructions.cpp
	centralwidget.cpp
	mainwindow.cpp
)

add_library(ui ${SRC})

target_include_directories(ui PRIVATE ${PROJECT_BINARY_DIR})

target_link_libraries(ui PRIVATE Qt6::Widgets)

set(HEADER_FILES
   ${CMAKE_CURRENT_SOURCE_DIR}/gameboard.h
   ${CMAKE_CURRENT_SOURCE_DIR}/betselection.h
   ${CMAKE_CURRENT_SOURCE_DIR}/playbuttons.h
   ${CMAKE_CURRENT_SOURCE_DIR}/instructions.h
   ${CMAKE_CURRENT_SOURCE_DIR}/centralwidget.h
   ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.h
)

target_sources(ui INTERFACE
        FILE_SET ui_headers
        TYPE HEADERS
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
        FILES ${HEADER_FILES}
)

install(TARGETS ui DESTINATION lib)
install(TARGETS ui FILE_SET ui_headers DESTINATION include)
