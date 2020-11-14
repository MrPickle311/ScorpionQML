#pragma once

#include "IncludeArea.hpp"

namespace ide::start
{
	class LoadFileWindowsManager : public StartWindowsManagerBase
	{
		Q_OBJECT
	private:
		QQmlApplicationEngine& engine_;
	public:
		LoadFileWindowsManager(QQmlApplicationEngine&,Parent = nullptr);
	public:
		virtual ~LoadFileWindowsManager();
	public :
		void execute();
	};
}
