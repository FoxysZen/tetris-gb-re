#pragma once
#include "../core/GameLogic.h"
#include <iostream>
#include <SDL2/SDL.h>

class RenderEngine
{
    public:
        RenderEngine();
        ~RenderEngine();

        int init(const char *title, int width, int height, int _scale);
        void quit();

        void render(GameLogic *game);

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;

        int scale;
};
