#include "CollisionHandler.h"
#include "Target.h"

CollisionHandler::CollisionHandler()
{
}

CollisionHandler::~CollisionHandler()
{
}

bool CollisionHandler::QuadCollision(const Vector2f& pos1, const Vector2f& size1, const Vector2f& pos2, const Vector2f& size2)
{
	if (pos1.x < pos2.x + size2.x
		&& pos1.x + size1.x > pos2.x
		&& pos1.y < pos2.y + size2.y
		&& pos1.y + size1.y > pos2.y)
		return true;
	else
		return false;
}

bool CollisionHandler::QuadCollision(Target& target1, Target& target2)
{
	Vector2f pos1(target1.getPosition());
	Vector2f size1(target1.getSize());
	Vector2f size2(target2.getSize());
	Vector2f pos2(target2.getPosition());

	if (pos1.x < pos2.x + size2.x
		&& pos1.x + size1.x > pos2.x
		&& pos1.y < pos2.y + size2.y
		&& pos1.y + size1.y > pos2.y)
		return true;
	else
		return false;
}
