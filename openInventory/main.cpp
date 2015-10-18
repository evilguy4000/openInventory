#include "oi_inventorywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OI_inventoryWindow w;
    w.show();

    return a.exec();
}
