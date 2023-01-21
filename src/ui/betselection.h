#pragma once

#include <QWidget>
#include <QLabel>

class BetSelection : public QWidget
{
	Q_OBJECT

public:
	explicit BetSelection(QWidget* parent = nullptr);

private slots:

private:
	QLabel* title_label;
};
