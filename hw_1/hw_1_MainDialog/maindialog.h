#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>

class QLabel;

class QLineEdit;

class QPushButton;

class MainDialog : public QDialog
{
    Q_OBJECT//макрос для MOC

public:

    explicit MainDialog(QWidget *parent = nullptr);

private:
    QLabel *constant;
    QLabel *formula;
    QLabel *numerical_value;

    QLineEdit *const_lineEdit;
    QLineEdit *formula_lineEdit;
    QLineEdit *nv_lineEdit;

    QPushButton *clear_btn;
    QPushButton *add_btn;
};
#endif // LOGINFORM_H

