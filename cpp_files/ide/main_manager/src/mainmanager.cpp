#include "../include/mainmanager.hpp"

namespace ide
{

MainManager::MainManager() :
    QObject{nullptr},
    app_{qGuiApp},
    mmn_{new MainManager_notifier{this}},
    me_{new Managers_executer{this}},
    connections_creator_{new MainManager_connectionsCreator{this,me_,mmn_}}
{
    qDebug("MainManager completed has been created");
}

void MainManager::registerTypes()
{
    me_->registerTypes();
    me_->registerEnums();
    qDebug("Registration completed");
}

void MainManager::createConnections()
{
    QObject::connect(this,&MainManager::applicationCreated,
                    me_.get(),&Managers_executer::executeStartWindowsManager);
    connections_creator_->createConnections()
            .createMainManager_notifierConnections()
            .createManagers_executerConnections();
    qDebug("All connections shave been set");
}

void MainManager::setAllAppSettings()
{
    app_->setQuitOnLastWindowClosed(false);
    qDebug("All settings have been set");
}

QWindowList MainManager::getWindowsList()
{
    qDebug("Returning all windows");
    return this->app_->allWindows();
}

void MainManager::run()
{
    registerTypes();
    createConnections();
    setAllAppSettings();
    emit applicationCreated();
    qDebug("Application created");
}

}


