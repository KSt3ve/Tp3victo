//
// Created by victo on 20/03/2020.
//

#ifndef TP3VICTO_EX2HEADER_H
#define TP3VICTO_EX2HEADER_H

#include <QMainWindow>
#include <QObject>
#include <QPushButton>
#include <QTextEdit>

class mainWindow_Exo2: public QMainWindow{

    Q_OBJECT;

public:

    mainWindow_Exo2(QWidget* parent = nullptr);

private:

    QPushButton* button;
    int value = 0;
    QTextEdit* textEdit;

public slots:
    void nameButton();
    void showExo1();
};

#endif //TP3VICTO_EX2HEADER_H
