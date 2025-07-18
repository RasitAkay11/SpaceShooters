#include "game.hpp"
#include <iostream>
Game::Game(){
    aliensDirection = 1;
}

Game::~Game(){
    Alien::UnloadImages();
}

void Game::Update(){
    for(auto& laser: Spaceship.lasers){
        laser.Update();
    }
    MoveAliens();

    if(GetTime() - lastAlienSpawnTime >= 0.5){
        aliens = CreateAliens();
        lastAlienSpawnTime = GetTime();
    }

    DeleteInactiveLasers();
}

void Game::Draw(){
    Spaceship.Draw();

    for(auto& laser: Spaceship.lasers){
        laser.Draw();
    }

    for(auto& alien: aliens){
        alien.Draw();
    }
}

void Game::HandleInput(){
    if(IsKeyDown(KEY_LEFT)){
        Spaceship.MoveLeft();
    }
    else if(IsKeyDown(KEY_RIGHT)){
        Spaceship.MoveRight();
    }
    else if(IsKeyDown(KEY_SPACE)){
        Spaceship.FireLaser();
    }
}

void Game::DeleteInactiveLasers(){
    for(auto it = Spaceship.lasers.begin(); it != Spaceship.lasers.end();){
        if(!it -> active){
            it = Spaceship.lasers.erase(it);
        }
        else{
            ++ it;
        }
    }
}

std::vector<Alien> Game::CreateAliens()
{
    std::vector<Alien> aliens;
    aliens.push_back(Alien(1, {50, 50}));

    return aliens;
}

void Game::MoveAliens(){
    for(auto& alien: aliens){
        alien.Update(aliensDirection);
    }
}
