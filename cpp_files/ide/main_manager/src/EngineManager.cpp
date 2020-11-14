#include "../include/EngineManager.hpp"

namespace ide::main
{

	EngineManager::EngineManager(ManagerBase::Parent parent):
		ManagerBase{parent},engine_()
	{}

	EngineManager::~EngineManager() {}

	QQmlApplicationEngine& EngineManager::engine()
	{
		return engine_;
	}

}
