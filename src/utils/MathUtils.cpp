#include "MathUtils.hpp"
#include <stdexcept>

namespace MathUtils {
    long long factorial(int n) {
        if (n < 0) {
            throw std::runtime_error("Factorial is not defined for negative numbers");
        }
        if (n > 20) {
            throw std::runtime_error("Factorial too large (max 20)");
        }
        long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    double power(double base, double exponent) {
        return std::pow(base, exponent);
    }

    double nthRoot(double value, double n) {
        if (n == 0.0) {
            throw std::runtime_error("Cannot calculate 0th root");
        }
        if (value < 0.0 && std::fmod(n, 2.0) == 0.0) {
            throw std::runtime_error("Cannot calculate even root of negative number");
        }
        return std::pow(value, 1.0 / n);
    }
}

