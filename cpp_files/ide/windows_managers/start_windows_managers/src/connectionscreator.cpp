#include "../include/connectionscreator.hpp"

namespace ide
{

ConnectionsCreator::ConnectionsCreator(QObject* parent) :
    QObject{parent}
{

}

ConnectionsCreator& ConnectionsCreator::createConnections()
{
    return *this;
}

ConnectionsCreator& ConnectionsCreator::createButtonsManagerConnections()
{
    return *this;
}

ConnectionsCreator& ConnectionsCreator::createRecentFilesManagerConnections()
{
    return *this;
}

}
