#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
#include<QDebug>
#include<QPixmap>
#include<QIcon>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->pushButton_5->setIcon((QIcon("/Users/POOJA/Pictures/CIA 2/CIA_2 POOJA ON.png")));
    ui->pushButton_5->setCheckable(true);
    ui->pushButton_5->setIcon((QIcon("/Users/POOJA/Pictures/CIA 2/CIA_2 POOJA OFF.png")));
    ui->pushButton_5->setCheckable(true);



}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_5_toggled(bool checked)
{
    if(checked)
       {
           qDebug()<<"Button Checked--ON--";
           ui->pushButton_5->setIcon(QIcon("C:/Users/POOJA/Pictures/CIA 2/CIA_2 POOJA ON.png"));
           ui->pushButton_5->setIconSize(QSize(100,100));
            ui->pushButton_5->setCheckable(true);
       }
       else
       {
           qDebug()<<"Button Checked--OFF--";
           ui->pushButton_5->setIcon(QIcon("C:/Users/POOJA/Pictures/CIA 2/CIA_2 POOJA OFF.jpeg"));
           ui->pushButton_5->setIconSize(QSize(100,100));
            ui->pushButton_5->setCheckable(true);
       }
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"POOJA 212218108041","THIS IS AN INFORMATION BOX");
}


void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"POOJA 212218108041","Do you like apple?",QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            QMessageBox::information(this,"APPLE","Yes");
        }
        if(reply == QMessageBox::No)
        {
            QMessageBox::information(this,"NO APPLE","No");
        }

}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"POOJA 212218108041","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
        if(reply == QMessageBox::Yes)
        {
            qDebug() <<"Nothing is displayed";
        }
        if(reply == QMessageBox::YesToAll)
        {
           QMessageBox::warning(this,"POOJA 212218108041","Display the message with warning as YesToAll");
        }
        if(reply == QMessageBox::No)
        {
            qDebug() <<"Nothing is displayed";
        }
        if(reply == QMessageBox::NoToAll)
        {
           QMessageBox::warning(this,"POOJA 212218108041","Don't Display the message with warning as YesToAll");
        }

}

void Dialog::on_pushButton_4_clicked()
{
     QMessageBox::warning(this,"POOJA 212218108041","This is a warning message");
}

