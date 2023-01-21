#pragma once
#include "gameboard.h"
#include "betselection.h"
#include "playbuttons.h"
#include "instructions.h"

#include <QWidget>

class CentralWidget : public QWidget
{
	Q_OBJECT

public:
	explicit CentralWidget(QWidget* parent = nullptr);
	
private slots:

private:
	GameBoard* gameBoard;
	BetSelection* betSelection;
	PlayButtons* playButtons;
	Instructions* instructions;
};
