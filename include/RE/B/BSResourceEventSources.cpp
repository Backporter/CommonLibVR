#include "BSResourceEventSources.h"

namespace RE::BSResource
{
	EventSources* EventSources::GetSingleton()
	{
		REL::Relocation<EventSources**> singleton{RELOCATION_ID(523853, 410419)};
		return *singleton;
	}
}