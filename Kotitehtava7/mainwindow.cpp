#include "mainwindow.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), counter(0) {

    QWidget *centralWidget=new QWidget(this);
    setCentralWidget(centralWidget);

    btnCount=new QPushButton("Count", this);
    btnReset=new QPushButton("Reset", this);
    txtResult=new QLineEdit("0", this);
    labelInfo=new QLabel("Painiketta painettu 0 kertaa", this);

    txtResult->setReadOnly(true);

    QVBoxLayout *layout=new QVBoxLayout(centralWidget);
    layout->addWidget(labelInfo);
    layout->addWidget(txtResult);
    layout->addWidget(btnCount);
    layout->addWidget(btnReset);

    connect(btnCount, &QPushButton::clicked, this, &MainWindow::onCountButtonClicked);
    connect(btnReset, &QPushButton::clicked, this, &MainWindow::onResetButtonClicked);
}

MainWindow::~MainWindow() {}

void MainWindow::onCountButtonClicked() {
    counter++;

    QString s=QString::number(counter);
    txtResult->setText(s);
    labelInfo->setText("Painiketta painettu "+s+" kertaa");
}

void MainWindow::onResetButtonClicked() {
    counter=0;

    txtResult->setText("0");
    labelInfo->setText("Painiketta painettu 0 kertaa");
}
