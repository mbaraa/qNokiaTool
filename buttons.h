#ifndef BUTTONS_H
#define BUTTONS_H
#include <QApplication>
#include <QtWidgets>
#include <QMessageBox>

class buttons: public QWidget{
    Q_OBJECT
public slots:
    void ddv();
    void drg();

public:
    buttons(QWidget *parent);
private:
    QPushButton *btn1, *btn2, *kill;
    QLabel *label;

};

#endif // BUTTONS_H
