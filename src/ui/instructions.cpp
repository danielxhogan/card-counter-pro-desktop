#include "instructions.h"

#include <QGridLayout>

Instructions::Instructions(QWidget* parent) : QWidget(parent)
{
	title_label = new QLabel(tr("Instructions"));

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(title_label, 0, 0);

	setLayout(layout);
}
