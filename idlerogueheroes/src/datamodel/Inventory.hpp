#pragma once

#include <vector>
#include <memory>

namespace irh {
	namespace datamodel {
		class Item;

		class Inventory {
		public:
			Inventory();
			~Inventory();
			int getItemCount();
			Item* getItem(int index);
			void addItem(std::unique_ptr<Item> item);

		protected:

		private:
			std::vector<std::unique_ptr<Item>> m_itemList;
		};
	}
}