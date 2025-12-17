#ifndef MATH_UTILS_HPP
#define MATH_UTILS_HPP

#include <cmath>

namespace MathUtils {
    // Mathematical constants
    constexpr double PI = 3.14159265358979323846;
    constexpr double E = 2.71828182845904523536;

    /**
     * @brief Convert degrees to radians
     */
    inline double toRadians(double degrees) {
        return degrees * PI / 180.0;
    }

    /**
     * @brief Convert radians to degrees
     */
    inline double toDegrees(double radians) {
        return radians * 180.0 / PI;
    }

    /**
     * @brief Calculate factorial of a number
     */
    long long factorial(int n);

    /**
     * @brief Calculate power (base^exponent)
     */
    double power(double base, double exponent);

    /**
     * @brief Calculate nth root
     */
    double nthRoot(double value, double n);
}

#endif // MATH_UTILS_HPP

