#include "CardCounterPRO.h"
#include "ui_CardCounterPRO.h"

CardCounterPRO::CardCounterPRO(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::CardCounterPRO)
{
	ui->setupUi(this);
}

CardCounterPRO::~CardCounterPRO()
{
	delete ui;
}
