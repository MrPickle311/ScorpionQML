#include "../include/WindowsManagerBase.hpp"

namespace ide
{

	WindowsManagerBase::WindowsManagerBase(QQmlApplicationEngine& engine, Parent parent):
		ManagerBase{parent},
		engine_{engine}
	{

	}

	QQmlApplicationEngine& WindowsManagerBase::engine()
	{
		return engine_;
	}

	WindowsManagerBase::~WindowsManagerBase()
	{

	}

}

