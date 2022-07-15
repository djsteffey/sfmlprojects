#pragma once

#include "enums.hpp"

namespace irh {
	namespace datamodel {
		class Affix {
		public:
			Affix(enums::EAttributeType attributeType);
			Affix(enums::EAttributeType attributeType, int min, int max, int actual);
			Affix(enums::EAttributeType attributeType, float min, float max, float actual);
			~Affix();

		protected:

		private:
			enums::EAttributeType attributeType;
			union {
				int asInt;
				float asFloat;
			} rangeMin;
			union {
				int asInt;
				float asFloat;
			} rangeMax;
			union {
				int asInt;
				float asFloat;
			} actual;
			bool isFloat;
		};
	}
}