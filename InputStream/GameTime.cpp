#include "GameTime.h"

GameTime::GameTime()
{
	clock = Clock();
}

void GameTime::update()
{
	time = (float)clock.getElapsedTime().asMicroseconds() / 10000;
	clock.restart();
}

float GameTime::getEllapsedTime()
{
	clock.restart();
	return time;
}
