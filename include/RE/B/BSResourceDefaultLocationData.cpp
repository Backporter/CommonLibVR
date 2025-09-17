#include "../B/BSResourceDefaultLocationData.h"

namespace RE::BSResource
{
	DefaultLocationData* DefaultLocationData::GetSingleton()
	{
		REL::Relocation<DefaultLocationData**> singleton{RELOCATION_ID(523873, 410449)};
		return *singleton;
	}
}