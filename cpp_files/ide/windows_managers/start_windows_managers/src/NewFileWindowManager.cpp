#include "../include/NewFileWindowManager.hpp"

namespace ide
{
	namespace start
	{
		NewFileWindowManager::NewFileWindowManager( Parent parent) :
			StartWindowsManagerBase{parent}
		{

		}

		NewFileWindowManager::~NewFileWindowManager()
		{

		}

		void NewFileWindowManager::executeNewFileWindow()
		{
			engine().load(StartWindowQmlFilesManager::get().getNewFileWindowUrl());
		}
	}
}

