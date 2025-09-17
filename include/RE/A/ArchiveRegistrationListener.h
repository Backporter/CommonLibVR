#pragma once

#include "../B/BSTEvent.h"
#include "../B/BSResourceArchiveRegisteredEvent.h"

namespace RE
{
	class ArchiveRegistrationListener :
		public BSTEventSink<BSResource::ArchiveRegisteredEvent>
	{
	public:
		inline static constexpr auto RTTI = RTTI___ArchiveRegistrationListener;
		inline static constexpr auto VTABLE = VTABLE___ArchiveRegistrationListener;
	public:
		ArchiveRegistrationListener();
		~ArchiveRegistrationListener();

		// override BSTEventSink<BSResource::ArchiveRegisteredEvent>
		BSEventNotifyControl ProcessEvent(const BSResource::ArchiveRegisteredEvent* a_event, BSTEventSource<BSResource::ArchiveRegisteredEvent>* a_source) override;
	};
}