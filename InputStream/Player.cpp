#include "Player.h"
#include "CollisionHandler.h"
#include "ObjectHandler.h"

Player::Player(Vector2f& pos, Vector2f& sze)
{
	shape = RectangleShape(sze);
	shape.setPosition(pos);
	shape.setFillColor(Color::Black);
	size = sze;
	position = pos;
	attack = 0;
	health = 100;
}

Player::~Player()
{
}

void Player::draw(RenderWindow & win)
{
	win.draw(shape);
}

void Player::update(GameTime & gTime)
{
	keyboardInput();

	position += dir * gTime.getEllapsedTime();

	shape.setPosition(position);



	for (auto it = ObjectHandler::lstTargets.begin(); it != ObjectHandler::lstTargets.end(); ++it)
	{
		
		if ((*it)->getAlive() && CollisionHandler::QuadCollision(*(*it), *this))
			applyAttack(*(*it));
	}
}

void Player::applyAttack(Target & target)
{
	std::cout << "Player wird angegriffen!!\n";
}

void Player::keyboardInput()
{
	dir = Vector2f(0, 0);
	if (Keyboard::isKeyPressed(Keyboard::Numpad8))
		dir += Vector2f(0, -1);
	if (Keyboard::isKeyPressed(Keyboard::Numpad4))
		dir += Vector2f(-1, 0);
	if (Keyboard::isKeyPressed(Keyboard::Numpad2))
		dir += Vector2f(0, 1);
	if (Keyboard::isKeyPressed(Keyboard::Numpad6))
		dir += Vector2f(1, 0);
}

type Player::getType()
{
	return type::EPlayer;
}
