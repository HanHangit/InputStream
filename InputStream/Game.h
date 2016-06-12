#pragma once
#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <memory> //UniquePointer
#include "Sfml-Bib.h"
#include "Gamestate.hpp"
#include "GameTime.h"

class Game 
{
public:
	enum class gameStates { MAINMENU, PLAY };
	Game();
	void Run();
	void Init();
	bool isRunning();

	bool running;
	sf::RenderWindow window;
	GameTime gTime;
	void ChangeState(gameStates newstate);

	
private:
	std::unique_ptr<Gamestate> CurrentState;
};

#endif