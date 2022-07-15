#include "Item.hpp"
#include "Affix.hpp"

namespace irh {
	namespace datamodel {
		Item::Item(unsigned long id, std::string name, int iLvl) {
			this->m_id = id;
			this->m_name = name;
			this->m_iLvl = iLvl;
		}

		Item::~Item() {

		}

		void Item::addAffix(std::unique_ptr<Affix> affix) {
			this->m_affixList.push_back(std::move(affix));
		}
	}
}