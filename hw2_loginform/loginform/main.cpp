#include "loginform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LoginForm *dialog = new LoginForm;

    dialog->show();

    return app.exec();
}
