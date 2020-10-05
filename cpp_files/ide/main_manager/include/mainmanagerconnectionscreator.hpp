#ifndef MAINMANAGERCONNECTIONSCREATOR_HPP
#define MAINMANAGERCONNECTIONSCREATOR_HPP

#include "includeArea.hpp"
#include "managers_executer.hpp"
#include "mainmanager_notifier.hpp"

namespace ide
{
class MainManager_connectionsCreator : public QObject
{
    Q_OBJECT
    using self = MainManager_connectionsCreator&;
    using Parent = QObject*;
    using Creator = MainManager_connectionsCreator;
    template<typename T>
    using Pointer = QSharedPointer<T>&;
public:
    explicit MainManager_connectionsCreator(Parent ,Pointer<Managers_executer>,Pointer<MainManager_notifier>);
private:
    QSharedPointer<Managers_executer> me_;
    QSharedPointer<MainManager_notifier> mmn_;
private:
    Creator& operator= ( self ) = delete;
    void operator= ( Creator&& ) = delete;
public:
    self createConnections();
    self createManagers_executerConnections();
    self createMainManager_notifierConnections();
};

}
#endif // MAINMANAGERCONNECTIONSCREATOR_HPP
