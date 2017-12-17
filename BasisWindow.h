//
// Created by yamany on 17/12/17.
//

#ifndef TUTORIALQT_BASISWINDOW_H
#define TUTORIALQT_BASISWINDOW_H

#include <iostream>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QPushButton;
QT_END_NAMESPACE


class BasisWindow:public QWidget {
Q_OBJECT

public:
    BasisWindow(QWidget *parent = nullptr);

private:
    QPushButton *button;

private slots:
    void print(){
        std::cout << "fuck" << std::endl;
    };

};

#endif //TUTORIALQT_BASISWINDOW_H
