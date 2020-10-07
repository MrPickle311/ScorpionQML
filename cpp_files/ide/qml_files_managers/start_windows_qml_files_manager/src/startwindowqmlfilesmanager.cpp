#include "../include/startwindowqmlfilesmanager.hpp"

namespace ide
{

StartWindowQmlFilesManager::StartWindowQmlFilesManager():
    startWindowUrl{"qrc:/qml_files/windows/start_windows/StartWindow.qml"}
{

}

QUrl StartWindowQmlFilesManager::getStartWindowUrl() const
{
    return startWindowUrl;
}

StartWindowQmlFilesManager& StartWindowQmlFilesManager::get()
{
    static StartWindowQmlFilesManager manager{};
    return manager;
}

}
