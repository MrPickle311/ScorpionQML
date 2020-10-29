#include "../include/LoadFileWindowsManager.hpp"

namespace ide
{
	namespace start
	{

		LoadFileWindowsManager::LoadFileWindowsManager(Parent parent):
			StartWindowsManagerBase{parent}
		{

		}

		LoadFileWindowsManager::~LoadFileWindowsManager()
		{

		}

		void LoadFileWindowsManager::execute()
		{
			engine().load(StartWindowQmlFilesManager::get().getLoadWindowUrl());
		}
	}
}
