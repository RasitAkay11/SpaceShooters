#include <raylib.h>

int main() 
{
    //Raylib window settings
    const Color BackgroundColor = {0, 0, 0, 255};
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "C++ space shooters! Made by Rasit Akay..");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {   
        BeginDrawing();
            ClearBackground(BackgroundColor);
        EndDrawing();
    }
    
    CloseWindow();
}