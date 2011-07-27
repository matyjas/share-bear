#include <QtGui/QApplication>
#include <QtDeclarative>
#include "sharecommand.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<ShareCommand>("ShareCommand", 1, 0, "ShareCommand");

    QDeclarativeView view;
    view.setSource(QUrl("qrc:/qml/main.qml"));
    view.showFullScreen();
    return app.exec();
}
