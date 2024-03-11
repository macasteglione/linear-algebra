#include "../include/vector3.hpp"

Vector3::Vector3() : x(0), y(0), z(0){};

Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z){};

double Vector3::getX() const
{
    return x;
}

double Vector3::getY() const
{
    return y;
}

double Vector3::getZ() const
{
    return z;
}

std::string Vector3::toString() const
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}