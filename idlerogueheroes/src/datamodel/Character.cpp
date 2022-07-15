#include "Character.hpp"
#include "Inventory.hpp"
#include "Item.hpp"

namespace irh {
	namespace datamodel {
		Character::Character() {
			this->m_inventory = std::make_unique<Inventory>();
		}

		Character::~Character() {

		}

		int Character::getInventoryCount() {
			return this->m_inventory->getItemCount();
		}

		Item* Character::getInventoryItem(int index) {
			return this->m_inventory->getItem(index);
		}

		Item* Character::getEquipmentItem(enums::EItemSlot slot) {
			return this->m_equipment[slot].get();
		}

		void Character::setEquipmentItem(enums::EItemSlot slot, std::unique_ptr<Item> item) {
			this->m_equipment[slot] = std::move(item);
		}
	}
}