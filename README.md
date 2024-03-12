# Linear Algebra Operations Library

This library provides a set of basic operations for linear algebra in C++. It includes operations such as vector addition, subtraction, dot product, cross product, vector magnitude, and finding perpendicular vectors.

## Requirements

C++11 or later is required. Tested with C++20, C++17, C++14 and C++11.

## Installation

To use this library in your C++ project, simply include the appropriate header files in your source code and link against the library during compilation.

## Usage

Here's a quick guide on how to use the library:

1. Include the necessary header files in your C++ code:

```cpp
#include <iostream>
#include "include/vector_operations.hpp"
```

2. Perform vector operations using the provided functions:

```cpp
Vector2 v1(1, 2);
Vector2 v2(3, 4);
Vector2 result = VectorOperations::sum(v1, v2);
std::cout << "Sum of vectors: " << result.toString() << std::endl;
```

3. Make sure to compile your code with the library linked properly. 

```shell
gcc main.cpp src/*.cpp -o main.exe
```