#pragma once

#include <QTextEdit>
#include <QWidget>
#include <QLabel>
#include <QComboBox>

class CentralWidget : public QWidget
{
	Q_OBJECT

public:
	explicit CentralWidget(QWidget* parent = nullptr);
	~CentralWidget();
	
private slots:

private:
	void create_test_combo();

	QLabel* test_label;
	QComboBox* test_combo;
};
