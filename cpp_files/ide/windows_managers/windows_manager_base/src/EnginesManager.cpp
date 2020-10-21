#include "../include/EnginesManager.hpp"

namespace ide
{
	EnginesManager::EnginesManager()
	{}

	EnginesManager::~EnginesManager()
	{}

	QQmlApplicationEngine& EnginesManager::start_engine()
	{
		static QQmlApplicationEngine engine_;
		return  engine_;
	}

	QQmlApplicationEngine& EnginesManager::main_engine()
	{
		static QQmlApplicationEngine engine_;
		return  engine_;
	}

	namespace start
	{
		QQmlApplicationEngine& engine()
		{
			return ide::EnginesManager::start_engine();
		}
	}

	namespace main
	{

		QQmlApplicationEngine& engine()
		{
			return ide::EnginesManager::main_engine();
		}


	}
}

