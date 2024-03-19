#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Handmade Hero", "This is Handmade Hero", 0);

    if (SDL_Init(SDL_INIT_VIDEO != 0))
    {
        // TODO: SDL_init didn't work
    }
    // Create our window.
    SDL_Window *Window = SDL_CreateWindow("Handmande Hero",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          640, 
                                          480,
                                          SDL_WINDOW_RESIZABLE);

    bool HandleEevent(SDL_Event *Event);
    {
        bool ShouldQuit = false;
        return(ShouldQuit);
    }

    SDL_Quit();
    return 0;
} 
