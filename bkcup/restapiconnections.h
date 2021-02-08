#ifndef RESTAPICONNECTIONS_H
#define RESTAPICONNECTIONS_H

#include <QObject>
#include <QString>
#include <vector>
#include <map>

class listAPIs {
public:
    listAPIs (const QString& url, std::vector<const QString>& headers, const std::map<const QString, const QString>& listFuncs)
        : mUrl(url), mHeaders(headers), mlistFuncs(listFuncs)
    {}

    const QString& operator[] (QString& key) const
    {
        static const QString defaultS("");
        if (mlistFuncs.find(key) == mlistFuncs.end()) {
            return defaultS;
        }

        return mlistFuncs[key];
    }

    const std::vector<const QString>& getHeaders(void) const
    {
        return mHeaders;
    }

    const QString& getUrl(void) const
    {
        return mUrl;
    }

private:
    const QString& mUrl;
    const std::vector<const QString>& mHeaders;
    const std::map<const QString, const QString>& mlistFuncs;
};

class restAPIConnections : public QObject
{
    Q_OBJECT
public:
    explicit restAPIConnections(QObject *parent = nullptr);


};

#endif // RESTAPICONNECTIONS_H
