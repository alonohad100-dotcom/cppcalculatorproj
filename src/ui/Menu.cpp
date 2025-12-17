#include "Menu.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

void Menu::displayMainMenu() {
    std::cout << "\n╔════════════════════════════════════════╗\n";
    std::cout << "║     Advanced Calculator System        ║\n";
    std::cout << "╠════════════════════════════════════════╣\n";
    std::cout << "║  1. Basic Operations                  ║\n";
    std::cout << "║  2. Scientific Operations             ║\n";
    std::cout << "║  3. Memory Operations                  ║\n";
    std::cout << "║  4. View History                      ║\n";
    std::cout << "║  5. Clear History                     ║\n";
    std::cout << "║  0. Exit                              ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";
    std::cout << "Enter your choice: ";
}

void Menu::displayBasicMenu() {
    std::cout << "\n╔════════════════════════════════════════╗\n";
    std::cout << "║        Basic Operations               ║\n";
    std::cout << "╠════════════════════════════════════════╣\n";
    std::cout << "║  1. Addition (+)                      ║\n";
    std::cout << "║  2. Subtraction (-)                   ║\n";
    std::cout << "║  3. Multiplication (*)               ║\n";
    std::cout << "║  4. Division (/)                      ║\n";
    std::cout << "║  5. Modulo (%)                        ║\n";
    std::cout << "║  0. Back to Main Menu                 ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";
    std::cout << "Enter your choice: ";
}

void Menu::displayScientificMenu() {
    std::cout << "\n╔════════════════════════════════════════╗\n";
    std::cout << "║      Scientific Operations            ║\n";
    std::cout << "╠════════════════════════════════════════╣\n";
    std::cout << "║  Trigonometric:                       ║\n";
    std::cout << "║    1. sin(x)    2. cos(x)  3. tan(x) ║\n";
    std::cout << "║    4. arcsin(x) 5. arccos(x) 6. arctan(x)║\n";
    std::cout << "║  Hyperbolic:                          ║\n";
    std::cout << "║    7. sinh(x)   8. cosh(x)  9. tanh(x)║\n";
    std::cout << "║  Logarithmic:                         ║\n";
    std::cout << "║   10. log(x)   11. ln(x)   12. log_b(x)║\n";
    std::cout << "║  Exponential:                         ║\n";
    std::cout << "║   13. e^x      14. x^y                ║\n";
    std::cout << "║  Roots:                               ║\n";
    std::cout << "║   15. √x       16. ∛x      17. nth root║\n";
    std::cout << "║  Other:                               ║\n";
    std::cout << "║   18. |x|      19. x!      20. x%     ║\n";
    std::cout << "║   21. Constants (π, e)                ║\n";
    std::cout << "║    0. Back to Main Menu               ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";
    std::cout << "Enter your choice: ";
}

void Menu::displayMemoryMenu() {
    std::cout << "\n╔════════════════════════════════════════╗\n";
    std::cout << "║        Memory Operations              ║\n";
    std::cout << "╠════════════════════════════════════════╣\n";
    std::cout << "║  1. Memory Store (MS)                 ║\n";
    std::cout << "║  2. Memory Add (M+)                   ║\n";
    std::cout << "║  3. Memory Subtract (M-)              ║\n";
    std::cout << "║  4. Memory Recall (MR)                ║\n";
    std::cout << "║  5. Memory Clear (MC)                 ║\n";
    std::cout << "║  0. Back to Main Menu                 ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";
    std::cout << "Enter your choice: ";
}

void Menu::displayHistoryMenu() {
    std::cout << "\n╔════════════════════════════════════════╗\n";
    std::cout << "║        Calculation History            ║\n";
    std::cout << "╚════════════════════════════════════════╝\n";
}

int Menu::getChoice() {
    int choice;
    while (!(std::cin >> choice)) {
        std::cout << "Invalid input! Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return choice;
}

double Menu::getNumber(const std::string& prompt) {
    double num;
    std::cout << prompt;
    while (!(std::cin >> num)) {
        std::cout << "Invalid input! Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return num;
}

