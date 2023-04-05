#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include <QDialog>
#include <QRegularExpression>

class QLabel;

class QLineEdit;

class QPushButton;

class LoginForm : public QMainWindow
{
    Q_OBJECT//макрос для MOC

    public:

        explicit LoginForm(QWidget *parent = 0);//объявление конструктора, для которого невозможно неявное преобразование типов при инициализации. В конструкторе указывается родительский виджет. По умолчанию он равен 0, это значит что у данного виджета нет родителя


    public slots:
        void enable_reg_button(const QString &str);

    private:


        QLabel *name_label;
        QLabel *email_label;
        QLabel *passw_label;

        QLineEdit *name_lineEdit;
        QLineEdit *email_lineEdit;
        QLineEdit *passw_lineEdit;

        QPushButton *reg_button;

        QPushButton *close_button;
};
#endif // LOGINFORM_H
