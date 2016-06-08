#include "PlayState.h"

PlayState::PlayState()
{
	fond.loadFromFile("assets\\fnt\\Thunder Strike.ttf");
	txt.setFont(fond);
	txt.setString("PlayState: Johannes gegen Benni");
	txt.setCharacterSize(40);
	txt.setPosition(400.f, 300.f);
}

PlayState::~PlayState()
{
}

void PlayState::HandleEvents(Game & game)
{
	sf::Event event;
	while (game.window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			game.window.close();
			game.running = false;
		}
	}
}

void PlayState::Update(Game & game)
{
	std::cout << "Playstate wurde aufgerufen" << std::endl;
}

void PlayState::Draw(Game & game)
{
	game.window.draw(txt);
}
