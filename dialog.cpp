#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setclient(Client c)
{
    ui->lineEdit->setText(c.get_cin());
    ui->lineEdit_3->setText(c.get_nom());
    ui->lineEdit_2->setText(c.get_prenom());
}
