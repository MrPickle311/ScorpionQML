#pragma once

#include "UserNotifier.hpp"

namespace ide
{

	namespace impl
	{
		class codes_decl_Impl_base
		{
			Q_GADGET
		public:
			explicit codes_decl_Impl_base();
		public:
			virtual ~codes_decl_Impl_base();

		};

		class codes_decl_Impl_windows : public virtual codes_decl_Impl_base
		{
			Q_GADGET
		public:
			explicit codes_decl_Impl_windows();
		public:
			virtual ~codes_decl_Impl_windows();
		};

	}

	namespace Codes
	{
		using namespace impl;
		class StartWindows : public virtual codes_decl_Impl_windows
		{
			Q_GADGET
		public:
			explicit StartWindows();
		public:
			virtual ~StartWindows();
		public:
			enum class ClosingCode : int {Exit,OpenMainWindow, Error};
			enum class MainWindowExecuteMode : int {WithoutCode, WithCode};
			Q_ENUM(ClosingCode)
			Q_ENUM(MainWindowExecuteMode)
		};

		class MainWindows : public virtual codes_decl_Impl_windows
		{
			Q_GADGET
		public:
			explicit MainWindows();
		public:
			virtual ~MainWindows();
		};

	}

	template<typename T>
	using DependImplementation = impl::user_notifier_depend_Impl<T>;
	using IndependImplementation  = impl::user_notifier_independ_Impl;

	class UserNotifier : public virtual DependImplementation<Codes::StartWindows::ClosingCode>,
						 public virtual DependImplementation<Codes::StartWindows::MainWindowExecuteMode>,
						 public virtual IndependImplementation
	{
	public:
		explicit UserNotifier();
	public:
		virtual ~UserNotifier()
		{}
	private:
		void initCodes();
		void initClosingCodes();
		void initMainWindowExecuteModeCodes();
	private:
		using DependImplementation<Codes::StartWindows::MainWindowExecuteMode>::add_enum_value;
		using DependImplementation<Codes::StartWindows::ClosingCode>::add_enum_value;
	public:
		using DependImplementation<Codes::StartWindows::MainWindowExecuteMode>::getEnumName;
		using DependImplementation<Codes::StartWindows::ClosingCode>::getEnumName;
	public:
		using DependImplementation<Codes::StartWindows::MainWindowExecuteMode>::notifyEmit;
		using DependImplementation<Codes::StartWindows::ClosingCode>::notifyEmit;
	};

}
