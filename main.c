#include <stdio.h>
#define SDL_MAIN_HANDLED
#include <SDL.h>

int main() {
    printf("Hello world\n");
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("Error initializing SDL: %s", SDL_GetError());
        return 0;
    }
    printf("SDL Successfully initialized\n");
    SDL_Quit();
    return 0;
}