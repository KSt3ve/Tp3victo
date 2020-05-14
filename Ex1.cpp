//
// Created by victo on 20/03/2020.
//

#include "mainWindow_Exo1.h"
#include <QVBoxLayout>

mainWindow_Exo1::mainWindow_Exo1(QWidget *parent): QMainWindow(parent){
    this->setWindowTitle("Exo 1");
    this->setMinimumWidth(500);

    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    this->slider = new QSlider(Qt::Horizontal);

    slider->setRange(0,100);
    slider->setValue(0);
    slider->setGeometry(10,40,180,30);

    this->pBar = new QProgressBar();
    pBar->setRange(0,100);
    pBar->setValue(0);
    pBar->setGeometry(10,10,180,30);

    mainLayout->addWidget(pBar);
    mainLayout->addWidget(slider);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);


    connect(slider,SIGNAL(valueChanged(int)),pBar,SLOT(setValue(int)));
}