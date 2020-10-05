#include "../include/buttonscollumnmanager.hpp"

namespace ide
{

ButtonsCollumnManager::ButtonsCollumnManager(QObject* parent) : QObject{parent}
{

}

void ButtonsCollumnManager::startNewFileManager()
{
    qDebug("ButtonsCollumnManager::startNewFileManager() invoked");
}

void ButtonsCollumnManager::startMainWindowManager(MainWindowExecuteMode const mode_)
{
    emit closing(Codes::ClosingCode::OpenMainWindow);
    using mode = Codes::MainWindowExecuteMode ;
    switch (mode_)
    {
        case mode::WithCode:// ładuje dokument i odpala menedżera i zamyka stare okno
        qDebug("ButtonsCollumnManager::startMainWindowManager(MainWindowExecuteMode mode_) invoked, mode_ = WithCode");
        //odpala okno z ładowaniem pliku
        break;
        case mode::WithoutCode:// od razu zamyka stare okno i odpala nowe okno
        qDebug("ButtonsCollumnManager::startMainWindowManager(MainWindowExecuteMode mode_) invoked, mode_ = WithoutCode");
        // odpala okno bez kodu
        break;
    }
}

void ButtonsCollumnManager::exit()
{
    qDebug("ButtonsCollumnManager::exit() invoked");
   // emit closing(Codes::ClosingCode::Exit);
}

}
