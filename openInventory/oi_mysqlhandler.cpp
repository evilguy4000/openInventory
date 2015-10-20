#include "oi_mysqlhandler.h"

int poort;
QString dN;
QString U;
QString P;
QString I;
QSqlDatabase global;

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
   global = db;
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

QString oi_mysqlhandler::executeQuery(QString table, QString Value, QString searchValue, QString searchedItem)
{
    global.open();
    QSqlQuery q;
    q.prepare("SELECT "+searchedItem+ " FROM "+table+" WHERE "+ searchValue+" = "+searchedItem+";");
    q.exec();
    return q.value(0).toString();
}


