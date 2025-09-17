#pragma once

#include "../B/BSTSingleton.h"
#include "../B/BSTEvent.h"
#include "../B/BSResourceArchiveRegisteredEvent.h"
#include "../B/BSResourceClearArchiveRegistryEvent.h"

namespace RE
{
	namespace BSResource
	{
		class EventSources :
			public BSTSingletonSDM<EventSources>
		{
			inline static constexpr auto RTTI = RTTI_BSResource____EventSources;
			inline static constexpr auto VTABLE = VTABLE_BSResource____EventSources;

			EventSources();
			virtual ~EventSources();

			//
			static EventSources* GetSingleton();
		public:
			BSTEventSource<void*>                                 Unk08;
			BSTEventSource<BSResource::ArchiveRegisteredEvent>    archiveRegistrationListener;
			BSTEventSource<BSResource::ClearArchiveRegistryEvent> clearArchiveRegistrationListener;
		};
	}
}