#include "../include/mainmanager_notifier.hpp"

namespace ide 
{

MainManager_notifier::MainManager_notifier(QObject* parent) : QObject{parent}
{
    qDebug("MainManager_notifier has been created");
}


}
