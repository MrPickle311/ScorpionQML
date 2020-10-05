#include "../include/startwindowmanager.hpp"

namespace ide
{

StartWindowsManager::StartWindowsManager(QObject* parent) :
    QObject{parent},
    swme_{new QQmlApplicationEngine{parent}},
    bcm_{new ButtonsCollumnManager{parent}},
    cc_{new ConnectionsCreator{parent}},
    rfm_{new RecentFilesManager{parent}}
{

}

void StartWindowsManager::registerTypes()
{
    this->swme_->rootContext()->setContextProperty("ButtonsCollumnManager",bcm_.get());
}

void StartWindowsManager::registerEnums()
{
    qRegisterMetaType<Codes::MainWindowExecuteMode>("MainWindowExecuteMode");
    qRegisterMetaType<Codes::MainWindowExecuteMode>("ClosingCode");
    qmlRegisterUncreatableType<Codes>("types.windows.startwindows",1,0,"Codes","This is only code class");
    qDebug("StartWindowsManager has registered enums properly");
}

void StartWindowsManager::close(StartWindowsManager::ClosingCode code)
{
    qDebug("StartWindowsManager emits closing");
    emit closing(code);
}

void StartWindowsManager::executeStartWindow()
{
    qDebug("start displaying StartWindow");
    swme_->load(StartWindowQmlFilesManager::get().getStartWindowUrl());
    qDebug("StartWindow was shown properly");
}

void StartWindowsManager::executeConnectionsCreator()
{

}

void StartWindowsManager::runStartWindowsManager()
{
    executeStartWindow();
    qDebug("StartWindowsManager has been properly executed");
}

}
