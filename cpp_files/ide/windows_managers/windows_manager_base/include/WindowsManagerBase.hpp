#pragma once

#include "IncludeArea.hpp"

namespace ide
{
	class WindowsManagerBase : public ManagerBase
	{
		Q_OBJECT
	private:
		QQmlApplicationEngine& engine_;
	protected:
		QQmlApplicationEngine& engine();
	public:
		explicit WindowsManagerBase(QQmlApplicationEngine& ,Parent = nullptr);
	public:
		virtual ~WindowsManagerBase();
	public:
		virtual void execute () = 0;
	};
}

