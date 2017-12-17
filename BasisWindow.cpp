//
// Created by yamany on 17/12/17.
//

#include "BasisWindow.h"
#include <QPushButton>
#include <QBoxLayout>

BasisWindow::BasisWindow(QWidget *parent) {
    button = new QPushButton("button1");
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(button);
    setLayout(layout);
    QObject::connect(button, SIGNAL(clicked()), SLOT(print()));
}
