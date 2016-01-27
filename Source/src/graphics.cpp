
#include <SDL2/SDL.h>

#include "graphics.h"

/* graphics class
 * Holds all of the information dealing with graphics
 */

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this->_window, "CaveStory");
}

Graphics::~Graphics() {
	SDL_DestroyWindow(this->_window);
}
