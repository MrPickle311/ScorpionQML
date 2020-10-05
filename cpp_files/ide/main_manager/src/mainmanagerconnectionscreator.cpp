#include "../include/mainmanagerconnectionscreator.hpp"

namespace ide
{

MainManager_connectionsCreator::MainManager_connectionsCreator(QObject* parent,
                                                               QSharedPointer<Managers_executer>& me,
                                                               QSharedPointer<MainManager_notifier>& mmn):
    QObject{parent},
    me_{me},
    mmn_{mmn}
{

}

MainManager_connectionsCreator& MainManager_connectionsCreator::createConnections()
{
    return *this;
}

MainManager_connectionsCreator& MainManager_connectionsCreator::createManagers_executerConnections()
{
    return *this;
}

MainManager_connectionsCreator& MainManager_connectionsCreator::createMainManager_notifierConnections()
{
    return *this;
}


}
