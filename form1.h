#ifndef FORM1_H
#define FORM1_H

#include <QMainWindow>

namespace Ui {
class Form1;
}

class Form1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = 0);
    ~Form1();

private:
    DS1620_P8055 *capteurTemp;
    Ui::Form1 *ui;
    void on_ButtonLanceConv_clicked();
    void on_ButtonLectureAuto_clicked();
    void on_ButtonLectureTemp_clicked();
    void on_ButtonStopConv_clicked();
};

#endif // FORM1_H
