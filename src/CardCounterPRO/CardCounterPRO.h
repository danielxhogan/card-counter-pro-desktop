#pragma once

#ifndef CARD_COUNTER_PRO_H
#define CARD_COUNTER_PRO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CardCounterPRO; }
QT_END_NAMESPACE

class CardCounterPRO : public QMainWindow
{
	Q_OBJECT

public:
	CardCounterPRO(QWidget *parent = nullptr);
	~CardCounterPRO();

private:
	Ui::CardCounterPRO* ui;
};
#endif // CARD_COUNTER_PRO_H
