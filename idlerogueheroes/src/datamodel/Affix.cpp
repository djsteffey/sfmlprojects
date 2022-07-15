#include "Affix.hpp"

namespace irh {
	namespace datamodel {
		Affix::Affix(enums::EAttributeType attributeType) {
			this->attributeType = enums::EAttributeType::NONE;
			this->rangeMin.asInt = 0;
			this->rangeMax.asInt = 0;
			this->actual.asInt = 0;
			this->isFloat = false;
		}

		Affix::Affix(enums::EAttributeType attributeType, int min, int max, int actual) {
			this->attributeType = attributeType;
			this->rangeMin.asInt = 0;
			this->rangeMax.asInt = 0;
			this->actual.asInt = 0;
			this->isFloat = false;
		}

		Affix::Affix(enums::EAttributeType attributeType, float min, float max, float actual) {
			this->attributeType = attributeType;
			this->rangeMin.asFloat = 0;
			this->rangeMax.asFloat = 0;
			this->actual.asFloat = 0;
			this->isFloat = false;
		}

		Affix::~Affix() {

		}
	}
}