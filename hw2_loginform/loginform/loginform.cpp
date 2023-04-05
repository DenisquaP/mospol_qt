#include <QtWidgets>
#include "loginform.h"

LoginForm::LoginForm(QWidget *parent)
    : QDialog(parent)
{
    QRegularExpression email_reg("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    QValidator *email_validator = new QRegularExpressionValidator(email_reg, this);

    QRegularExpression name_reg("[A-Z][a-z]+");
    QValidator *name_validator = new QRegularExpressionValidator(name_reg, this);

    QRegularExpression passw_reg(".{1,6}");
    QValidator *passw_validator = new QRegularExpressionValidator(passw_reg, this);


    name_label = new QLabel(tr("Name"));
    name_lineEdit = new QLineEdit;
    name_lineEdit->setValidator(name_validator);
    name_label->setBuddy(name_lineEdit);

    email_label = new QLabel(tr("Email"));
    email_lineEdit = new QLineEdit;
    email_lineEdit->setValidator(email_validator);
    email_label->setBuddy(email_lineEdit);

    passw_label = new QLabel(tr("Password"));
    passw_lineEdit = new QLineEdit;
    passw_lineEdit->setValidator(passw_validator);
    passw_label->setBuddy(passw_lineEdit);



    reg_button = new QPushButton(tr("Register"));
    reg_button->setDefault(true);
    reg_button->setEnabled(false);

    close_button = new QPushButton(tr("Close"));
    connect(close_button, SIGNAL(clicked()), this, SLOT(close()));
    connect(reg_button, SIGNAL(clicked()), this, SLOT(close())); // тут закончил, нужно как-то активировать кнопку

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(name_label);
    leftLayout->addWidget(email_label);
    leftLayout->addWidget(passw_label);
    leftLayout->addWidget(close_button);



    QVBoxLayout *rightLayout = new QVBoxLayout;//менеджер вертикальной компоновки
    rightLayout->addWidget(name_lineEdit);
    rightLayout->addWidget(email_lineEdit);
    rightLayout->addWidget(passw_lineEdit);
    rightLayout->addWidget(reg_button);


    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);
}

void LoginForm::set_vision(){
    if(!name_lineEdit->text().isEmpty() && !email_lineEdit->text().isEmpty() && !passw_lineEdit->text().isEmpty()){
        reg_button->setEnabled(true);
    }
}




