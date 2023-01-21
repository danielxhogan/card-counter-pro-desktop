#include "centralwidget.h"
#include "env.h"

#include <QGridLayout>
#include <QPixmap>
#include <QString>

CentralWidget::CentralWidget(QWidget* parent) : QWidget(parent)
{
	gameBoard = new GameBoard(this);
	betSelection = new BetSelection(this);
	playButtons = new PlayButtons(this);
	instructions = new Instructions(this);

	QPixmap* image = new QPixmap(100, 300);
	QString image_dir = INSTALL_IMAGES_DIR;
	image_dir.append("/cards/03_of_spades.png");

	if (!gameBoard->update_card(image_dir)) {
		image_dir = BUILD_IMAGES_DIR;
		image_dir.append("/cards/02_of_spades.png");
		gameBoard->update_card(image_dir);

	}

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(betSelection, 0, 0);
	layout->addWidget(gameBoard, 0, 1, 1, 3);
	layout->addWidget(instructions, 0, 4);
	layout->addWidget(playButtons, 2, 0, 1, 5);
	
	setLayout(layout);
}
