#ifndef DEMOWINDOW_H
#define DEMOWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QAction>
#include <QIcon>
#include <QDebug>
#include <fancytabbar.h>

class DemoWindow : public QMainWindow
{
    Q_OBJECT

public:
    DemoWindow(const FancyTabBar::TabBarPosition position, QWidget *parent = 0);
    ~DemoWindow();

private:
};

#endif // DEMOWINDOW_H
