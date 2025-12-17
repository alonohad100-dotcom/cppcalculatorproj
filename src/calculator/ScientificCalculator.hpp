#ifndef SCIENTIFIC_CALCULATOR_HPP
#define SCIENTIFIC_CALCULATOR_HPP

#include "Calculator.hpp"

/**
 * @brief Extended calculator with scientific functions
 */
class ScientificCalculator : public Calculator {
public:
    ScientificCalculator();
    ~ScientificCalculator() override;

    // Trigonometric functions (input in degrees)
    double sin(double angle);
    double cos(double angle);
    double tan(double angle);
    double asin(double value);
    double acos(double value);
    double atan(double value);

    // Hyperbolic functions
    double sinh(double x);
    double cosh(double x);
    double tanh(double x);

    // Logarithmic functions
    double log(double value);      // Base 10
    double ln(double value);        // Natural log (base e)
    double logBase(double value, double base);

    // Exponential functions
    double exp(double x);           // e^x
    double power(double base, double exponent);

    // Root functions
    double sqrt(double value);
    double cbrt(double value);      // Cube root
    double nthRoot(double value, double n);

    // Other functions
    double abs(double value);
    double factorial(int n);
    double percentage(double value, double percent);

    // Constants
    double getPi() const;
    double getE() const;
};

#endif // SCIENTIFIC_CALCULATOR_HPP

