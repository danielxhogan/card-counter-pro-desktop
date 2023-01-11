# ./src/CardCounterPRO

set(SRC
	CardCounterPRO.cpp
)

add_library(CardCounterPRO ${SRC})

target_link_libraries(CardCounterPRO PRIVATE Qt6::Widgets)


target_sources(CardCounterPRO INTERFACE
	FILE_SET card_counter_pro_header
	TYPE HEADERS
	BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
	FILES ${CMAKE_CURRENT_SOURCE_DIR}/CardCounterPRO.h
)

install(TARGETS CardCounterPRO DESTINATION lib)
install(TARGETS CardCounterPRO FILE_SET card_counter_pro_header DESTINATION include)