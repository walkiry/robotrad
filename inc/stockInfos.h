#ifndef STOCK_INFO_H
#define STOCK_INFO_H

#include <QObject>
#include <QString>
#include <cstdint>


/**
 * @brief This is a collection of class, typedef that are
 *          quantify a stock informatino.
 */
namespace stockinfo {
    typedef enum {
           Stock_Buy,
           Stock_Sell,
    } StockOrderType;

    class StockOrder {
        StockOrder(const std::uint64_t ts) {}
        ~StockOrder {}
     private:
        std::uint64_t timestamp_stock;

    };

    class StockInfo {
    public:
        StockInfo(const QString &Name) {}
        ~StockInfo {}
        std::uint64_t timestamp_stock;
    private:
       const QString mStockName;

    };

    class HistoryStock {
        HistoryStock() {}
        ~HistorStock() {}
    private:
        const QString stockname;
        std::vector<StockInfo
    };
};

#endif //STOCK_INFO_H
