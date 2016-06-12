#include "PlayState.h"
#include "Enemy.h"
#include "Player.h"
#include "ObjectHandler.h"



PlayState::PlayState()
{
	
	ObjectHandler::plyInf = Player(Vector2f(100, 100), Vector2f(15, 15));
	ObjectHandler::lstTargets = std::list<Target*>();
	ObjectHandler::lstTargets.push_front(new Minion(Vector2f(200, 200), Vector2f(30, 30), Color::Red));
	
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
	ObjectHandler::plyInf.update(game.gTime);
	ObjectHandler::plyInf.draw(game.window);
	for (auto it = ObjectHandler::lstTargets.begin(); it != ObjectHandler::lstTargets.end(); ++it)
	{
		if ((*it)->getAlive())
		{
			(*it)->update(game.gTime);
			(*it)->draw(game.window);
		}
	}
	
}

void PlayState::Draw(Game & game)
{

}
