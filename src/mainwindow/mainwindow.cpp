#include "mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent)
{
    createTestCombo();

    QGridLayout* layout = new QGridLayout;
    layout->addWidget(testLabel, 0, 0);
    layout->addWidget(testCombo, 0, 1);

    setLayout(layout);
}

MainWindow::~MainWindow()
{
}

void MainWindow::createTestCombo()
{

    testCombo = new QComboBox;
    testCombo->addItem("Hi", 2);

    testLabel = new QLabel(tr("test"));
    testLabel->setBuddy(testCombo);
}

void MainWindow::on_actionNew_triggered()
{
    std::cout << "Clicked";
}

void MainWindow::on_actionOpen_triggered()
{
    std::cout << "Clicked";
}

