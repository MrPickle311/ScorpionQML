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

		void LoadFileWindowsManager::executeLoadFileWindow()
		{
			engine().load(StartWindowQmlFilesManager::get().getLoadWindowUrl());
		}
	}
}
