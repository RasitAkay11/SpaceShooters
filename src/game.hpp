#pragma once
#include "Spaceship.hpp"

class Game{
    public:
    Game();
    ~Game();
    void Draw();
    void Update();
    void HandleInput();
    private:
    Spaceship Spaceship;
};