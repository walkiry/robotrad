#ifndef RESTAPICONNECTIONS_H
#define RESTAPICONNECTIONS_H

#include <QObject>
#include <QByteArray>
#include <QString>
#include <vector>
#include <apisInfo.h>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <iostream>

class restAPIConnections : public QObject
{
    Q_OBJECT
public:
    explicit restAPIConnections(const apiInfo& apiInfo, QObject *parent = nullptr):
        mApi(apiInfo),
        QObject(parent)
    {
        connect(&mNetAccMngr, &QNetworkAccessManager::finished,
                this, &restAPIConnections::restAPIConnection_ReplayFinished);
    }

    int     restAPIConnectCheck(const QString& apifunc)
    {
        QString totalURL = mApi.getUrl() + "/" + apifunc;
        QNetworkRequest netReq;
        const std::vector<QString> headers = mApi.getHeaders();
        netReq.setUrl(QUrl(totalURL));

        for (const QString& header: headers) {
           // netReq.setRawHeader(header);
        }

        mNetAccMngr.get(netReq);

        return 0;
    }

public slots:
    void restAPIConnection_ReplayFinished(QNetworkReply *reply)
    {
        QByteArray array = reply->readAll();
       // std::cout << array << std::end;
        reply->deleteLater();
    }

private:
    apiInfo mApi;
    QNetworkAccessManager mNetAccMngr;
};

#endif // RESTAPICONNECTIONS_H
