#include <iostream>
#include "include/vector_operations.hpp"

int main()
{
    Vector3 v1(1, 2, 3), v2(5, 6, 7);
    Vector3 v3(3, 1, 2);
    Vector2 v4(7, 3), v5(6, -4);
    
    std::cout << VectorOperations::sum(v1, v2).toString() << std::endl;
    std::cout << VectorOperations::proyection(v4, v5).toString() << std::endl;

    return 0;
}