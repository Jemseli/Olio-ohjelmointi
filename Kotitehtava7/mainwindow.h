#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QPushButton *btnCount;
    QPushButton *btnReset;
    QLineEdit *txtResult;
    QLabel *labelInfo;

    int counter;

private slots:
    void onCountButtonClicked();
    void onResetButtonClicked();
};

#endif // MAINWINDOW_H
