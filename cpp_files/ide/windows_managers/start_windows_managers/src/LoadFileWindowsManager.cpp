#include "../include/LoadFileWindowsManager.hpp"

namespace ide
{
	namespace start
	{

		LoadFileWindowsManager::LoadFileWindowsManager(QQmlApplicationEngine& engine, Parent parent):
			StartWindowsManagerBase{engine,parent},
			engine_{engine}
		{

		}

		LoadFileWindowsManager::~LoadFileWindowsManager()
		{

		}

		void LoadFileWindowsManager::execute()
		{
			engine_.load(StartWindowQmlFilesManager::get().getLoadWindowUrl());
		}
	}
}
