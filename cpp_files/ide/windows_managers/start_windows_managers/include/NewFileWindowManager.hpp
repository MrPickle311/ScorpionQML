#pragma once

#include "IncludeArea.hpp"

namespace ide::start
{
	class NewFileWindowManager : public StartWindowsManagerBase
	{
		Q_OBJECT
	public:
		NewFileWindowManager(Parent = nullptr );
	public:
		virtual ~NewFileWindowManager();
	public:
		void executeNewFileWindow();
	};
}



