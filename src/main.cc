#include "core/GameLogic.h"
#include "graphics/RenderEngine.h"
#include "input/InputManager.h"
#include <SDL2/SDL.h>

const int SCALE = 4;
const int SCREEN_WIDTH = 160 * SCALE;
const int SCREEN_HEIGHT = 144 * SCALE;

int main (int argc, char *argv[])
{
    RenderEngine renderer;
    renderer.init("Tetris GB Recompiled", SCREEN_WIDTH, SCREEN_HEIGHT, SCALE);

    GameLogic game;
    
    while (game.isRunning())
    {
        InputManager::processEvents(&game);

        game.update();

        renderer.render(&game);

        // Limits to 60FPS
        SDL_Delay(16);
    }

    renderer.quit();
    return 0;
}
