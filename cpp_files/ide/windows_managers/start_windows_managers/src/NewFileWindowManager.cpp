#include "../include/NewFileWindowManager.hpp"

namespace ide::start
{
	NewFileWindowManager::NewFileWindowManager( Parent parent) :
		StartWindowsManagerBase{parent}
	{

	}

	NewFileWindowManager::~NewFileWindowManager()
	{

	}

	void NewFileWindowManager::execute()
	{
		engine().load(StartWindowQmlFilesManager::get().getNewFileWindowUrl());
	}
}

