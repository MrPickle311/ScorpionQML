#pragma once

#include <QQmlApplicationEngine>
#include "includeArea.hpp"

namespace ide::main
{
	class EngineManager : public ManagerBase
	{
	private:
		QQmlApplicationEngine engine_;
	public:
		EngineManager(Parent parent = nullptr);
		virtual ~EngineManager();
	public:
		QQmlApplicationEngine& engine();
	};
}
