#pragma once

#include <SFML/Graphics.hpp>
#include "Screen.hpp"

namespace irh {
	class PlayingScreen : public Screen {
	public:
		PlayingScreen();
		virtual ~PlayingScreen();
		virtual void update(float deltaTime) override;
		virtual void draw(sf::RenderWindow& rw, sf::RenderStates rs) override;

	protected:

	private:
	};
}