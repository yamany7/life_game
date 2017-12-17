#include <iostream>
#include <QApplication>
#include <BasisWindow.h>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    BasisWindow window;
    window.setFixedSize(QSize(1280, 780));
    window.show();


    return app.exec();
}