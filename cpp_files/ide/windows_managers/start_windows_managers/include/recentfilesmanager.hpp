#ifndef RECENTFILESMANAGER_HPP
#define RECENTFILESMANAGER_HPP

#include "includeArea.hpp"

namespace ide
{

class RecentFilesManager : public QObject
{
    Q_OBJECT
    using Parent = QObject*;
public:
    explicit RecentFilesManager(Parent);
};

}
#endif // RECENTFILESMANAGER_HPP
