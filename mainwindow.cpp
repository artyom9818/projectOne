#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString num=ui->lineEdit->text();


    QString arrayStr;

    int chislo=num.toInt();

    char s[50];
        int i=0;
        while (chislo>0) {
        s[i] = chislo%2;
        chislo /= 2;
        i++;
        }
      i--;

        while (i>=0) {

            arrayStr +=QString::number(s[i]);
            i--;
        }




    ui->lineEdit_2-> setText(arrayStr);


}
