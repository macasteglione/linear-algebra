/**
 * @file vector3.hpp
 * @author Casteglione Matias
 * @brief Class of vectors in R3.
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef VECTOR3_HEADER
#define VECTOR3_HEADER

#include <string>
#include <cmath>

class Vector3
{
    double x, y, z;

public:
    /**
     * @brief Construct a new Vector3 object in zero position.
     *
     */
    Vector3();

    /**
     * @brief Construct a new Vector3 object.
     * 
     * @param x X-Component
     * @param y Y-Component
     * @param z Z-Component
     */
    Vector3(double x, double y, double z);

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
     * @brief Return the Z-coordinate of the vector.
     *
     * @return double
     */
    double getZ() const;

    /**
     * @brief Write the vector elements.
     *
     * @return std::string
     */
    std::string toString() const;
};

#endif