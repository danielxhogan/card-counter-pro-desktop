#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent)
{
    centralWidget = new CentralWidget(this);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
}
