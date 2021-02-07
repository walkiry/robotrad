#include "inc/mainwindow.h"
#include "./ui_mainwindow.h"

#define PS1 "$ >: "

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_cmdline_pos(0,sizeof(PS1)),
      m_cmdline_str(PS1)
{
    ui->setupUi(this);
    ui->cmdline->setText(m_cmdline_str);
    QObject::connect(ui->cmdline, &QLineEdit::textEdited,
                     this, &MainWindow::m_cmdline_modified);

}

void MainWindow::m_cmdline_modified(const QString &str)
{
   if (str.length() < (qsizetype) sizeof(PS1))
    {
        // ui->cmdline->setText(m_cmdline_str);
        ui->cmdline->clear();
        ui->cmdline->setText(m_cmdline_str);
        return;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


