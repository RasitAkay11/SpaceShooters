#include "spaceship.hpp"

Spaceship::Spaceship()
{
    image = LoadTexture("Graphics/spaceship.png");
    position.x = (GetScreenWidth() - image.width) / 2;
    position.y = GetScreenHeight() - image.height;
}

Spaceship::~Spaceship()
{
    UnloadTexture(image);
}

void Spaceship::Draw()
{
    DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft()
{
    if(position.x >= 7)
    {
        position.x -= 7;
    }
}

void Spaceship::MoveRight()
{
    if(position.x <= GetScreenWidth() - image.width - 5)
    {
        position.x += 7;
    }
}