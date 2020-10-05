#ifndef MAINMANAGER_HPP
#define MAINMANAGER_HPP

#pragma once

#include "mainmanagerconnectionscreator.hpp"

namespace ide
{

class MainManager : public QObject
{
    using Parent = QObject*;
    Q_OBJECT
private:
    QGuiApplication* app_;
    QSharedPointer<MainManager_notifier> mmn_;
    QSharedPointer<Managers_executer> me_;
    QSharedPointer<MainManager_connectionsCreator> connections_creator_;
public:// dodaj once_flag do konstruktora
    explicit MainManager();
    void run();
private:
    void setAllAppSettings();
    QWindowList getWindowsList();
    void registerTypes();
    void createConnections();
public:
    MainManager& operator= (MainManager&) = delete;
    void operator= (MainManager&&) = delete;
signals:
    void applicationCreated();
};

}



#endif // MAINMANAGER_HPP
