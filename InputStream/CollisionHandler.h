#pragma once
#include "Sfml-Bib.h"

class Target;

class CollisionHandler {
public:
	CollisionHandler();
	~CollisionHandler();

	static bool QuadCollision(const Vector2f & pos1, const Vector2f & size1, const Vector2f & pos2, const Vector2f & size2);

	static bool QuadCollision(Target & target1, Target & target2);



};