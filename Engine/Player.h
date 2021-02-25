#pragma once
#include "Vec2.h"
#include "Graphics.h"

class Player
{
private:
	Vec2 pos;
	Vec2 vel;
public:
	void Draw(Graphics& gfx, int state);
};