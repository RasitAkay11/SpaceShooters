#include <raylib.h>

int main() 
{
    Color grey = {29,29,27,255};
    InitWindow(750, 700, "C++ space shooters! Made by Rasit Akay..");
    SetTargetFPS(144);

    //This function returns true if the ESC button on the keyboard or in the game is pressed.
    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(grey);
        EndDrawing();
    }

    CloseWindow();
}