# ./data/cards

set(CARDS
	01_of_spades_A.svg.png
)

#install(FILES ${CARDS} TYPE DATA)
install(FILES ${CARDS} DESTINATION share/data/cards)
