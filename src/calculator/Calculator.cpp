#include "Calculator.hpp"
#include <stdexcept>
#include <sstream>
#include <iomanip>

Calculator::Calculator() : lastResult(0.0), memory(0.0) {
}

Calculator::~Calculator() {
}

double Calculator::add(double a, double b) {
    lastResult = a + b;
    addToHistory(std::to_string(a) + " + " + std::to_string(b), lastResult);
    return lastResult;
}

double Calculator::subtract(double a, double b) {
    lastResult = a - b;
    addToHistory(std::to_string(a) + " - " + std::to_string(b), lastResult);
    return lastResult;
}

double Calculator::multiply(double a, double b) {
    lastResult = a * b;
    addToHistory(std::to_string(a) + " * " + std::to_string(b), lastResult);
    return lastResult;
}

double Calculator::divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Division by zero is not allowed!");
    }
    lastResult = a / b;
    addToHistory(std::to_string(a) + " / " + std::to_string(b), lastResult);
    return lastResult;
}

double Calculator::modulo(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Modulo by zero is not allowed!");
    }
    lastResult = std::fmod(a, b);
    addToHistory(std::to_string(a) + " % " + std::to_string(b), lastResult);
    return lastResult;
}

void Calculator::memoryStore(double value) {
    memory = value;
}

void Calculator::memoryAdd(double value) {
    memory += value;
}

void Calculator::memorySubtract(double value) {
    memory -= value;
}

double Calculator::memoryRecall() const {
    return memory;
}

void Calculator::memoryClear() {
    memory = 0.0;
}

void Calculator::addToHistory(const std::string& operation, double result) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4) << operation << " = " << result;
    history.push_back(oss.str());
    // Keep only last 50 entries
    if (history.size() > 50) {
        history.erase(history.begin());
    }
}

void Calculator::clearHistory() {
    history.clear();
}

void Calculator::displayHistory() const {
    if (history.empty()) {
        std::cout << "No calculation history.\n";
        return;
    }
    std::cout << "\n=== Calculation History ===\n";
    for (size_t i = 0; i < history.size(); ++i) {
        std::cout << (i + 1) << ". " << history[i] << "\n";
    }
    std::cout << "==========================\n";
}

std::vector<std::string> Calculator::getHistory() const {
    return history;
}

double Calculator::getLastResult() const {
    return lastResult;
}

