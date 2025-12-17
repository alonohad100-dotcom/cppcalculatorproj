#include "calculator/ScientificCalculator.hpp"
#include "ui/Menu.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

void handleBasicOperations(ScientificCalculator& calc) {
    int choice;
    double num1, num2, result;

    while (true) {
        Menu::displayBasicMenu();
        choice = Menu::getChoice();

        switch (choice) {
            case 1: // Addition
                num1 = Menu::getNumber("Enter first number: ");
                num2 = Menu::getNumber("Enter second number: ");
                result = calc.add(num1, num2);
                std::cout << std::fixed << std::setprecision(4);
                std::cout << num1 << " + " << num2 << " = " << result << std::endl;
                break;

            case 2: // Subtraction
                num1 = Menu::getNumber("Enter first number: ");
                num2 = Menu::getNumber("Enter second number: ");
                result = calc.subtract(num1, num2);
                std::cout << std::fixed << std::setprecision(4);
                std::cout << num1 << " - " << num2 << " = " << result << std::endl;
                break;

            case 3: // Multiplication
                num1 = Menu::getNumber("Enter first number: ");
                num2 = Menu::getNumber("Enter second number: ");
                result = calc.multiply(num1, num2);
                std::cout << std::fixed << std::setprecision(4);
                std::cout << num1 << " * " << num2 << " = " << result << std::endl;
                break;

            case 4: // Division
                num1 = Menu::getNumber("Enter dividend: ");
                num2 = Menu::getNumber("Enter divisor: ");
                try {
                    result = calc.divide(num1, num2);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << num1 << " / " << num2 << " = " << result << std::endl;
                } catch (const std::runtime_error& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 5: // Modulo
                num1 = Menu::getNumber("Enter first number: ");
                num2 = Menu::getNumber("Enter second number: ");
                try {
                    result = calc.modulo(num1, num2);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << num1 << " % " << num2 << " = " << result << std::endl;
                } catch (const std::runtime_error& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 0:
                return;

            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }
}

void handleScientificOperations(ScientificCalculator& calc) {
    int choice;
    double num, num2, result;

    while (true) {
        Menu::displayScientificMenu();
        choice = Menu::getChoice();

        try {
            switch (choice) {
                case 1: // sin
                    num = Menu::getNumber("Enter angle in degrees: ");
                    result = calc.sin(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "sin(" << num << "°) = " << result << std::endl;
                    break;

                case 2: // cos
                    num = Menu::getNumber("Enter angle in degrees: ");
                    result = calc.cos(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "cos(" << num << "°) = " << result << std::endl;
                    break;

                case 3: // tan
                    num = Menu::getNumber("Enter angle in degrees: ");
                    result = calc.tan(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "tan(" << num << "°) = " << result << std::endl;
                    break;

                case 4: // arcsin
                    num = Menu::getNumber("Enter value (-1 to 1): ");
                    result = calc.asin(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "arcsin(" << num << ") = " << result << "°" << std::endl;
                    break;

                case 5: // arccos
                    num = Menu::getNumber("Enter value (-1 to 1): ");
                    result = calc.acos(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "arccos(" << num << ") = " << result << "°" << std::endl;
                    break;

                case 6: // arctan
                    num = Menu::getNumber("Enter value: ");
                    result = calc.atan(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "arctan(" << num << ") = " << result << "°" << std::endl;
                    break;

                case 7: // sinh
                    num = Menu::getNumber("Enter value: ");
                    result = calc.sinh(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "sinh(" << num << ") = " << result << std::endl;
                    break;

                case 8: // cosh
                    num = Menu::getNumber("Enter value: ");
                    result = calc.cosh(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "cosh(" << num << ") = " << result << std::endl;
                    break;

                case 9: // tanh
                    num = Menu::getNumber("Enter value: ");
                    result = calc.tanh(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "tanh(" << num << ") = " << result << std::endl;
                    break;

                case 10: // log
                    num = Menu::getNumber("Enter value: ");
                    result = calc.log(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "log(" << num << ") = " << result << std::endl;
                    break;

                case 11: // ln
                    num = Menu::getNumber("Enter value: ");
                    result = calc.ln(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "ln(" << num << ") = " << result << std::endl;
                    break;

                case 12: // log base
                    num = Menu::getNumber("Enter value: ");
                    num2 = Menu::getNumber("Enter base: ");
                    result = calc.logBase(num, num2);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "log_" << num2 << "(" << num << ") = " << result << std::endl;
                    break;

                case 13: // e^x
                    num = Menu::getNumber("Enter exponent: ");
                    result = calc.exp(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "e^" << num << " = " << result << std::endl;
                    break;

                case 14: // x^y
                    num = Menu::getNumber("Enter base: ");
                    num2 = Menu::getNumber("Enter exponent: ");
                    result = calc.power(num, num2);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << num << "^" << num2 << " = " << result << std::endl;
                    break;

                case 15: // sqrt
                    num = Menu::getNumber("Enter value: ");
                    result = calc.sqrt(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "√" << num << " = " << result << std::endl;
                    break;

                case 16: // cbrt
                    num = Menu::getNumber("Enter value: ");
                    result = calc.cbrt(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "∛" << num << " = " << result << std::endl;
                    break;

                case 17: // nth root
                    num = Menu::getNumber("Enter value: ");
                    num2 = Menu::getNumber("Enter root (n): ");
                    result = calc.nthRoot(num, num2);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << num << "^(1/" << num2 << ") = " << result << std::endl;
                    break;

                case 18: // abs
                    num = Menu::getNumber("Enter value: ");
                    result = calc.abs(num);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << "|" << num << "| = " << result << std::endl;
                    break;

                case 19: // factorial
                    num = Menu::getNumber("Enter integer (0-20): ");
                    result = calc.factorial(static_cast<int>(num));
                    std::cout << std::fixed << std::setprecision(0);
                    std::cout << static_cast<int>(num) << "! = " << result << std::endl;
                    break;

                case 20: // percentage
                    num = Menu::getNumber("Enter value: ");
                    num2 = Menu::getNumber("Enter percentage: ");
                    result = calc.percentage(num, num2);
                    std::cout << std::fixed << std::setprecision(4);
                    std::cout << num << " * " << num2 << "% = " << result << std::endl;
                    break;

                case 21: // Constants
                    std::cout << std::fixed << std::setprecision(10);
                    std::cout << "π (Pi) = " << calc.getPi() << std::endl;
                    std::cout << "e (Euler's number) = " << calc.getE() << std::endl;
                    break;

                case 0:
                    return;

                default:
                    std::cout << "Invalid choice! Please try again." << std::endl;
                    break;
            }
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
}

void handleMemoryOperations(ScientificCalculator& calc) {
    int choice;
    double num;

    while (true) {
        Menu::displayMemoryMenu();
        choice = Menu::getChoice();

        switch (choice) {
            case 1: // Memory Store
                num = Menu::getNumber("Enter value to store: ");
                calc.memoryStore(num);
                std::cout << "Value " << num << " stored in memory." << std::endl;
                break;

            case 2: // Memory Add
                num = Menu::getNumber("Enter value to add: ");
                calc.memoryAdd(num);
                std::cout << "Value " << num << " added to memory." << std::endl;
                std::cout << "Memory: " << calc.memoryRecall() << std::endl;
                break;

            case 3: // Memory Subtract
                num = Menu::getNumber("Enter value to subtract: ");
                calc.memorySubtract(num);
                std::cout << "Value " << num << " subtracted from memory." << std::endl;
                std::cout << "Memory: " << calc.memoryRecall() << std::endl;
                break;

            case 4: // Memory Recall
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "Memory value: " << calc.memoryRecall() << std::endl;
                break;

            case 5: // Memory Clear
                calc.memoryClear();
                std::cout << "Memory cleared." << std::endl;
                break;

            case 0:
                return;

            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }
}

int main() {
    ScientificCalculator calc;
    int choice;

    std::cout << "╔════════════════════════════════════════╗\n";
    std::cout << "║   Welcome to Advanced Calculator!    ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";

    while (true) {
        Menu::displayMainMenu();
        choice = Menu::getChoice();

        switch (choice) {
            case 1:
                handleBasicOperations(calc);
                break;

            case 2:
                handleScientificOperations(calc);
                break;

            case 3:
                handleMemoryOperations(calc);
                break;

            case 4:
                Menu::displayHistoryMenu();
                calc.displayHistory();
                break;

            case 5:
                calc.clearHistory();
                std::cout << "History cleared!" << std::endl;
                break;

            case 0:
                std::cout << "\nThank you for using Advanced Calculator. Goodbye!\n" << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }

    return 0;
}

