#include <raylib.h>
#include "game.hpp"

int main() 
{
    Color grey = {29,29,27,255};
    InitWindow(750 + 50, 700, "C++ space shooters! Made by Rasit Akay..");
    SetTargetFPS(144);

    Game game;
    //This function returns true if the ESC button on the keyboard or in the game is pressed.
    while(WindowShouldClose() == false)
    {
        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}