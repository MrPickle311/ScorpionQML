#pragma once

#include "IncludeArea.hpp"

namespace ide
{
	namespace start
	{
		class LoadFileWindowsManager : public StartWindowsManagerBase
		{
			Q_OBJECT
		public:
			LoadFileWindowsManager(Parent = nullptr);
		public:
			virtual ~LoadFileWindowsManager();
		public :
			void executeLoadFileWindow();
		};
	}
}
