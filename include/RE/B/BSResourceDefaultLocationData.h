#pragma once

#include "../B/BSTSingleton.h"
#include "../L/Location.h"

namespace RE
{
	namespace BSResource
	{
		class DefaultLocationData :
			public BSTSingletonSDM<DefaultLocationData>
		{
		public:
			inline static constexpr auto RTTI = RTTI_BSResource____DefaultLocationData;
			inline static constexpr auto VTABLE = VTABLE_BSResource____DefaultLocationData;

			DefaultLocationData();
			virtual ~DefaultLocationData();

			//
			static DefaultLocationData* GetSingleton();
		public:
			Location* locations[4];
		};
		static_assert(sizeof(DefaultLocationData) == 0x28);
	}
}