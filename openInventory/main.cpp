#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    oi_mysqlhandler mh;
    mh.setVars(3306,"db_openInventory","root","","192.168.20.150");
    mh.setupConnection();

    OI_loginWindow w;
    w.show();

    return a.exec();
}
