#include "input.h"

/* Input class
 * keeps track of keyboard state
 */

//functions get calls resets new keys
void Input::beginNewFrame() {
	this->_pressedKeys.clear();
	this->_releasedKeys.clear();

}

void Input::keyDownEvent(const SDL_Event& event) {
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;

}

void Input::keyUpEvent(const SDL_Event& event) {
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = false;
}

bool Input::wasKeyPressed(SDL_Scancode key) {
	return this->_pressedKeys[key];
}

bool Input::wasKeyReleased(SDL_Scancode key) {
	return this->_releasedKeys[key];
}

bool Input::isKeyHeld(SDL_Scancode key) {
	return this->_releasedKeys[key];
}
