#include "betselection.h"

#include <QGridLayout>

BetSelection::BetSelection(QWidget* parent) : QWidget(parent)
{
	title_label = new QLabel(tr("Bet Selection"));

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(title_label, 0, 0);

	setLayout(layout);
}
