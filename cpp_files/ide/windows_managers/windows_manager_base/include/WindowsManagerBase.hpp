#pragma once

#include "IncludeArea.hpp"
#include "EnginesManager.hpp"

namespace ide
{

class WindowsManager_base : public Manager_base
{
	Q_OBJECT
public:
	explicit WindowsManager_base(Parent = nullptr);
public:
	virtual ~WindowsManager_base();
};

}

