#ifndef MAINMENUSTATE_HPP
#define MAINMENUSTATE_HPP
#include "Game.h"

class MainMenuState : public Gamestate
{
public:
	MainMenuState();
	~MainMenuState();
	void HandleEvents(Game& game);
	void Update(Game& game);
	void Draw(Game& game);
private:
	sf::Font fond;
	sf::Text txtStartGame;
	bool bStartGameSelected;

};

#endif
