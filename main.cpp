#include <QApplication>
#include <QtWidgets>
#include <QWidget>
#include "buttons.h"

int main(int argc, char *argv[]){
    QApplication program(argc, argv);

    QWidget window;
    QMessageBox::information(&window,"qNokiaTool","Before you start, flashing won't start unless you press ok!");
    buttons *ddv_sld = new buttons(&window);
    buttons *drg_b2n_ctl_pl2 = new buttons(&window);
    window.show();

    return program.exec();

    /*
    as usual compile using:
    $ qmake
    $ make
    then run the executable
    $ ./I_am_The_Senate
    */
}

