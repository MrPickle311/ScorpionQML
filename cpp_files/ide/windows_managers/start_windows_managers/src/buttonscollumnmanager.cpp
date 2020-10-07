#include "../include/buttonscollumnmanager.hpp"

namespace ide
{

ButtonsCollumnManager::ButtonsCollumnManager(Parent parent) :
    Manager_base{parent}
{
    notifyInvoke(function_name);
}

void ButtonsCollumnManager::startNewFileManager()
{
    notifyInvoke(function_name);
}

void ButtonsCollumnManager::startMainWindowManager(MainWindowExecuteMode const mode_)
{
    emit closing(ClosingCode::OpenMainWindow);
    using mode = MainWindowExecuteMode ;
    switch (mode_)
    {
        case mode::WithCode:// ładuje dokument i odpala menedżera i zamyka stare okno
        notifyEmit(function_name,mode_);
        //odpala okno z ładowaniem pliku
        break;
        case mode::WithoutCode:// od razu zamyka stare okno i odpala nowe okno
        notifyEmit(function_name,mode_);
        // odpala okno bez kodu
        break;
    }
}

void ButtonsCollumnManager::exit()
{
    notifyEmitWithoutCode(function_name);
    emit closing(ClosingCode::Exit);
}

}
