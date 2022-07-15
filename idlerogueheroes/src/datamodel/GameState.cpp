#include "GameState.hpp"
#include "Character.hpp"

namespace irh {
	namespace datamodel {
		GameState::GameState() {
			this->m_character = std::make_unique<Character>();
		}

		GameState::~GameState() {

		}

		Character* GameState::getCharacter() {
			return this->m_character.get();
		}
	}
}