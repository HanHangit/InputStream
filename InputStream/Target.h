#pragma once
#include "Sfml-Bib.h"
#include "GameTime.h"
#include <iostream>


enum type
{
	EPlayer,
	EMinion
};

class Target {
public:

	Target();
	virtual ~Target();
	virtual void draw(RenderWindow& win) = 0;
	virtual void update(GameTime& gTime) = 0;
	virtual void applyAttack(Target& target) = 0;
	virtual type getType() = 0;

	Vector2f& getPosition() {
		return position;
	}
	Vector2f& getSize() {
		return size;
	}
	std::string getName() {
		return name;
	}
	bool getAlive()
	{
		return alive;
	}
	float getDamage()
	{
		return attack;
	}

protected:
	float attack = 0;
	Vector2f position;
	Vector2f size;
	std::string name;
	bool alive = true;

};

inline std::ostream& operator<<(std::ostream& stream, Target& target)
{
	stream << target.getName() << " " << target.getPosition();
	return stream;
}
