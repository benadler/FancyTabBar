#include <QMainWindow>
#include <QApplication>
#include <QAction>
#include <QIcon>
#include <QDebug>
#include <fancytabbar.h>

class DemoWindow2 : public QMainWindow
{
public:
    DemoWindow2(const FancyTabBar::TabBarPosition position, QWidget *parent = 0);
    ~DemoWindow2();

private:
};

DemoWindow2::DemoWindow2(const FancyTabBar::TabBarPosition position, QWidget *parent) : QMainWindow(parent)
{
    FancyTabBar* ftb = new FancyTabBar(position, this);
    ftb->insertTab(0, QIcon("./images/mode_Debug.png"), "Drugs\nManipulation");
    ftb->insertTab(0, QIcon("./images/mode_Edit.png"), "Monthly\nScorecards");
    ftb->insertTab(0, QIcon("./images/mode_Design.png"), "Warranty\nTransactions");
    ftb->insertTab(0, QIcon("./images/mode_Project.png"), "Fault\nManagement");
    ftb->setTabEnabled(0, true);
    ftb->setTabEnabled(1, true);
    ftb->setTabEnabled(2, true);
    ftb->setTabEnabled(3, true);

    qDebug() << "From Main Window Creation: " << ftb->sizeHint();

    setCentralWidget(ftb);

    if(position == FancyTabBar::TabBarPosition::Above) setWindowTitle("Top");
    if(position == FancyTabBar::TabBarPosition::Below) setWindowTitle("Bottom");
    if(position == FancyTabBar::TabBarPosition::Left) setWindowTitle("Left");
    if(position == FancyTabBar::TabBarPosition::Right) setWindowTitle("Right");
}

DemoWindow2::~DemoWindow2()
{

}

#include <QApplication>
#include "demowindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoWindow2 mwTop(FancyTabBar::TabBarPosition::Above);
    mwTop.show();

    DemoWindow2 mwBottom(FancyTabBar::TabBarPosition::Below);
    mwBottom.show();

    DemoWindow2 mwLeft(FancyTabBar::TabBarPosition::Left);
    mwLeft.show();

    DemoWindow2 mwRight(FancyTabBar::TabBarPosition::Right);
    mwRight.show();

    return a.exec();
}
