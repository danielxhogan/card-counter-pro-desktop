#include "centralwidget.h"
#include "env.h"

#include <QGridLayout>
#include <QImage>
#include <QPixmap>
#include <QString>
#include <QLabel>

#include <iostream>
#include <format>

CentralWidget::CentralWidget(QWidget* parent) :
	QWidget(parent)
{
	QPixmap* image = new QPixmap(100, 300);
	QString image_dir = INSTALL_IMAGES_DIR;
	image_dir.append("/cards/02_of_spades.png");

	// attempts to get image from install dir first
	// if not found, checks buld dir
	if (!image->load(image_dir)) {
		image_dir = BUILD_IMAGES_DIR;
		image_dir.append("/cards/02_of_spades.png");
		image->load(image_dir);
	}

	//QImage* image = new QImage(image_dir);

	QLabel* image_label = new QLabel;
	image_label->setPixmap(*image);


	create_test_combo();
	
	QGridLayout* layout = new QGridLayout;
	layout->addWidget(test_label, 0, 0);
	layout->addWidget(test_combo, 0, 1);
	layout->addWidget(image_label, 0, 3);
	
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
