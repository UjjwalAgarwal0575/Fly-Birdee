#include "game.h"
#include "texturemanager.h"
#include "text.h"
#include "definations.h"
int main(int argc, char *argv[]){
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *wind = SDL_CreateWindow("Fly Birdee...", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
	SDL_Event e;
	if(wind){
		
				
		
		
		TTF_Init();
		//cout << "TTF_Init() :" << TTF_Init() << std::endl;
		SDL_Renderer *rend = SDL_CreateRenderer(wind, -1,0);
		text *tex;
		tex->init(rend,wind);
		// tex->handle_events();
		TTF_Quit();
		// quitSDL(wind,rend);
	}
	return 0;
}
