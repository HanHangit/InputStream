#include "Enemy.h"
#include <iostream>

Minion::Minion(Vector2f pos, Vector2f sze)
{
	shape = RectangleShape(sze);
	shape.setPosition(pos);
	position = pos;
	size = sze;
	attack = 1;
	health = 100;
	name = "Minion";
	std::clog << *this << " created.\n";
}

Minion::Minion(Vector2f pos, Vector2f sze, Color clr)
{
	shape = RectangleShape(sze);
	shape.setPosition(pos);
	shape.setFillColor(clr);
	position = pos;
	size = sze;
	name = "Minion";
	attack = 1;
	health = 100;
	std::clog << *this << " created.\n";
}

Minion::Minion(Vector2f pos, Vector2f sze, Color clr, float atk, float hp)
{
	shape = RectangleShape(sze);
	shape.setPosition(pos);
	shape.setFillColor(clr);
	position = pos;
	size = sze;
	attack = atk;
	health = hp;
	name = "Minion";
	std::clog << *this << " created.\n";
}

Minion::~Minion()
{
	std::clog << *this << " destroyed\n";
}

void Minion::draw(RenderWindow & win)
{
	win.draw(shape);
}

void Minion::update(GameTime & gTime)
{
}

void Minion::applyAttack(Target & target)
{
}

type Minion::getType()
{
	return type::EMinion;
}
