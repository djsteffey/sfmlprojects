#pragma once

namespace irh {
	namespace datamodel {
		struct Affix {
		public:
			Affix() {
				this->rangeMin.asInt = 0;
				this->rangeMax.asInt = 0;
				this->actual.asInt = 0;
				this->isFloat = false;
			}

			Affix(int min, int max, int actual) {
				this->rangeMin.asInt = 0;
				this->rangeMax.asInt = 0;
				this->actual.asInt = 0;
				this->isFloat = false;
			}

			~Affix() {

			}

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