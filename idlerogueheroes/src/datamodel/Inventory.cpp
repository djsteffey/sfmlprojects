#include "Inventory.hpp"
#include "Item.hpp"

namespace irh {
	namespace datamodel {
		Inventory::Inventory() {

		}

		Inventory::~Inventory() {

		}

		int Inventory::getItemCount() {
			return this->m_itemList.size();
		}

		Item* Inventory::getItem(int index) {
			return this->m_itemList[index].get();
		}

		void Inventory::addItem(std::unique_ptr<Item> item) {
			this->m_itemList.push_back(std::move(item));
		}
	}
}