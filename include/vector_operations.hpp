/**
 * @file vector_operations.hpp
 * @author Casteglione Matias
 * @brief Library containing basic vectorial operations.
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef VECTOR_OPERATIONS_HEADER
#define VECTOR_OPERATIONS_HEADER

#include "vector2.hpp"
#include "vector3.hpp"
#include <time.h>

namespace VectorOperations
{
    /**
     * @brief Calculates the sum of the vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return Vector2
     */
    inline Vector2 sum(const Vector2 &v1, const Vector2 &v2)
    {
        return Vector2(v1.getX() + v2.getX(), v1.getY() + v2.getY());
    }

    /**
     * @brief Calculates the sum of the vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return Vector3
     */
    inline Vector3 sum(const Vector3 &v1, const Vector3 &v2)
    {
        return Vector3(v1.getX() + v2.getX(), v1.getY() + v2.getY(), v1.getZ() + v2.getZ());
    }

    /**
     * @brief Calculates the subtract of the vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return Vector2
     */
    inline Vector2 subtract(const Vector2 &v1, const Vector2 &v2)
    {
        return Vector2(v1.getX() - v2.getX(), v1.getY() - v2.getY());
    }

    /**
     * @brief Calculates the subtract of the vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return Vector3
     */
    inline Vector3 subtract(const Vector3 &v1, const Vector3 &v2)
    {
        return Vector3(v1.getX() - v2.getX(), v1.getY() - v2.getY(), v1.getZ() - v2.getZ());
    }

    /**
     * @brief Calculates the cross product of two vectors using Sarrus algorithm.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return Vector3
     */
    Vector3 crossProduct(const Vector3 &v1, const Vector3 &v2)
    {
        double x, y, z;
        x = (v1.getY() * v2.getZ()) - (v1.getZ() * v2.getY());
        y = (v1.getZ() * v2.getX()) - (v1.getX() * v2.getZ());
        z = (v1.getX() * v2.getY()) - (v1.getY() * v2.getX());
        return Vector3(x, y, z);
    }

    /**
     * @brief Calculates the dot product of two vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return double
     */
    inline double dotProduct(const Vector2 &v1, const Vector2 &v2)
    {
        return (v1.getX() * v2.getX() + v1.getY() * v2.getY());
    }

    /**
     * @brief Calculates the dot product of two vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return double
     */
    inline double dotProduct(const Vector3 &v1, const Vector3 &v2)
    {
        return (v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ());
    }

    /**
     * @brief Calculates the scale product.
     *
     * @param v Vector
     * @param scale Scale factor
     * @return Vector2
     */
    inline Vector2 scale(const Vector2 &v, const double &scale)
    {
        return Vector2(v.getX() * scale, v.getY() * scale);
    }

    /**
     * @brief Calculates the scale product.
     *
     * @param v Vector
     * @param scale Scale factor
     * @return Vector3
     */
    inline Vector3 scale(const Vector3 &v, const double &scale)
    {
        return Vector3(v.getX() * scale, v.getY() * scale, v.getZ() * scale);
    }

    /**
     * @brief Calculates the magnitude of the vector.
     *
     * @param v Vector
     * @return double
     */
    inline double magnitude(const Vector2 &v)
    {
        return std::hypot(v.getX(), v.getY());
    }

    /**
     * @brief Calculates the magnitude of the vector.
     *
     * @param v Vector
     * @return double
     */
    inline double magnitude(const Vector3 &v)
    {
        return std::hypot(v.getX(), v.getY(), v.getZ());
    }

    /**
     * @brief Calculates the unit vector.
     *
     * @param v Vector
     * @return Vector2
     */
    Vector2 unitVector(const Vector2 &v)
    {
        double mag = magnitude(v);
        if (mag == 0)
            return Vector2();
        return Vector2(v.getX() / mag, v.getY() / mag);
    }

    /**
     * @brief Calculates the unit vector.
     *
     * @param v Vector
     * @return Vector3
     */
    Vector3 unitVector(const Vector3 &v)
    {
        double mag = magnitude(v);
        if (mag == 0)
            return Vector3();
        return Vector3(v.getX() / mag, v.getY() / mag, v.getZ() / mag);
    }

    /**
     * @brief Calculates the angle between two vectors.
     *
     * @tparam vector
     * @param v1 Vector
     * @param v2 Vector
     * @return double
     */
    template <typename T>
    double angle(const T &v1, const T &v2)
    {
        double angle = acos(dotProduct(v1, v2) / (magnitude(v1) * magnitude(v2))) * 180.f / M_PI;
        if (angle != angle) // if is NaN
            return 0;
        return angle;
    }

    /**
     * @brief Calculates the scale of the proyection vector.
     *
     * @tparam vector
     * @param v1 Vector
     * @param v2 Vector
     * @return double
     */
    template <typename T>
    inline double vectorComponent(const T &v1, const T &v2)
    {
        return dotProduct(v1, v2) / magnitude(v2);
    }

    /**
     * @brief Calculates the projection vector of V1 on V2.
     *
     * @tparam vector
     * @param v1 Vector
     * @param v2 Vector
     * @return T
     */
    template <typename T>
    inline T proyection(const T &v1, const T &v2)
    {
        return scale(unitVector(v2), vectorComponent(v1, v2));
    }

    /**
     * @brief Returns an orthogonal vector of the given one.
     *
     * @param v Vector
     * @return Vector2
     */
    inline Vector2 orthogonalVector(const Vector2 &v)
    {
        return Vector2(-v.getY(), v.getX());
    }

    /**
     * @brief Returns an orthogonal vector of the given one.
     *
     * @param v Vector
     * @return Vector3
     */
    inline Vector3 orthogonalVector(const Vector3 &v)
    {
        return crossProduct(v, Vector3(1, 0, 0));
    }

    /**
     * @brief Calculates the area between two vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return double
     */
    inline double vectorArea(const Vector3 &v1, const Vector3 &v2)
    {
        return magnitude(crossProduct(v1, v2));
    }

    /**
     * @brief Calculates the area between two vectors.
     *
     * @param v1 Vector
     * @param v2 Vector
     * @return double
     */
    inline double vectorArea(const Vector2 &v1, const Vector2 &v2)
    {
        return abs(dotProduct(v1, orthogonalVector(v2)));
    }
}

#endif