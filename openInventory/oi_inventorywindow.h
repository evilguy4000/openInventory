#ifndef OI_INVENTORYWINDOW_H
#define OI_INVENTORYWINDOW_H

#include <QMainWindow>

#include "main.h"

using namespace std;

namespace Ui {
class OI_inventoryWindow;
}

class OI_inventoryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OI_inventoryWindow(QWidget *parent = 0);
    ~OI_inventoryWindow();

private:
    Ui::OI_inventoryWindow *ui;
};

#endif // OI_INVENTORYWINDOW_H
