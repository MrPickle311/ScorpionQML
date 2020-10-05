#include "GlobalDefinitions.hpp"

void setAllAppAttributes()
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);
    qDebug("All attributes have been set");
}

