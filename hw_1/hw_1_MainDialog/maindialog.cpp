#include <QtWidgets>
#include "maindialog.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
{
    constant = new QLabel(tr("Constant"));
    const_lineEdit = new QLineEdit;
    constant->setBuddy(const_lineEdit);

    formula = new QLabel(tr("Email"));
    formula_lineEdit = new QLineEdit;
    formula->setBuddy(formula_lineEdit);

    numerical_value = new QLabel(tr("Email"));
    nv_lineEdit = new QLineEdit;
    numerical_value->setBuddy(nv_lineEdit);

    add_btn = new QPushButton(tr("Add"));
    add_btn->setDefault(true);

    clear_btn = new QPushButton(tr("Clear"));

    connect(clear_btn, &QPushButton::clicked, this, [=](){
        const_lineEdit->clear();
        formula_lineEdit->clear();
        nv_lineEdit->clear();
    });
    connect(add_btn, SIGNAL(clicked()), this, SLOT(accept())); // тут закончил, нужно как-то активировать кнопку


    QHBoxLayout *btnlayout = new QHBoxLayout;
    btnlayout->addWidget(clear_btn);
    btnlayout->addWidget(add_btn);

    QVBoxLayout *toplayout = new QVBoxLayout;
    toplayout->addWidget(constant);
    toplayout->addWidget(const_lineEdit);
    toplayout->addWidget(formula);
    toplayout->addWidget(formula_lineEdit);
    toplayout->addWidget(numerical_value);
    toplayout->addWidget(nv_lineEdit);
    toplayout->addLayout(btnlayout);
    setLayout(toplayout);

}


