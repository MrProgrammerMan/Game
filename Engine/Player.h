#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "Keyboard.h"

class Player
{
private:
	Vec2 pos;
	Vec2 vel;
	unsigned char controls [4];
public:
	Player(Vec2 pos_in, unsigned char controls_in[4]);
	void UpdateInput(Keyboard& kbd);
	void UpdatePos(float dt);
	void Draw(Graphics& gfx, int state);
};