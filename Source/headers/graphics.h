#ifndef GRAPHICS_H
#define GRAPHICS_H


#include <map>
#include <string>

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
	Graphics();
	~Graphics();
	/*
	 * SDL Load Images loads image into sprite sheet maps
	 */
	SDL_Surface* loadImage(const std::string &filePath);

	/* void blitSurface
	 * Draws a texture to a certain part of the screen.
	 */

	void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);

	/*void flip
	 * renders everything to the screen
	 */

	void flip();

	void clear();

	/* SDL Renderer
	 * returns renderer
	 */
	SDL_Renderer* getRenderer() const;
private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;

	std::map<std::string, SDL_Surface*> _spriteSheets;
};

#endif
