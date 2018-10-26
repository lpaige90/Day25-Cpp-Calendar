#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QGridLayout>
#include <QDateEdit>

class QVBoxLayout;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow();

private:
    QCalendarWidget *calendar;
    QWidget *centralWidget;
    QGridLayout *gridLayout;

    void setDateInfo();
    void setDateColors();
};

#endif // MAINWINDOW_H
