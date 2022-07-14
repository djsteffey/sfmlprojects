#include "Game.hpp"
#include "Screen.hpp"
#include "PlayingScreen.hpp"

namespace irh {
	Game::Game() {
		this->m_running = false;
		this->m_currentScreen = nullptr;
		this->m_nextScreen = nullptr;
	}

	Game::~Game() {

	}

	void Game::run() {
		// flag running
		if (this->m_running) {
			return;
		}
		this->m_running = true;

		// create window
		this->m_renderWindow.create(sf::VideoMode(1280, 720), "Idle Rogue Heroes", sf::Style::Close);

		// initial screen
		this->setNextScreen(std::make_unique<PlayingScreen>());

		// timing
		sf::Clock clock;
		clock.restart();

		// loop while running
		while (this->m_running) {
			// do events
			this->events();

			// update
			this->update(clock.restart().asSeconds());

			// draw
			this->draw();
		}
	}

	void Game::events() {
		sf::Event event;
		while (this->m_renderWindow.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				this->m_running = false;
			}
		}
	}

	void Game::update(float deltaTime) {
		if (this->m_nextScreen != nullptr) {
			this->m_currentScreen = std::move(this->m_nextScreen);
			this->m_nextScreen = nullptr;
		}
		if (this->m_currentScreen != nullptr) {
			this->m_currentScreen->update(deltaTime);
		}
	}

	void Game::draw() {
		if (this->m_currentScreen != nullptr) {
			this->m_currentScreen->draw(this->m_renderWindow, sf::RenderStates::Default);
		}
	}

	void Game::setNextScreen(std::unique_ptr<Screen> screen) {
		this->m_nextScreen = std::move(screen);
	}
}