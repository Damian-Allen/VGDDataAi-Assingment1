#include "StartScreen.h"

StartScreen::StartScreen() {
	mTimer = Timer::Instance();
	mInput = InputManager::Instance();

	// logo entities
	mLogo = new Texture("Asteroids", "emulogic.ttf", 32, { 200, 0, 0 });
	
	mLogo->Parent(this);

	mLogo->Position(Graphics::SCREEN_WIDTH * 0.5f, Graphics::SCREEN_HEIGHT * 0.32f);

	// play mode entities
	mPlayModes = new GameEntity(Graphics::SCREEN_WIDTH * 0.5f, Graphics::SCREEN_HEIGHT * 0.55f);
	mOnePlayerMode = new Texture("Press Space To Play ", "emulogic.ttf", 32, { 230, 230, 230 });

	mPlayModes->Parent(this);
	mOnePlayerMode->Parent(mPlayModes);

	mOnePlayerMode->Position(0.0f, -35.0f);

	// screen animation variables
	ResetAnimation();

	mStars = BackgroundStars::Instance();
	mStars->Scroll(true);
}


StartScreen::~StartScreen() {
	
	// logo entities
	delete mLogo;
	mLogo = nullptr;

	// play mode entities
	delete mPlayModes;
	mPlayModes = nullptr;
	delete mOnePlayerMode;
	mOnePlayerMode = nullptr;

	mTimer = nullptr;
	mInput = nullptr;
}

void StartScreen::ResetAnimation() {
	mAnimationStartPos = Vector2(0.0f, Graphics::SCREEN_HEIGHT);
	mAnimationEndPos = Vec2_Zero;
	mAnimationTotalTime = 5.0f;
	mAnimationTimer = 0.0f;
	mAnimationDone = false;

	Position(mAnimationStartPos);
}



void StartScreen::Update() {
	if (!mAnimationDone) {
		mAnimationTimer += mTimer->DeltaTime();
		Position(Lerp(mAnimationStartPos, mAnimationEndPos, mAnimationTimer / mAnimationTotalTime));

		if (mAnimationTimer >= mAnimationTotalTime) {
			mAnimationDone = true;
			mStars->Scroll(false);
		}
		if (mInput->KeyPressed(SDL_SCANCODE_SPACE)) {
			mAnimationTimer = mAnimationTotalTime;
		}
	}
}

void StartScreen::Render() {
	mLogo->Render();
	mOnePlayerMode->Render();
}