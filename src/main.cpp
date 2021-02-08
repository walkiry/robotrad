#include "inc/mainwindow.h"

#include <apisInfo.h>
#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  //  MainWindow w;
    std::vector<QString> vector = {QString("PKA83BHP88VXZBOJQE9S"), QString("H3N6n88Ei3PDgGszooVSZZ9tRiagR3rsAfSyS7x4")};
    apiInfo alpacamarket("https://paper-api.alpaca.markets", vector, apiInfo::API_TYPE::API_TYPE_TRADING);

    std::cout << "Getting market information from " << alpacamarket << std::endl;
 //   w.show();
    return a.exec();
}
