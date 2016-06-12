#include "Game.h"
#include "MainMenuState.h"
#include "PlayState.h"

Game::Game()
{
	window.create(sf::VideoMode(800, 600), "InputStream");
	window.setFramerateLimit(120);
	gTime = GameTime();
	running = true;
	//EinmaligerPointer der nur übergeben kann(perMove) -> Speicher wird gleich reserviert
	//ToDo switch states
	//CurrentState = std::move(std::unique_ptr<MainMenuState>(new MainMenuState));
	//CurrentState = std::move(std::unique_ptr<PlayState>(new PlayState));
}

void Game::Run()
{
	while (window.isOpen()) {
		gTime.update();
		CurrentState->HandleEvents(*this);
		window.clear(sf::Color(0,134,194));
		CurrentState->Update(*this);
		CurrentState->Draw(*this);

		window.display();
	}
}

void Game::Init()
{
	running = true;
}

bool Game::isRunning()
{
	return running;
}

void Game::ChangeState(gameStates newstate)
{
	switch (newstate)
	{
		case gameStates::MAINMENU:
			CurrentState = std::move(std::unique_ptr<MainMenuState>(new MainMenuState));
		break;

		case gameStates::PLAY:
			CurrentState = std::move(std::unique_ptr<PlayState>(new PlayState));
			break;
	}
}
