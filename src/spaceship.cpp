#include <iostream>
#include "spaceship.hpp"

using namespace std;

Spaceship::Spaceship(){
    image = LoadTexture("Graphics/spaceship.png");
    position.x = (GetScreenWidth() - image.width) / 2;
    position.y = GetScreenHeight() - image.height;
    lastFireTime = 0.0;
}

Spaceship::~Spaceship(){
    UnloadTexture(image);
}

void Spaceship::Draw(){
    DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft(){
    if(position.x >= 7){
        position.x -= 7;
    }
    else{
        std::cout << "Spaceship maximum left has been reached" << endl; 
    }
}

void Spaceship::MoveRight(){
    if(position.x <= GetScreenWidth() - image.width - 5){
        position.x += 7;
    }
    else{
        std::cout << "Spaceship maximum right has been reached" << endl; 
    }
}

void Spaceship::FireLaser(){
    if(GetTime() - lastFireTime >= 0.35){
    lasers.push_back(Laser({position.x + image.width/2 - 2, position.y}, -6));
    lastFireTime = GetTime();
    }
}
