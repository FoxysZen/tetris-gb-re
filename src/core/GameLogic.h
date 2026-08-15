#pragma once

class GameLogic
{
    public:
        GameLogic();
        ~GameLogic();

        void update();

        bool isRunning();
        void setRunning(bool value);

    private:
        bool running;
};
