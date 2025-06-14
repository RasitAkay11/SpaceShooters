#pragma once
#include <raylib.h>

class Spaceship{
    public:
    Spaceship();        //Constructor
    ~Spaceship();       //Destructor

    void Draw();
    void MoveLeft();
    void MoveRight();
    void FireLaser();

    private:
    Texture2D image;
    Vector2 position;
};