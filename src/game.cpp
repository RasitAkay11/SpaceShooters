#include "game.hpp"

Game::Game()
{
}

Game::~Game()
{
}

void Game::Draw()
{
    Spaceship.Draw();
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
}