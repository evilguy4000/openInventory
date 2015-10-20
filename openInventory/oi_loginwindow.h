#ifndef OI_LOGINWINDOW_H
#define OI_LOGINWINDOW_H

#include <QMainWindow>

#include "main.h"

using namespace std;

namespace Ui {
class OI_loginWindow;
}

class OI_loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OI_loginWindow(QWidget *parent = 0);
    ~OI_loginWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::OI_loginWindow *ui;
};

#endif // OI_LOGINWINDOW_H
