#ifndef OI_MYSQLHANDLER_H
#define OI_MYSQLHANDLER_H

using namespace std;

#include "main.h"

class oi_mysqlhandler
{
public:
    setVars(int Poort,QString databaseName, QString Username, QString Password, QString Ip);
    getVars();
    setupConnection();
    executeQuery(QList<QString> a);
};

#endif // OI_MYSQLHANDLER_H
