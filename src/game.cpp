#include "game.hpp"
#include <iostream>

Game::Game()
{
}

Game::~Game()
{
}

void Game::Update()
{
    for(auto& laser: Spaceship.lasers)
    {
        laser.Update();
    }

    DeleteInactiveLasers();
}

void Game::Draw()
{
    Spaceship.Draw();

    for(auto& laser: Spaceship.lasers)
    {
        laser.Draw();
    }
}

void Game::HandleInput()
{
    if(IsKeyDown(KEY_LEFT))
    {
        Spaceship.MoveLeft();
    }
    else if(IsKeyDown(KEY_RIGHT))
    {
        Spaceship.MoveRight();
    }
    else if(IsKeyDown(KEY_SPACE))
    {
        Spaceship.FireLaser();
    }
}

void Game::DeleteInactiveLasers()
{
    for(auto it = Spaceship.lasers.begin(); it != Spaceship.lasers.end();)
    {
        if(!it -> active)
        {
            it = Spaceship.lasers.erase(it);
        }
        else{
            ++ it;
        }
    }
}
