# ./src/ui

set(SRC
	centralwidget.cpp
	mainwindow.cpp
)

add_library(ui ${SRC})

target_link_libraries(ui PRIVATE Qt6::Widgets)

set(HEADER_FILES
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
