#ifndef SHARECOMMAND_H
#define SHARECOMMAND_H

#include <QObject>

class ShareCommand: public QObject
{
    Q_OBJECT
public:
    explicit ShareCommand(QObject *parent = 0);

signals:

public slots:

    void share();
};

#endif // SHARECOMMAND_H
