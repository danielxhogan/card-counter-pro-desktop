#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent)
{
    centralWidget = new CentralWidget;
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
}
