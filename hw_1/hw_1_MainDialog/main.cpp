#include "maindialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainDialog *dialog = new MainDialog;
    dialog->resize(400, 300);
    dialog->show();

    return app.exec();
}
