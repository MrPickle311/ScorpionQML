#include "../include/ManagerBase.hpp"

namespace ide
{

Manager_base::Manager_base(Parent parent) :
    QObject{parent},
	IdeObject{},
    UserNotifier{}
{

}

Manager_base::~Manager_base()
{}

}
