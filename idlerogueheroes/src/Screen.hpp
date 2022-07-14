#pragma once

#include <SFML/Graphics.hpp>

namespace irh {
	class Screen {
	public:
		Screen();
		virtual ~Screen();
		virtual void update(float deltaTime) = 0;
		virtual void draw(sf::RenderWindow& rw, sf::RenderStates rs) = 0;

	protected:

	private:
	};
}