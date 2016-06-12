#include "ObjectHandler.h"
#include "Sfml-Bib.h"
#include "Player.h"

std::list<Target*> ObjectHandler::lstTargets = std::list<Target*>();
Player ObjectHandler::plyInf = Player(Vector2f(10,10),Vector2f(5,5));