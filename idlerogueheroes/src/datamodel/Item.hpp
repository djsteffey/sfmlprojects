#pragma once

#include <string>
#include <vector>
#include <memory>

namespace irh {
	namespace datamodel {
		class Affix;

		class Item {
		public:
			Item(unsigned long id, std::string name, int iLvl);
			~Item();
			void addAffix(std::unique_ptr<Affix> affix);

		protected:

		private:
			unsigned long m_id;
			std::string m_name;
			int m_iLvl;
			std::vector<std::unique_ptr<Affix>> m_affixList;
		};
	}
}