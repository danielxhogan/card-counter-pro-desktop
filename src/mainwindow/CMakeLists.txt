# ./src/mainwindow

set(SRC
        mainwindow.cpp
)

add_library(mainwindow ${SRC})

target_link_libraries(mainwindow PRIVATE Qt6::Widgets)


target_sources(mainwindow INTERFACE
        FILE_SET mainwindow_header
        TYPE HEADERS
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
        FILES ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.h
)

install(TARGETS mainwindow DESTINATION lib)
install(TARGETS mainwindow FILE_SET mainwindow_header DESTINATION include)
