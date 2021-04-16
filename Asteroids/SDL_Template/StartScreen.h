#pragma once

#include "InputManager.h"
#include "BackgroundStars.h"
#include "LineLetters.h"

using namespace SDLFramework;

class StartScreen : public GameEntity {

private:
	Timer * mTimer;
	InputManager * mInput;


	// Logo Entities
	Texture * mLogo;
	LineLetters * mA;

	// Play Mode Entities
	GameEntity * mPlayModes;
	Texture * mOnePlayerMode;
	

	// Screen Animation Variables
	Vector2 mAnimationStartPos;
	Vector2 mAnimationEndPos;
	float mAnimationTotalTime;
	float mAnimationTimer;
	bool mAnimationDone;

	// stars
	BackgroundStars * mStars;

public:
	StartScreen();
	~StartScreen();

	void ResetAnimation();

	void Update() override;
	void Render() override;
};