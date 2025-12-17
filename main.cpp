#include "Calculator.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

/**
 * @brief Display the calculator menu
 */
void displayMenu() {
    std::cout << "\n=== Simple Calculator ===\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
    std::cout << "5. Show last result\n";
    std::cout << "6. Clear calculator\n";
    std::cout << "0. Exit\n";
    std::cout << "========================\n";
    std::cout << "Enter your choice: ";
}

/**
 * @brief Get a number from user input
 * @return The number entered by the user
 */
double getNumber() {
    double num;
    while (!(std::cin >> num)) {
        std::cout << "Invalid input! Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return num;
}

/**
 * @brief Main function - Calculator program entry point
 */
int main() {
    Calculator calc;
    int choice;
    double num1, num2, result;

    std::cout << "Welcome to the Simple Calculator!\n";

    while (true) {
        displayMenu();
        std::cin >> choice;

        // Clear input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1: // Addition
                std::cout << "Enter first number: ";
                num1 = getNumber();
                std::cout << "Enter second number: ";
                num2 = getNumber();
                result = calc.add(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " + " << num2 << " = " << result << std::endl;
                break;

            case 2: // Subtraction
                std::cout << "Enter first number: ";
                num1 = getNumber();
                std::cout << "Enter second number: ";
                num2 = getNumber();
                result = calc.subtract(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " - " << num2 << " = " << result << std::endl;
                break;

            case 3: // Multiplication
                std::cout << "Enter first number: ";
                num1 = getNumber();
                std::cout << "Enter second number: ";
                num2 = getNumber();
                result = calc.multiply(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " * " << num2 << " = " << result << std::endl;
                break;

            case 4: // Division
                std::cout << "Enter dividend: ";
                num1 = getNumber();
                std::cout << "Enter divisor: ";
                num2 = getNumber();
                try {
                    result = calc.divide(num1, num2);
                    std::cout << std::fixed << std::setprecision(2);
                    std::cout << num1 << " / " << num2 << " = " << result << std::endl;
                } catch (const std::runtime_error& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 5: // Show last result
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "Last result: " << calc.getLastResult() << std::endl;
                break;

            case 6: // Clear calculator
                calc.clear();
                std::cout << "Calculator cleared!" << std::endl;
                break;

            case 0: // Exit
                std::cout << "Thank you for using the calculator. Goodbye!" << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }

    return 0;
}

