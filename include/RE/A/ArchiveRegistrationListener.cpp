#include "../A/ArchiveRegistrationListener.h"
#include "../B/BSResourceEventSources.h"

namespace RE
{
	ArchiveRegistrationListener::ArchiveRegistrationListener()
	{
		stl::emplace_vtable(this);
		BSResource::EventSources::GetSingleton()->archiveRegistrationListener.AddEventSink(this);
	}
	
	ArchiveRegistrationListener::~ArchiveRegistrationListener()
	{
		BSResource::EventSources::GetSingleton()->archiveRegistrationListener.RemoveEventSink(this);
	}
}