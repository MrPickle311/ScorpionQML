#ifndef RECENTFILESMANAGER_HPP
#define RECENTFILESMANAGER_HPP

#include "includeArea.hpp"

namespace ide
{

class RecentFilesManager : public Manager_base
{
public:
    explicit RecentFilesManager(Parent = nullptr);
};

}
#endif // RECENTFILESMANAGER_HPP
