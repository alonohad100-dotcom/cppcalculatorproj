# Simple Calculator

A simple command-line calculator implemented in C++ using CMake build system.

## Features

- Basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
- Last result tracking
- Clear calculator function
- Division by zero protection
- Input validation

## Requirements

- CMake 3.10 or higher
- C++17 compatible compiler (GCC, Clang, or MSVC)

## Building

### Linux/macOS

```bash
mkdir build
cd build
cmake ..
make
```

### Windows (using Visual Studio)

```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

## Running

After building, run the executable:

```bash
./bin/Calculator
```

Or on Windows:

```bash
bin\Calculator.exe
```

## Usage

1. Select an operation from the menu (1-4)
2. Enter the required numbers when prompted
3. View the result
4. Use option 5 to see the last result
5. Use option 6 to clear the calculator
6. Use option 0 to exit

## Project Structure

```
cppcalculatorproj/
├── CMakeLists.txt      # CMake build configuration
├── Calculator.hpp      # Calculator class header
├── Calculator.cpp      # Calculator class implementation
├── main.cpp           # Main program entry point
└── README.md          # This file
```

## Example

```
=== Simple Calculator ===
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Show last result
6. Clear calculator
0. Exit
========================
Enter your choice: 1
Enter first number: 10
Enter second number: 5
10.00 + 5.00 = 15.00
```

## License

This project is provided as-is for educational purposes.

