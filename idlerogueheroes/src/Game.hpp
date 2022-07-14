#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

namespace irh {
	class Screen;

	class Game {
	public:
		Game();
		~Game();
		void run();

	protected:

	private:
		void events();
		void update(float deltaTime);
		void draw();
		void setNextScreen(std::unique_ptr<Screen> screen);

		bool m_running;
		sf::RenderWindow m_renderWindow;
		std::unique_ptr<Screen> m_currentScreen;
		std::unique_ptr<Screen> m_nextScreen;
	};
}