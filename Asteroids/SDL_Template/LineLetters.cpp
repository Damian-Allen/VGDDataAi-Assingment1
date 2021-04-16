#include "LineLetters.h"

LineLetters::LineLetters() {
	mGraphics = Graphics::Instance();
}

LineLetters::LineLetters(char letter) {
	mGraphics = Graphics::Instance();
	switch (letter) {
		case 'a': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.5f);
			mExtra1 = new GameEntity(-0.5f, -0.5f);
			mTopMiddle = new GameEntity(0.0f, -1.0f);
			mExtra2 = new GameEntity(0.5f, -0.5);
			mMiddleRight = new GameEntity(0.5f, 0.5f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(this);
			mMiddleLeft->Parent(this);
			mTopMiddle->Parent(this);
			mMiddleRight->Parent(this);
			mBottomRight->Parent(this);
			mExtra1->Parent(this);
			mExtra2->Parent(this);
	
			
			
			break;
		}
		/*case 'b':{
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopMiddle = new GameEntity(0.25f, -1.0f);
			mExtra1 = new GameEntity(0.5f, -0.75);
			mExtra2 = new GameEntity(0.5f, -0.25);
			mMiddleRight = new GameEntity(0.5f, 0.5f);
			mExtra3 = new GameEntity(0.5f, 0.25f);
			mExtra4 = new GameEntity(0.5f, 0.75);
			mBottomMiddle = new GameEntity(0.25f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopMiddle->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			mExtra1->Parent(mBase);
			mExtra2->Parent(mBase);
			mExtra3->Parent(mBase);
			mExtra4->Parent(mBase);
			break;
		}
		
		case 'c': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'd': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopMiddle = new GameEntity(0.0f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, -0.5f);
			mExtra1 = new GameEntity(0.5f, 0.5f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopMiddle->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			mExtra1->Parent(mBase);
			break;
		}
		case 'e': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.25f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'f': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.25f, 0.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			break;
		}
		case 'g': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, -0.5f);
			mExtra1 = new GameEntity(0.5f, 0.5f);
			mExtra2 = new GameEntity(0.0f, 0.5f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			mExtra1->Parent(mBase);
			mExtra2->Parent(mBase);
			break;
		}
		case 'h': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'i': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopMiddle = new GameEntity(0.0f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopMiddle->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case 'j': {
			mBase = new GameEntity(0.0f, 0.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.25f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mMiddleLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case 'k': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'l': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mBottomRight->Parent(mBase);
		}
		case 'm': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopMiddle = new GameEntity(0.0f, -0.5f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopMiddle->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'n': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'o': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'p': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			break;
		}
		case 'q': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mExtra1 = new GameEntity(.05f, 0.5f);
			mExtra2 = new GameEntity(0.0f, 1.0f);
			mExtra3 = new GameEntity(0.0f, 0.5f);
			mExtra3 = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mExtra1->Parent(mBase);
			mExtra2->Parent(mBase);
			mExtra3->Parent(mBase);
			mExtra4->Parent(mBase);
			break;
		}
		case 'r': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mExtra1 = new GameEntity(-0.25f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			mExtra1->Parent(mBase);
			break;
		}
		case 's': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 't': {
			mBase = new GameEntity(0.0f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopMiddle = new GameEntity(0.0f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mTopLeft->Parent(mBase);
			mTopMiddle->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case 'u': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'v': {
			mBase = new GameEntity(0.0f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case 'w': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);
			mBottomMiddle = new GameEntity(0.0f, 0.5f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case 'x': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case 'y': {
			mBase = new GameEntity(0.0f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopMiddle = new GameEntity(0.0f, -0.5f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mTopLeft->Parent(mBase);
			mTopMiddle->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case 'z': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '0': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '1': {
			mBase = new GameEntity(0.0f, 0.0f);
			mTopMiddle = new GameEntity(0.0f, -1.0f);
			mBottomMiddle = new GameEntity(0.0f, 1.0f);

			mTopMiddle->Parent(mBase);
			mBottomMiddle->Parent(mBase);
			break;
		}
		case '2': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '3': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '4': {
			mBase = new GameEntity(0.0f, 0.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '5': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '6': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '7': {
			mBase = new GameEntity(0.0f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '8': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case '9': {
			mBase = new GameEntity(0.0f, 0.0f);
			mMiddleLeft = new GameEntity(-0.5f, 0.0f);
			mTopLeft = new GameEntity(-0.5f, -1.0f);
			mTopRight = new GameEntity(0.5f, -1.0f);
			mMiddleRight = new GameEntity(0.5f, 0.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mMiddleLeft->Parent(mBase);
			mTopLeft->Parent(mBase);
			mTopRight->Parent(mBase);
			mMiddleRight->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}
		case ':': {
			mBase = new GameEntity(0.0f, 0.0f);
			mExtra1 = new GameEntity(0.0f, -0.75f);
			mExtra2 = new GameEntity(0.0f, -0.25f);
			mExtra3 = new GameEntity(0.0f, 0.25f);
			mExtra4 = new GameEntity(0.0f, 0.75f);

			mExtra1->Parent(mBase);
			mExtra2->Parent(mBase);
			mExtra3->Parent(mBase);
			mExtra4->Parent(mBase);
			break;
		}
		case '_': {
			mBase = new GameEntity(0.0f, 0.0f);
			mBottomLeft = new GameEntity(-0.5f, 1.0f);
			mBottomRight = new GameEntity(0.5f, 1.0f);

			mBottomLeft->Parent(mBase);
			mBottomRight->Parent(mBase);
			break;
		}*/
		default:
			break;
	}
}

LineLetters::~LineLetters() {
	if (mBottomLeft != NULL) { delete mBottomLeft; }
	if (mMiddleLeft != NULL) { delete mMiddleLeft; }
	if (mTopLeft != NULL) { delete mTopLeft; }
	if (mTopMiddle != NULL) { delete mTopMiddle; }
	if (mTopRight != NULL) { delete mTopRight; }
	if (mMiddleRight != NULL) { delete mMiddleRight; }
	if (mBottomRight != NULL) { delete mBottomRight; }
	if (mBottomMiddle != NULL) { delete mBottomMiddle; }
	if (mExtra1 != NULL) { delete mExtra1; }
	if (mExtra2 != NULL) { delete mExtra2; }
	if (mExtra3 != NULL) { delete mExtra3; }
	if (mExtra4 != NULL) { delete mExtra4; }
}