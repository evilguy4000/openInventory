#include "oi_loginwindow.h"
#include "ui_oi_loginwindow.h"

OI_loginWindow::OI_loginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OI_loginWindow)
{
    ui->setupUi(this);
}

OI_loginWindow::~OI_loginWindow()
{
    delete ui;
}

void OI_loginWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = QString(QCryptographicHash::hash((ui->lineEdit_2->text().toLatin1()),QCryptographicHash::Md5).toHex());
    oi_mysqlhandler mh;
    QString MD5Hash = mh.executeQuery("tbl_users",username,"username","password");
    qDebug() << password << " " << MD5Hash<< endl;
    /*
    if(password == MD5Hash)
    {
        cout << "Logged In" << endl;
    }
    else
    {
        cout << "Wrong Password" << endl;
    }
    */
}
