#pragma once
#include "Spaceship.hpp"
#include "alien.hpp"

class Game{
    public:
    Game();
    ~Game();
    void Draw();
    void Update();
    void HandleInput();

    private:
    void                DeleteInactiveLasers();
    Spaceship           Spaceship;
    std::vector<Alien>  CreateAliens();
    std::vector<Alien>  aliens;
    void                MoveAliens();
    int                 aliensDirection;
    double              lastAlienSpawnTime;
};