#include "../include/ManagerBase.hpp"

namespace ide
{

ManagerBase::ManagerBase(Parent parent) :
    QObject{parent},
	IdeObject{},
    UserNotifier{}
{

}

ManagerBase::~ManagerBase()
{}

}
