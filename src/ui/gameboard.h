#pragma once

#include <QWidget>
#include <QLabel>
#include <QString>

class GameBoard : public QWidget
{
	Q_OBJECT

public:
	explicit GameBoard(QWidget* parent = nullptr);
	bool update_card(QString card_path);

private slots:

private:
	QLabel* title_label;
	QLabel* card_label;
};
