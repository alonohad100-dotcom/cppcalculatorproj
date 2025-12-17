#include "ScientificCalculator.hpp"
#include "../utils/MathUtils.hpp"
#include <stdexcept>
#include <cmath>
#include <sstream>
#include <iomanip>

ScientificCalculator::ScientificCalculator() : Calculator() {
}

ScientificCalculator::~ScientificCalculator() {
}

double ScientificCalculator::sin(double angle) {
    double radians = MathUtils::toRadians(angle);
    lastResult = std::sin(radians);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "sin(" << angle << "°)";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::cos(double angle) {
    double radians = MathUtils::toRadians(angle);
    lastResult = std::cos(radians);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "cos(" << angle << "°)";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::tan(double angle) {
    double radians = MathUtils::toRadians(angle);
    lastResult = std::tan(radians);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "tan(" << angle << "°)";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::asin(double value) {
    if (value < -1.0 || value > 1.0) {
        throw std::runtime_error("arcsin input must be between -1 and 1");
    }
    lastResult = MathUtils::toDegrees(std::asin(value));
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "arcsin(" << value << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::acos(double value) {
    if (value < -1.0 || value > 1.0) {
        throw std::runtime_error("arccos input must be between -1 and 1");
    }
    lastResult = MathUtils::toDegrees(std::acos(value));
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "arccos(" << value << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::atan(double value) {
    lastResult = MathUtils::toDegrees(std::atan(value));
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "arctan(" << value << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::sinh(double x) {
    lastResult = std::sinh(x);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "sinh(" << x << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::cosh(double x) {
    lastResult = std::cosh(x);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "cosh(" << x << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::tanh(double x) {
    lastResult = std::tanh(x);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "tanh(" << x << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::log(double value) {
    if (value <= 0.0) {
        throw std::runtime_error("Logarithm input must be positive");
    }
    lastResult = std::log10(value);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "log(" << value << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::ln(double value) {
    if (value <= 0.0) {
        throw std::runtime_error("Natural logarithm input must be positive");
    }
    lastResult = std::log(value);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "ln(" << value << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::logBase(double value, double base) {
    if (value <= 0.0 || base <= 0.0 || base == 1.0) {
        throw std::runtime_error("Invalid logarithm input");
    }
    lastResult = std::log(value) / std::log(base);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "log_" << base << "(" << value << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::exp(double x) {
    lastResult = std::exp(x);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "e^" << x;
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::power(double base, double exponent) {
    lastResult = MathUtils::power(base, exponent);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << base << "^" << exponent;
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::sqrt(double value) {
    if (value < 0.0) {
        throw std::runtime_error("Square root of negative number is not allowed");
    }
    lastResult = std::sqrt(value);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "√" << value;
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::cbrt(double value) {
    lastResult = std::cbrt(value);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "∛" << value;
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::nthRoot(double value, double n) {
    lastResult = MathUtils::nthRoot(value, n);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << value << "^(1/" << n << ")";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::abs(double value) {
    lastResult = std::abs(value);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << "|" << value << "|";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::factorial(int n) {
    long long result = MathUtils::factorial(n);
    lastResult = static_cast<double>(result);
    std::ostringstream oss;
    oss << n << "!";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::percentage(double value, double percent) {
    lastResult = (value * percent) / 100.0;
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << value << " * " << percent << "%";
    addToHistory(oss.str(), lastResult);
    return lastResult;
}

double ScientificCalculator::getPi() const {
    return MathUtils::PI;
}

double ScientificCalculator::getE() const {
    return MathUtils::E;
}

