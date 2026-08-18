#pragma once
#include <cstdint>

enum MusicID
{
    MUSIC_NONE = 0,
    MUSIC_TYPE_A,
    MUSIC_TYPE_B,
    MUSIC_TYPE_C,
    MUSIC_DEATH
};

enum SoundEffectID
{
    SFX_MOVE_PIECE,
    SFX_PLACE_PIECE,
    SFX_CLEAR_LINE
};

struct GameState
{
    uint32_t score = 0;        // 0xC0A0 - 3 Bytes in BCD format
    uint16_t linesCleared = 0; // 0xFF9E
    uint8_t level = 0;         // 0xFFA9

    uint8_t xPos = 0;          // 4 addr, one for each block. Unknown for now.

    MusicID currentMusic = MUSIC_TYPE_A;
                               // 0xFFC1 (HRAM) sends petitions to change the 
                               //   music
                               // 0xC203 (WRAM) changes the music and makes 
                               //   some effects like placing a piece but not 
                               //   moving the piece, completing a line, death 
                               //   music, writting the player name, selecting 
                               //   game type...

    bool playerMode = 0;       // 0xC001, 0xCFFC or 0xFFC5
                               // probably FFC5 sends petition and CFFC is the 
                               // real flag. I don't know what C001 does.



    /*  Unused
        == LEVEL SCORES == 3 Bytes each punctuation
        ==    TYPE A    ==
        0xD654 - First punctuation of level 0
        0xD657 - Second punctuation of level 0
        0xD65A - Third punctuation of level 0

        0xD66F - First punctuation of level 1
        0xD672 - Second punctuation of level 1
        0xD675 - Third punctuation of level 1

        0xD68A - First punctuation of level 2
        0xD68D - Second punctuation of level 2
        0xD690 - Third punctuation of level 2

        0xD6A5 - First punctuation of level 3
        0xD6A8 - Second punctuation of level 3
        0xD6AB - Third punctuation of level 3

        0xD6C0 - First punctuation of level 4
        0xD6C3 - Second punctuation of level 4
        0xD6C6 - Third punctuation of level 4

        0xD6DB - First punctuation of level 5
        0xD6DE - Second punctuation of level 5
        0xD6E1 - Third punctuation of level 5

        0xD6F6 - First punctuation of level 6
        0xD6F9 - Second punctuation of level 6
        0xD6FC - Third punctuation of level 6

        0x - First punctuation of level 7
        0x - Second punctuation of level 7
        0x - Third punctuation of level 7

        0x - First punctuation of level 8
        0x - Second punctuation of level 8
        0x - Third punctuation of level 8

        0x - First punctuation of level 9
        0x - Second punctuation of level 9
        0x - Third punctuation of level 9

        ========
        // Maybe its wrong: wInputEventRequest 0xDFE0 - Logics, updates 0xDFE1
                                               0xDFE1 - SFX
    */
};

class GameLogic
{
    public:
        GameLogic();
        ~GameLogic();

        void update();

        bool isRunning();
        void setRunning(bool value);

        void addPunctuation(uint32_t value);

    private:
        bool running;

        GameState state;
};
