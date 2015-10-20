#include "oi_mysqlhandler.h"

int poort;
QString dN;
QString U;
QString P;
QString I;

oi_mysqlhandler::setVars(int Poort,QString Databasename, QString Username, QString Password, QString Ip)
{
    poort = Poort;
    dN = Databasename;
    U = Username;
    P = Password;
    I = Ip;
}

oi_mysqlhandler::getVars()
{

}
oi_mysqlhandler::setupConnection()
{
   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL3", "Name");
   db.setHostName(I);
   db.setDatabaseName(dN);
   db.setUserName(U);
   db.setPassword(P);
   bool ok = db.open();
   if(ok)
   {
       cout << "Database opened" << endl;
   }
   else
   {
       cout << "Error: 0x0001" << endl;
   }

}

oi_mysqlhandler::executeQuery(QList<QString> a)
{
    int l = a.length();
    cout << l << endl;
    foreach(QString st, a)
    {
        qDebug() << st;
    }
}


