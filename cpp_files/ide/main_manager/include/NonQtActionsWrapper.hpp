#pragma once

#include <QObject>

namespace ide::main
{
	class NonQtActionsWrapper : public QObject
	{
		Q_OBJECT
	public:
		explicit NonQtActionsWrapper(QObject *parent = nullptr);

	signals:

	};
}


