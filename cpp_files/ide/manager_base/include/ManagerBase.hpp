#pragma once

#include "CodesInfo.hpp"

namespace ide
{

class ManagerBase : public QObject,
                     public IdeObject,
                     public UserNotifier
{
    Q_OBJECT
protected:
    using Parent = QObject*;
public:
	ManagerBase(Parent = nullptr);
	virtual ~ManagerBase();
};

}
