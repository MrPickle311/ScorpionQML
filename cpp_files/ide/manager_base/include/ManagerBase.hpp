#pragma once

#include "CodesInfo.hpp"

namespace ide
{

class Manager_base : public QObject,
                     public IdeObject,
                     public UserNotifier
{
    Q_OBJECT
protected:
    using Parent = QObject*;
public:
    Manager_base(Parent = nullptr);
    virtual ~Manager_base();
};

}
