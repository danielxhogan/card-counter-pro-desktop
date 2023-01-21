#include "playbuttons.h"

#include <QGridLayout>

PlayButtons::PlayButtons(QWidget* parent) : QWidget(parent)
{
	title_label = new QLabel(tr("Play Buttons"));

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(title_label, 0, 0);

	setLayout(layout);
}
