#pragma once

#include <memory>
#include <map>
#include "enums.hpp"

namespace irh {
	namespace datamodel {
		class Item;
		class Inventory;

		class Character {
		public:
			Character();
			~Character();
			int getInventoryCount();
			Item* getInventoryItem(int index);
			Item* getEquipmentItem(enums::EItemSlot slot);
			void setEquipmentItem(enums::EItemSlot slot, std::unique_ptr<Item> item);

		protected:

		private:
			std::unique_ptr<Inventory> m_inventory;
			std::map<enums::EItemSlot, std::unique_ptr<Item>> m_equipment;
		};
	}
}