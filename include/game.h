#ifndef GAME_H
#define GAME_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "timer.h"
#include "util.h"
#include "tabuleiro.h"

#define SCREEN_W 400
#define SCREEN_H 500
#define SCREEN_BPP 32

#define FPS 30

class Game{

	//Configs
	SDL_Surface* screen; //the game screen
	SDL_Event events; //the ingame events

	bool running; //sets the game running

	Uint32 start; //FPS control

	//Game related
	Tabuleiro* tabuleiro;
public:
	Game();
	~Game();
	void run();
};

#endif