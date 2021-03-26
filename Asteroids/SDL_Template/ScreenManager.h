#pragma once
#include "StartScreen.h"
#include "PlayScreen.h"

class ScreenManager {
private:
	static ScreenManager * sInstance;

	enum Screens { Start, Play };
	Screens mCurrentScreen;

	InputManager * mInput;

	BackgroundStars * mBackgroundStars;
	StartScreen * mStartScreen;
	PlayScreen * mPlayScreen;

public:
	static ScreenManager * Instance();
	static void Release();
	Screens GetCurrentScreen();

	void Update();
	void Render();

private:
	ScreenManager();
	~ScreenManager();
};