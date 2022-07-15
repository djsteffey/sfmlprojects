#pragma once

#include <memory>

namespace irh {
	namespace datamodel {
		class Character;

		class GameState {
		public:
			GameState();
			~GameState();

			Character* getCharacter();

		protected:


		private:
			std::unique_ptr<Character> m_character;
		};
	}
}