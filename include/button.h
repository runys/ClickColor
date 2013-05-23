#ifndef BUTTON_H
#define BUTTON_H

class Button{
	SDL_Surface* image;
	SDL_Rect box;

public:
	Button();
	~Button();

	void draw();
	void update();

	void click();
};

#endif