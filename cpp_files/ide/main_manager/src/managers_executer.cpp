#include "../include/managers_executer.hpp"

namespace ide

{

Managers_executer::Managers_executer(QObject* parent) :
    QObject{parent},
    swm_{new StartWindowsManager{parent}},
    mwm_{new MainWindowManager{parent}}
{

}

void Managers_executer::registerTypes()
{
    swm_->registerTypes();
}

void Managers_executer::registerEnums()
{
    swm_->registerEnums();
}

void Managers_executer::executeStartWindowsManager()
{
    swm_->runStartWindowsManager();
    emit startWindowsManagerExecuted();
}

void Managers_executer::executeMainWindowsManager()
{
    emit mainWindowsManagerExecuted();
}

}
