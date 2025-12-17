#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

/**
 * @brief Simple calculator class for basic arithmetic operations
 */
class Calculator {
public:
    /**
     * @brief Constructor
     */
    Calculator();

    /**
     * @brief Destructor
     */
    ~Calculator();

    /**
     * @brief Add two numbers
     * @param a First number
     * @param b Second number
     * @return Sum of a and b
     */
    double add(double a, double b);

    /**
     * @brief Subtract two numbers
     * @param a First number
     * @param b Second number
     * @return Difference of a and b (a - b)
     */
    double subtract(double a, double b);

    /**
     * @brief Multiply two numbers
     * @param a First number
     * @param b Second number
     * @return Product of a and b
     */
    double multiply(double a, double b);

    /**
     * @brief Divide two numbers
     * @param a Dividend
     * @param b Divisor
     * @return Quotient of a and b (a / b)
     * @throws std::runtime_error if divisor is zero
     */
    double divide(double a, double b);

    /**
     * @brief Get the last result
     * @return Last calculated result
     */
    double getLastResult() const;

    /**
     * @brief Clear the calculator (reset last result)
     */
    void clear();

private:
    double lastResult; ///< Stores the last calculation result
};

#endif // CALCULATOR_HPP

