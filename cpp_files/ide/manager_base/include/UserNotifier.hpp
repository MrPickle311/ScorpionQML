#pragma once

#include "CodesImpl.hpp"

namespace ide
{

	namespace impl
	{

		class user_notifier_base
		{
		protected:
			user_notifier_base();
		public:
			virtual ~user_notifier_base();
		protected:
			virtual void send_to_console(std::string msg);
		};

		template <typename T>
		class user_notifier_depend_Impl : public codes_names_storage_Impl<T>,
										  public user_notifier_base
		{
			using impl = codes_names_storage_Impl<T>;
		public:
			user_notifier_depend_Impl() :
				impl{}
			{}
		public:
			virtual ~user_notifier_depend_Impl()
			{}
		public:
			void notifyEmit(std::string func_name,T code)
			{
				std::string msg{func_name + " has emitted " +  impl::getEnumName(code)+ " code"};
				send_to_console(msg);
			}
		};

		class DebugMessage
		{
			friend class MessageCreator;
		private:
			DebugMessage& self;
			std::string msg_;
		private:
			void setMsg(const std::string& msg);
			void clearMsg();
		public:
			DebugMessage();
		public:
			virtual ~DebugMessage();
		public:
			DebugMessage& all();
			DebugMessage& window(std::string);
			DebugMessage& shown();
			DebugMessage& function(std::string);
			DebugMessage& type(std::string);
			DebugMessage& object(std::string);
			DebugMessage& success();
			DebugMessage& fail();
			DebugMessage& invoked();
			DebugMessage& and_();
			DebugMessage& or_();
			DebugMessage& types();
			DebugMessage& enums();
			DebugMessage& registered();
			DebugMessage& created();
			DebugMessage& executed();
			DebugMessage& constructor(std::string);
			DebugMessage& destructor(std::string);
			DebugMessage& in();
			DebugMessage& with_message(std::string);
			void end();
		};

		///można ręcznie konstruować wiadomości
		class MessageCreator
		{
		private:
			DebugMessage dm_;
		public:
			MessageCreator();
		public:
			virtual ~MessageCreator();
		public:
			DebugMessage& notify();
		};

		/// ale też są predefiniowane wiadomości
		class user_notifier_independ_Impl : public user_notifier_base,
											public MessageCreator
		{
		public:
			user_notifier_independ_Impl();
		public:
			virtual ~user_notifier_independ_Impl();
		public:
			void notifyEmitWithoutCode(std::string func_name);
			void notifyInvoke(std::string func_name);
			void notifyFunctionSuccess(std::string func_name);
			void notifyWindowsShown(std::string func_name ,std::string window_name);
		};

	}

}
