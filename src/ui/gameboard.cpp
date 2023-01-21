#include "gameboard.h"

#include <QGridLayout>
#include <QPixmap>

GameBoard::GameBoard(QWidget* parent) : QWidget(parent)
{
	title_label = new QLabel(tr("Game Board"));
	card_label = new QLabel;

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(title_label, 0, 0);
	layout->addWidget(card_label, 1, 0);

	setLayout(layout);
}

bool GameBoard::update_card(QString card_path)
{
	QPixmap* card_image = new QPixmap;
	if (!card_image->load(card_path)) {
		return false;
	}
	card_label->setPixmap(*card_image);
	return true;

}
