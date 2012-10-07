#include <QApplication>
#include "demowindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoWindow mwTop(FancyTabBar::TabBarPosition::Top);
    mwTop.show();

    DemoWindow mwBottom(FancyTabBar::TabBarPosition::Bottom);
    mwBottom.show();

    DemoWindow mwLeft(FancyTabBar::TabBarPosition::Left);
    mwLeft.show();

    DemoWindow mwRight(FancyTabBar::TabBarPosition::Right);
    mwRight.show();

    return a.exec();
}
