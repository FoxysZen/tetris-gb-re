#include "InputManager.h"

void InputManager::processEvents(GameLogic *game)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            game->setRunning(false);
        }
        else if (event.type == SDL_KEYDOWN)
        {
            switch (event.key.keysym.sym)
            {
                case SDLK_DOWN:
                    // game.moveDown();
                    break;
                case SDLK_LEFT:
                    // game.moveLeft();
                    break;
                case SDLK_RIGHT:
                    // game.moveRight();
                    break;
                case SDLK_a:
                    // game.rotateLeft();
                    break;
                case SDLK_s:
                    // game.rotateRight();
                    break;
            }
        }
    }
}
