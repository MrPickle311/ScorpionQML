#ifndef MANAGER_BASE_HPP
#define MANAGER_BASE_HPP

#include "codesinfo.hpp"

namespace ide
{

class Manager_base : public CodesInfo
{
protected:
    using Parent = QObject*;
public:
    Manager_base(Parent = nullptr);
    virtual ~Manager_base();
};

}
#endif // MANAGER_BASE_HPP
