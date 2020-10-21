#include "../include/UserNotifier.hpp"

namespace ide
{

	namespace impl
	{

		user_notifier_base::user_notifier_base()
		{}

		user_notifier_base::~user_notifier_base()
		{}

		void user_notifier_base::send_to_console(std::string msg)
		{
			qDebug(msg.c_str());
		}

		user_notifier_independ_Impl::user_notifier_independ_Impl() :
			user_notifier_base{},
			MessageCreator{}
		{

		}

		user_notifier_independ_Impl::~user_notifier_independ_Impl()
		{

		}

		void user_notifier_independ_Impl::notifyEmitWithoutCode(std::string func_name)
		{
			std::string msg{func_name + " has emitted without code"};
			send_to_console(msg);
		}

		void user_notifier_independ_Impl::notifyInvoke(std::string func_name)
		{
			std::string msg{func_name + " has been invoked"};
			send_to_console(msg);
		}

		void user_notifier_independ_Impl::notifyFunctionSuccess(std::string func_name)
		{
			std::string msg {func_name + " has been executed properly"};
			send_to_console(msg);
		}

		void user_notifier_independ_Impl::notifyWindowsShown(std::string func_name, std::string window_name)
		{
			std::string msg {window_name + " has been shown properly in function : " + func_name};
			send_to_console(msg);
		}

		void DebugMessage::setMsg(const std::string& msg)
		{
			msg_ = msg;
		}

		void DebugMessage::clearMsg()
		{
			msg_.clear();
		}

		DebugMessage::DebugMessage() :
			self{*this},
			msg_{}
		{

		}

		DebugMessage::~DebugMessage()
		{

		}

		DebugMessage& DebugMessage::all()
		{
			msg_ += " all";
			return self;
		}

		DebugMessage& DebugMessage::window(std::string window_name)
		{
			msg_ += " the " + window_name;
			return self;
		}

		DebugMessage& DebugMessage::shown()
		{
			msg_ += " has been shown";
			return self;
		}

		DebugMessage& DebugMessage::function(std::string func_name)
		{
			msg_ += " function " + func_name;
			return self;
		}

		DebugMessage& DebugMessage::type(std::string type_name)
		{
			msg_ += " type " + type_name;
			return self;
		}

		DebugMessage& DebugMessage::object(std::string type_name)
		{
			msg_ += " object of " + type_name;
			return self;
		}

		DebugMessage& DebugMessage::success()
		{
			msg_ += " with success";
			return self;
		}

		DebugMessage& DebugMessage::fail()
		{
			msg_ += "with fail";
			return self;
		}

		DebugMessage& DebugMessage::invoked()
		{
			msg_ += " has been invoked";
			return self;
		}

		DebugMessage& DebugMessage::and_()
		{
			msg_ += " and";
			return self;
		}

		DebugMessage& DebugMessage::or_()
		{
			msg_ += " or";
			return self;
		}

		DebugMessage& DebugMessage::types()
		{
			msg_ += " types";
			return self;
		}

		DebugMessage& DebugMessage::enums()
		{
			msg_ += " enums";
			return self;
		}

		DebugMessage& DebugMessage::registered()
		{
			msg_ += " has been registered";
			return self;
		}

		DebugMessage& DebugMessage::created()
		{
			msg_ += " has been created";
			return self;
		}

		DebugMessage& DebugMessage::executed()
		{
			msg_ += " has been executed";
			return self;
		}

		DebugMessage& DebugMessage::constructor(std::string)
		{
			msg_ += " constructor of";
			return self;
		}

		DebugMessage& DebugMessage::destructor(std::string)
		{
			msg_ += " destructor of";
			return self;
		}

		DebugMessage& DebugMessage::in()
		{
			msg_ += " in";
			return self;
		}

		DebugMessage& DebugMessage::with_message(std::string msg)
		{
			msg_ += " " + msg;
			return self;
		}

		void DebugMessage::end()
		{
			if(!msg_.empty())
				if(msg_[0] == ' ')
				{
					std::rotate(msg_.begin(),msg_.begin() + 1,msg_.end());
					if(islower(msg_[0]))
						if(isalpha(msg_[0]))
							msg_[0] = toupper(msg_[0]);
				}
			qDebug(msg_.c_str());
		}

		MessageCreator::MessageCreator()
		{

		}

		MessageCreator::~MessageCreator()
		{

		}

		DebugMessage& MessageCreator::notify()
		{
			dm_.clearMsg();
			return dm_;
		}

	}
}
