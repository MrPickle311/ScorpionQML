#pragma once

#include "WindowsManagerBase.hpp"

namespace ide
{
    namespace start
    {
        class StartWindowsManagerBase : public WindowsManager_base
        {
            Q_OBJECT
        public:
            StartWindowsManagerBase(Parent = nullptr);
        public:
            ~StartWindowsManagerBase();
        };
    }
}
