#pragma once

#include <QWidget>
#include <QLabel>

class PlayButtons : public QWidget
{
	Q_OBJECT

public:
	explicit PlayButtons(QWidget* parent = nullptr);

private slots:

private:
	QLabel* title_label;
};
