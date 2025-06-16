#pragma once
#include <raylib.h>
#include <vector>
#include "laser.hpp"

class Alien{
    public:
    Alien(int type, Vector2 position);
    void Update();
    void Draw();
    int GetType();
    Texture2D image;
    int type;
    Vector2 position;
    private:
};