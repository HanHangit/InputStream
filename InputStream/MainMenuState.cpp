#include "MainMenuState.h"

MainMenuState::MainMenuState()
{
	fond.loadFromFile("assets\\fnt\\Thunder Strike.ttf");
	txtStartGame.setFont(fond);
	txtStartGame.setString("MainMenue: Spiel Starten");
	txtStartGame.setCharacterSize(40);
	txtStartGame.setPosition(400.f, 300.f);
}

MainMenuState::~MainMenuState()
{
}

void MainMenuState::HandleEvents(Game & game)
{
	
		sf::Event event;
		while (game.window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				game.window.close();
				game.running = false;
			}
		}
		if (event.type == sf::Event::MouseButtonReleased)
		{
			if (event.mouseButton.button == 0) 
			{
				if (bStartGameSelected) {
					game.ChangeState(Game::gameStates::PLAY);
				}
			}
		}
}

void MainMenuState::Update(Game & game)
{
	if (txtStartGame.getGlobalBounds().contains(
			sf::Mouse::getPosition(game.window).x, 
			sf::Mouse::getPosition(game.window).y) && 
			txtStartGame.getColor() != sf::Color::Green)
	{
		txtStartGame.setColor(sf::Color::Green);
		bStartGameSelected = true;
	}
	else if (!txtStartGame.getGlobalBounds().contains(
			sf::Mouse::getPosition(game.window).x, 
			sf::Mouse::getPosition(game.window).y) && 
			txtStartGame.getColor() == sf::Color::Green)
	{
		txtStartGame.setColor(sf::Color::White);
		bStartGameSelected = false;
	}	
	
}

void MainMenuState::Draw(Game & game)
{
	game.window.draw(txtStartGame);
}
