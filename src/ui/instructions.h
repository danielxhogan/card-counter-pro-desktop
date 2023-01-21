#pragma once

#include <QWidget>
#include <QLabel>

class Instructions : public QWidget
{
	Q_OBJECT

public:
	explicit Instructions(QWidget* parent = nullptr);

private slots:

private:
	QLabel* title_label;
};
