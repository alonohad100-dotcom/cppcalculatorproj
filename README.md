# Advanced Calculator

A comprehensive command-line calculator implemented in C++ with CMake build system. Features include basic arithmetic, scientific functions, memory operations, and calculation history.

## Features

### Basic Operations
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)

### Scientific Operations
- **Trigonometric Functions**: sin, cos, tan, arcsin, arccos, arctan (input in degrees)
- **Hyperbolic Functions**: sinh, cosh, tanh
- **Logarithmic Functions**: log (base 10), ln (natural log), log with custom base
- **Exponential Functions**: e^x, x^y
- **Root Functions**: square root (√), cube root (∛), nth root
- **Other Functions**: absolute value, factorial, percentage
- **Constants**: π (Pi), e (Euler's number)

### Memory Operations
- Memory Store (MS)
- Memory Add (M+)
- Memory Subtract (M-)
- Memory Recall (MR)
- Memory Clear (MC)

### Additional Features
- Calculation history (last 50 operations)
- Clear history function
- Input validation
- Error handling
- Formatted output

## Requirements

- CMake 3.10 or higher
- C++17 compatible compiler (GCC, Clang, or MSVC)

## Project Structure

```
cppcalculatorproj/
├── CMakeLists.txt              # CMake build configuration
├── README.md                   # This file
├── .gitignore                  # Git ignore rules
├── src/
│   ├── main.cpp                # Main program entry point
│   ├── calculator/
│   │   ├── Calculator.hpp       # Base calculator class header
│   │   ├── Calculator.cpp      # Base calculator implementation
│   │   ├── ScientificCalculator.hpp  # Scientific calculator header
│   │   └── ScientificCalculator.cpp # Scientific calculator implementation
│   ├── utils/
│   │   ├── MathUtils.hpp       # Math utilities header
│   │   └── MathUtils.cpp       # Math utilities implementation
│   └── ui/
│       ├── Menu.hpp            # Menu display header
│       └── Menu.cpp            # Menu display implementation
├── include/                    # Additional headers (if needed)
└── tests/                      # Test files (optional)
```

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
./bin/AdvancedCalculator
```

Or on Windows:

```bash
bin\AdvancedCalculator.exe
```

## Usage

### Main Menu

The calculator provides a hierarchical menu system:

1. **Basic Operations** - Simple arithmetic operations
2. **Scientific Operations** - Advanced mathematical functions
3. **Memory Operations** - Store and recall values
4. **View History** - See calculation history
5. **Clear History** - Reset calculation history
0. **Exit** - Quit the program

### Example Usage

```
╔════════════════════════════════════════╗
║     Advanced Calculator System        ║
╠════════════════════════════════════════╣
║  1. Basic Operations                  ║
║  2. Scientific Operations             ║
║  3. Memory Operations                 ║
║  4. View History                      ║
║  5. Clear History                     ║
║  0. Exit                              ║
╚════════════════════════════════════════╝
Enter your choice: 1

╔════════════════════════════════════════╗
║        Basic Operations               ║
╠════════════════════════════════════════╣
║  1. Addition (+)                      ║
║  2. Subtraction (-)                  ║
║  3. Multiplication (*)                ║
║  4. Division (/)                     ║
║  5. Modulo (%)                       ║
║  0. Back to Main Menu                 ║
╚════════════════════════════════════════╝
Enter your choice: 1
Enter first number: 10
Enter second number: 5
10.0000 + 5.0000 = 15.0000
```

## Code Organization

The project follows a modular structure:

- **Calculator Classes**: Base calculator and scientific calculator with inheritance
- **Math Utilities**: Reusable mathematical functions and constants
- **UI Components**: Menu display and input handling separated from business logic
- **Main Program**: Orchestrates the menu system and user interactions

## Error Handling

The calculator includes comprehensive error handling:
- Division by zero protection
- Invalid input validation
- Range checking for trigonometric functions
- Factorial overflow protection (max 20)
- Negative number checks for logarithms and square roots

## Future Enhancements

Potential features for future versions:
- Expression parser for complex mathematical expressions
- Unit conversions
- Statistical functions
- Graphing capabilities
- File I/O for saving/loading calculations
- GUI version

## License

This project is provided as-is for educational purposes.

## Contributing

Feel free to fork this project and submit pull requests for improvements!
