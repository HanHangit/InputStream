#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <memory> //UniquePointer
#include "SFML\Graphics.hpp"
#include "Gamestate.hpp"
#include "MainMenuState.h"
#include "PlayState.h"

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
	void ChangeState(gameStates newstate);

	
private:
	std::unique_ptr<Gamestate> CurrentState;
};

#endif