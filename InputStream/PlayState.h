#pragma once
#ifndef PLAYSTATE_HPP
#define PLAYSTATE_HPP
#include "Gamestate.hpp"
#include "Game.h"

class PlayState : public Gamestate
{
public:
	PlayState();
	~PlayState() ;
	void HandleEvents(Game& game);
	void Update(Game& game);
	void Draw(Game& game);
private:
	sf::Font fond;
	sf::Text txt;
};
#endif