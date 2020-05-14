//
// Created by victo on 20/03/2020.
//

#include "mainWindow_Exo2.h"
#include "mainWindow_Exo1.h"
#include <QVBoxLayout>
#include <QtWidgets>
#include <QString>
#include <iostream>

using namespace std;

mainWindow_Exo2::mainWindow_Exo2(QWidget *parent): QMainWindow(parent){

    this->setWindowTitle("Exo 2");
    this->setMinimumWidth(500);

    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    this->button = new QPushButton("Fils");
    this->textEdit = new QTextEdit("texte initiale");

    mainLayout->addWidget(button);
    mainLayout->addWidget(textEdit);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);


    connect(button,SIGNAL(clicked()),this,SLOT(nameButton()));
}

void mainWindow_Exo2::nameButton(){
    button->setText("Example");
    value++;
    textEdit->insertPlainText(QString("Exemple %1 \n").arg(value));
}

void mainWindow_Exo2::showExo1(){
    mainWindow_Exo1* window = new mainWindow_Exo1();
    window->show();
    this->hide();
}