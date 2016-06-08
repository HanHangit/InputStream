#pragma once
#include "Sfml-Bib.h"


class GameTime {
public:
	GameTime();
	void update();
	float getEllapsedTime();
private:
	float time;
	Clock clock;
};