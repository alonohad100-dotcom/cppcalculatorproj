#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <vector>
#include <string>

/**
 * @brief Base calculator class for basic arithmetic operations
 */
class Calculator {
public:
    Calculator();
    virtual ~Calculator();

    // Basic operations
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double modulo(double a, double b);

    // Memory operations
    void memoryStore(double value);
    void memoryAdd(double value);
    void memorySubtract(double value);
    double memoryRecall() const;
    void memoryClear();

    // History operations
    void addToHistory(const std::string& operation, double result);
    void clearHistory();
    void displayHistory() const;
    std::vector<std::string> getHistory() const;

    // Getters
    double getLastResult() const;

protected:
    double lastResult;
    double memory;
    std::vector<std::string> history;
};

#endif // CALCULATOR_HPP

