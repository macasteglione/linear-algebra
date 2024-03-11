#include "../include/vector2.hpp"

Vector2::Vector2() : x(0), y(0){};

Vector2::Vector2(double x, double y) : x(x), y(y){};

double Vector2::getX() const
{
    return x;
}

double Vector2::getY() const
{
    return y;
}

std::string Vector2::toString() const
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}