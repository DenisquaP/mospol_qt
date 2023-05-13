//#include <QCoreApplication>
//#include <QtWidgets>
#include <iostream>
#include <QScriptEngine>

QVariant eval(QString expression)
{
    QScriptEngine engine;
    QScriptValue result = engine.evaluate(expression);
    return result.toNumber();
}


int main(int argc, char *argv[])
{
//    QCoreApplication app(argc, argv);

    QString expression = "2 + 2 * 3";
    QVariant result = eval(expression);
    std::cout << result.toString();

    return 0;
//    return app.exec();
}


