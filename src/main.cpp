#include <raylib.h>
#include "game.hpp"
#include "laser.hpp"

int main() 
{
    Color grey = {29,29,27,255};
    InitWindow(750, 700, "C++ space shooters! Made by Rasit Akay..");
    SetTargetFPS(144);

    Game game;
    Laser laser = Laser({100, 100}, -7);
    //This function returns true if the ESC button on the keyboard or in the game is pressed.
    while(WindowShouldClose() == false)
    {
        game.HandleInput();
        laser.Update();
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
        laser.Draw();
        EndDrawing();
    }

    CloseWindow();
}