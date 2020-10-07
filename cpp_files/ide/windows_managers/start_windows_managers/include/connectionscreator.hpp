#ifndef STARTCONNECTIONSCREATOR_HPP
#define STARTCONNECTIONSCREATOR_HPP

#include "includeArea.hpp"
#include "buttonscollumnmanager.hpp"
#include "recentfilesmanager.hpp"

namespace ide
{

class ConnectionsCreator : public QObject
{
    Q_OBJECT
    using self = ConnectionsCreator&;
    using Parent = QObject*;
public:
    explicit ConnectionsCreator(Parent = nullptr);
    self createConnections();
    self createButtonsManagerConnections();
    self createRecentFilesManagerConnections();
};

}
#endif // STARTCONNECTIONSCREATOR_HPP
