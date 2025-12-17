#ifndef MENU_HPP
#define MENU_HPP

/**
 * @brief Menu display and input handling utilities
 */
class Menu {
public:
    static void displayMainMenu();
    static void displayBasicMenu();
    static void displayScientificMenu();
    static void displayMemoryMenu();
    static void displayHistoryMenu();
    
    static int getChoice();
    static double getNumber(const std::string& prompt = "Enter number: ");
};

#endif // MENU_HPP

