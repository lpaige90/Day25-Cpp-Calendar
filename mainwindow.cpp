#include "mainwindow.h"
#include <QTextStream>
#include <QDebug>
#include <QDate>
#include <QTextCharFormat>
#include <QBrush>

MainWindow::MainWindow() {
    calendar = new QCalendarWidget;
    centralWidget = new QWidget;
    gridLayout = new QGridLayout;

    gridLayout->addWidget(calendar);
    centralWidget->setLayout(gridLayout);

    setCentralWidget(centralWidget);

    setDateInfo();
    setDateColors();
}

void MainWindow::setDateInfo() {
    calendar->setMinimumDate(QDate(2018, 10, 1));
    calendar->setMaximumDate(QDate(2030, 12, 31));

    calendar->setFirstDayOfWeek(Qt::Monday);

    calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
}

void MainWindow::setDateColors() {
    QTextCharFormat weekendFormat;
    QTextCharFormat currentFormat;

    weekendFormat.setForeground(QBrush(QColor(255, 153, 187)));
    calendar->setWeekdayTextFormat(Qt::Saturday, weekendFormat);
    calendar->setWeekdayTextFormat(Qt::Sunday, weekendFormat);

    QDate currentDate = QDate::currentDate();

    currentFormat.setBackground(QBrush(QColor(179, 255, 217)));
    currentFormat.setForeground(QBrush(QColor(0, 0, 0)));
    calendar->setDateTextFormat(currentDate, currentFormat);
}
