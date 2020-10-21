#pragma once

#include <QQmlApplicationEngine>

namespace ide
{
	class EnginesManager
	{
	public:
		EnginesManager();
	public:
		~EnginesManager();
	public:
		static QQmlApplicationEngine& start_engine();
		static QQmlApplicationEngine& main_engine();
	};

	namespace start
	{
		QQmlApplicationEngine& engine();
	}

	namespace main
	{
		QQmlApplicationEngine& engine();
	}
}
