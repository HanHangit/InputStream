#include "Sfml-Bib.h"
#include "Game.h"
int main()
{
	Game InputStream;
	InputStream.ChangeState(Game::gameStates::MAINMENU);
	while (InputStream.isRunning())
	{
		InputStream.Run();

	}
	return 0;
}