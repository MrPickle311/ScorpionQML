#pragma once

#include "IncludeArea.hpp"

namespace ide::start
{
	class ManagersExecuter : public Manager_base
	{
	public:
		explicit ManagersExecuter();
	public:
		virtual ~ManagersExecuter();
	public:
		void executeNewFileWindowsManager();
		void executeLoadFileWindowsManager();
	};
}
