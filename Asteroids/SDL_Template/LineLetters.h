#pragma once
#include "MathHelper.h"
#include "GameEntity.h"
#include "AssetManager.h"

using namespace SDLFramework;

class LineLetters : public GameEntity {

public:

	GameEntity* mBase;
	GameEntity* mBottomLeft;
	GameEntity* mBottomMiddle;
	GameEntity* mBottomRight;
	
	GameEntity* mTopLeft;
	GameEntity* mTopMiddle;
	GameEntity* mTopRight;

	GameEntity* mMiddleRight;
	GameEntity* mMiddleLeft;
	
	GameEntity* mExtra1;
	GameEntity* mExtra2;
	GameEntity* mExtra3;
	GameEntity* mExtra4;



	Graphics* mGraphics;


public:

	LineLetters(char letter);
	LineLetters();
	~LineLetters();



};
