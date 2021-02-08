#ifndef RESTAPICONNECTIONS_H
#define RESTAPICONNECTIONS_H

#include <QObject>

class restAPIConnections : public QObject
{
    Q_OBJECT
public:
    explicit restAPIConnections(QObject *parent = nullptr);

signals:

};

#endif // RESTAPICONNECTIONS_H
