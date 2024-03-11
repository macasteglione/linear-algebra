/**
 * @file vector2.hpp
 * @author Casteglione Matias
 * @brief Class of vectors in R2.
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef VECTOR2_HEADER
#define VECTOR2_HEADER

#include <string>
#include <cmath>

class Vector2
{
    double x, y;

public:
    /**
     * @brief Construct a new Vector2 object in zero position.
     *
     */
    Vector2();

    /**
     * @brief Construct a new Vector2 object.
     *
     * @param x X-Component
     * @param y Y-Component
     */
    Vector2(double x, double y);

    /**
     * @brief Return the X-coordinate of the vector.
     *
     * @return double
     */
    double getX() const;

    /**
     * @brief Return the Y-coordinate of the vector.
     *
     * @return double
     */
    double getY() const;

    /**
     * @brief Write the vector elements.
     *
     * @return std::string
     */
    std::string toString() const;
};

#endif