#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QComboBox>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();

private:
    void createTestCombo();

    QLabel* testLabel;
    QComboBox* testCombo;
};

#endif // MAINWINDOW_H
