#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void m_cmdline_modified(const QString &str);

private:
    Ui::MainWindow *ui;
    QPoint m_cmdline_pos;
    QString m_cmdline_str;

};
#endif // MAINWINDOW_H
