#include "laser.hpp"

Laser::Laser(Vector2 position, int speed)
{
    this -> position = position;
    this -> speed = speed;
}

void Laser::Draw()
{
    DrawRectangle(position.x, position.y, 4, 15, {243, 216, 36, 255});
}

void Laser::Update()
{
    position.y += speed;
}