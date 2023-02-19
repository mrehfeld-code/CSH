/* including the C standard functions */
#include <stdio.h>
#include <stdlib.h>

/* including SDL3 */
#include <SDL3/SDL.h>
/* including SDL3_ttf for font rendering */
#include <SDL3/SDL_ttf.h>

/* including some error macros to print SDL errors */
#include "error_macros.h"
/* including extended type definitions */
#include "../typedefs.h"

/* defining default window values */
#define DEFAULT_WINDOW_TITLE "CSH-GUI"
#define DEFAULT_WINDOW_WIDTH 800
#define DEFAULT_WINDOW_HEIGHT 600


int main() {
	// initializing SDL3
	if (SDL_Init(SDL_INIT_VIDEO)) PRINT_SDL_ERROR_AND_EXIT("Failed to initalize SDL3!");

	// creating a window
	SDL_Window* window = SDL_CreateWindow(DEFAULT_WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
	if (!window) PRINT_SDL_ERROR_AND_EXIT("Cannot create a window!");

	// creating a renderer for the window
	SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL, SDL_RENDERER_ACCELERATED);
	if (!renderer) PRINT_SDL_ERROR_AND_EXIT("Cannot create a renderer!");

	// creating and initializing variables needed for the main loop
	SDL_FRect drawTest = { (DEFAULT_WINDOW_WIDTH / 2) - 50, (DEFAULT_WINDOW_HEIGHT / 2) - 50, 100, 100 };

	// entering the main loop
	SDL_Event event;
	bool loop = true;
	while (loop) {
		SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xff);
		SDL_RenderClear(renderer);

		SDL_SetRenderDrawColor(renderer, 0x00, 0x44, 0xff, 0xff);
		SDL_RenderFillRect(renderer, &drawTest);

		SDL_RenderPresent(renderer);

		// handling events
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_EVENT_QUIT)
				loop = false;
			else if (event.type == SDL_EVENT_WINDOW_RESIZED) {
				drawTest = (SDL_FRect){ (event.window.data1 / 2) - 50, 
					(event.window.data2 / 2) - 50, 100, 100 };
			}
		}
	}

	// freeing memory
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
