#pragma once

#include "WindowsManagerBase.hpp"

namespace ide
{
    namespace start
    {
		class StartWindowsManagerBase : public WindowsManagerBase
        {
            Q_OBJECT
        public:
			StartWindowsManagerBase(QQmlApplicationEngine&, Parent = nullptr);
        public:
			virtual ~StartWindowsManagerBase();
        };
    }
}
