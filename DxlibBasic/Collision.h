#pragma once
#include "Character.h"

class Collision
{
public:
	//====================================
	// “–‚½‚è”»’è
	//====================================
	static bool CheckHit(const Character& a, const Character& b);
	//====================================
	// ‰Ÿ‚µo‚µ
	//====================================
	static void PushBack(Character& a, const Character& b);
};
