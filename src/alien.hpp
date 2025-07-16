#pragma once
#include <raylib.h>
#include <vector>
#include "laser.hpp"

class Alien{
    public:
    Alien(int type, Vector2 position);
    void Update(int direction);
    void Draw();
    int GetType();
    static Texture2D alienImages[3];
    int type;
    static void UnloadImages();
    Vector2 position;
    bool active;
    private:
};