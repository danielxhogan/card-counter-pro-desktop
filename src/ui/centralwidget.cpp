#include "centralwidget.h"

#include <QGridLayout>

CentralWidget::CentralWidget(QWidget* parent) :
	QWidget(parent)
{
	create_test_combo();
	
	QGridLayout* layout = new QGridLayout;
	layout->addWidget(test_label, 0, 0);
	layout->addWidget(test_combo, 0, 1);
	
	setLayout(layout);
}

CentralWidget::~CentralWidget()
{
}

void CentralWidget::create_test_combo()
{
	test_combo = new QComboBox;
	test_combo->addItem("Hi", 2);

	test_label = new QLabel(tr("test"));
	test_label->setBuddy(test_combo);
}
