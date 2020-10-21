#include "../include/StartWindowQmlFilesManager.hpp"

namespace ide
{

	StartWindowQmlFilesManager::StartWindowQmlFilesManager():
		mainDirectory{"qrc:/qml_files/windows/ide_windows/start_windows/"},
		startWindowUrl{mainDirectory + "StartWindow.qml"},
		loadWindowUrl{mainDirectory + "LoadWindow.qml"},
		newFileWindowUrl{mainDirectory + "NewFileWindow.qml"}
	{

	}

	QUrl StartWindowQmlFilesManager::getLoadWindowUrl() const
	{
		return loadWindowUrl;
	}

	QUrl StartWindowQmlFilesManager::getNewFileWindowUrl() const
	{
		return newFileWindowUrl;
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
