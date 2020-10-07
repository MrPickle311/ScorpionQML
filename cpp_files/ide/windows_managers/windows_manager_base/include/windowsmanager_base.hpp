#ifndef WINDOWMANAGER_BASE_H
#define WINDOWMANAGER_BASE_H

#include "includeArea.hpp"

namespace ide
{

class WindowsManager_base : public Manager_base
{
public:
    explicit WindowsManager_base(Parent = nullptr);
};

}

#endif // WINDOWMANAGER_BASE_H
