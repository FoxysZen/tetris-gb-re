#pragma once
#include "../core/GameLogic.h"
#include <SDL2/SDL.h>

class InputManager
{
    public:
        static void processEvents(GameLogic *game);
};
