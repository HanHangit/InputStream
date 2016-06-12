#pragma once
#include "Target.h"

class Minion : public Target {
public:
	Minion(Vector2f pos, Vector2f sze);
	Minion(Vector2f pos, Vector2f sze, Color clr);
	Minion(Vector2f pos, Vector2f sze, Color clr, float atk, float hp);
	~Minion();
	void draw(RenderWindow& win) override;
	void update(GameTime& gTime) override;
	void applyAttack(Target& target) override;
	type getType() override;

private:
	RectangleShape shape;
	float health = 100;
};
