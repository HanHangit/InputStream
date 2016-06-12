#pragma once
#include "Target.h"

class Player : public Target {
public:
	Player(Vector2f& pos, Vector2f& sze);
	~Player();
	void draw(RenderWindow& win) override;
	void update(GameTime& gTime) override;
	void applyAttack(Target& target) override;
	void keyboardInput();
	type getType() override;

private:
	Vector2f dir;
	RectangleShape shape;
	float health;
};