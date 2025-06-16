#include "game.hpp"

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