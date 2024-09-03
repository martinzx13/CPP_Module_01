
# Exercise 05: Harl

## Overview

In this exercise, you'll be implementing a `Harl` class that mimics the behavior of a character named Harl, who always complains in predictable ways. The complaints are categorized into four levels: `DEBUG`, `INFO`, `WARNING`, and `ERROR`. Each level corresponds to a different severity of complaint. Your task is to implement this behavior using C++ pointers to member functions, avoiding a long chain of `if/else` statements.

## Requirements

### Turn-in Directory

- **Directory**: `ex05/`

### Files to Submit

- **Makefile**: Build system file to compile the program.
- **Source Files**: 
  - `main.cpp`: The main entry point for the program.
  - `Harl.cpp`: The implementation file for the `Harl` class.
- **Header Files**:
  - `Harl.h` / `Harl.hpp`: The header file declaring the `Harl` class.

### Forbidden Functions

- **None**: All standard C++ functions are allowed.

## Objectives

### `Harl` Class

You need to create a `Harl` class with the following characteristics:

#### Private Member Functions

These functions represent the various levels of Harl's complaints:

- **`void debug( void );`**: 
  - Represents the "DEBUG" level complaint. 
  - Example output: `"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"`

- **`void info( void );`**:
  - Represents the "INFO" level complaint.
  - Example output: `"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"`

- **`void warning( void );`**:
  - Represents the "WARNING" level complaint.
  - Example output: `"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."`

- **`void error( void );`**:
  - Represents the "ERROR" level complaint.
  - Example output: `"This is unacceptable! I want to speak to the manager now."`

#### Public Member Function

- **`void complain( std::string level );`**:
  - This function determines which of the private member functions to call based on the `level` string passed as an argument.
  - The function should use pointers to member functions to map each `level` to its corresponding complaint method.
  - **Important**: You must implement this function using pointers to member functions rather than a series of `if/else` statements.

### Testing

- You should create tests in `main.cpp` to demonstrate that `Harl` properly complains at each level.
- You can use the provided example complaints or create your own.

### Example Usage

Your program should behave as follows:

```cpp
int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    return 0;
}
```

### Expected Output

```plaintext
DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!
INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!
WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.
ERROR: This is unacceptable! I want to speak to the manager now.
```

## Key Concepts

### Pointers to Member Functions

- **Efficiency and Clean Code**: Using pointers to member functions allows you to map a string directly to the corresponding function, avoiding long `if/else` chains and making the code cleaner and more efficient.
  
### Avoiding Conditionals

- **Code Simplicity**: The goal is to implement the `complain` method without using a forest of conditional statements. This encourages a better understanding of function pointers and their use cases in C++.

## Compilation and Execution

- **To compile the program**, run the following command:

  ```bash
  make
  ```

- **To run the program**, use:

  ```bash
  ./harl
  ```

- **To clean up the compiled files**, use:

  ```bash
  make clean
  ```

## Summary

In this exercise, you will learn to implement a class that mimics specific behaviors based on input levels. The key takeaway is using pointers to member functions to create clean, maintainable code that responds to different levels of complaints from a predefined set.

