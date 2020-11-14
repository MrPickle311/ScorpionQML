#pragma once

#include "IncludeArea.hpp"

namespace ide::start
{
	class NewFileWindowManager : public StartWindowsManagerBase
	{
		Q_OBJECT
	public:
		NewFileWindowManager(QQmlApplicationEngine&,Parent = nullptr );
	public:
		virtual ~NewFileWindowManager();
	public:
		void execute();
	public slots:
		//void closeWindow();
	};
}



