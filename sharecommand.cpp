#include "sharecommand.h"

#include <QString>
#include <QDebug>
#include <MDataUri>
#include <ShareUI/ShareUiInterface>

ShareCommand::ShareCommand()
{
}

void ShareCommand::share () {

    QString link = "http://forum.nokia.com";

    QString title = "Forum Nokia";

    QString desc = "Support for Nokia Developers";



    qDebug() << "Make data URI from" << link << title << desc;



    MDataUri duri;

    duri.setMimeType ("text/x-url");

    duri.setTextData (link);

    duri.setAttribute ("title", title);

    duri.setAttribute ("description", desc);



    if (duri.isValid() == false) {

        qCritical() << "Invalid URI";

        return;

    }



    QStringList items;

    items << duri.toString();

    qDebug() << "URI:" << items.join (" ");



    // Create a interface object

    qDebug() << "Connecting to service" << SHAREUI_DBUS_SERVICE;

    ShareUiInterface shareIf(SHAREUI_DBUS_SERVICE, "/", QDBusConnection::sessionBus());



    // You can check if interface is valid

    if (shareIf.isValid()) {

        // Start ShareUI application with selected files.

        qDebug() << "Signalling share-ui daemon...";

        shareIf.share (items);

    } else {

        qCritical() << "Invalid interface";

        return;

    }

}
