#ifndef APISINFO_H
#define APISINFO_H

#include <vector>
#include <iostream>
#include <QString>

class apiInfo {
public:

    typedef enum {
        API_TYPE_TRADING,
        API_TYPE_NEWINFO,
    } API_TYPE;

    explicit apiInfo(const QString& url, const std::vector<QString>& headers, const API_TYPE type) :
        mUrl(url),
        mHeaders(headers),
        mType(type)
    {}
    ~apiInfo() {}

    const QString& getUrl(void) const
    {
        return mUrl;
    }

    const std::vector<QString>& getHeaders(void) const
    {
        return mHeaders;
    }

    const API_TYPE getApiType(void) const
    {
        return mType;
    }

   friend std::ostream& operator<<(std::ostream& os, const apiInfo& ai)
   {
       os << "URL network " << ai.mUrl.toStdString() << std::endl;
       for (const QString& header: ai.mHeaders) {
           os << "Header " << header.toStdString() << std::endl;
        }

       return os;
   }
private:
    const QString mUrl;
    const std::vector<QString> mHeaders;
    const API_TYPE mType;
};

#endif // APISINFO_H
