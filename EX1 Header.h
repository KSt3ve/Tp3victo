//
// Created by victo on 20/03/2020.
//

#ifndef TP3VICTO_EX1_HEADER_H
#define TP3VICTO_EX1_HEADER_H

#include <QMainWindow>
#include <QObject>
#include <QLabel>
#include <QProgressBar>
#include <QSlider>

class mainWindow_Exo1: public QMainWindow{

    Q_OBJECT;

public:

    mainWindow_Exo1(QWidget* parent = nullptr);

private:

    QProgressBar* pBar;
    QSlider* slider;

};

#endif //TP3VICTO_EX1_HEADER_H
