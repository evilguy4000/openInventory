#include "oi_inventorywindow.h"
#include "ui_oi_inventorywindow.h"

OI_inventoryWindow::OI_inventoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OI_inventoryWindow)
{
    ui->setupUi(this);
}

OI_inventoryWindow::~OI_inventoryWindow()
{
    delete ui;
}
