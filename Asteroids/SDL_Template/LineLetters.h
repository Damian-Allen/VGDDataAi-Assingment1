#pragma once
#include "MathHelper.h"
#include "GameEntity.h"

using namespace SDLFramework;

class LineLetters {

private:
	char mLetter;

	GameEntity mBase;
	GameEntity mVertex1;
	GameEntity mVertex2;
	GameEntity mVertex3;
	GameEntity mVertex4;
	GameEntity mVertex5;
	GameEntity mVertex6;
	GameEntity mVertex7;
	GameEntity mVertex8;


public:

	LineLetters(char letter);
	~LineLetters();




};
