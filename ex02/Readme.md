
# Exercise 02: HI THIS IS BRAIN

## Overview

This exercise is designed to help you understand and work with pointers and references in C++. The goal is to demystify references by comparing them to pointers and showing that they are simply another way to manipulate memory addresses and values.

## Requirements

### Files to Implement

- **`Makefile`**: A build system file to compile the program.
- **`main.cpp`**: The main source file containing your implementation.

### Forbidden Functions

- **None**: You can use any C++ standard library functions necessary.

## Objectives

Your program should include:

1. **A string variable** initialized to `"HI THIS IS BRAIN"`.
2. **`stringPTR`**: A pointer to the string.
3. **`stringREF`**: A reference to the string.

The program should perform the following tasks:

1. **Print the memory addresses**:
   - The memory address of the string variable.
   - The memory address held by `stringPTR`.
   - The memory address held by `stringREF`.

2. **Print the values**:
   - The value of the string variable.
   - The value pointed to by `stringPTR`.
   - The value referenced by `stringREF`.

## Key Concepts

### Pointers
- **Definition**: A pointer is a variable that holds the memory address of another variable. In this exercise, `stringPTR` is a pointer that stores the address of the string variable.

### References
- **Definition**: A reference is an alias for another variable. Once a reference is initialized to a variable, it cannot be changed to reference another variable. In this exercise, `stringREF` is a reference to the string variable.

### Why This Exercise Matters
- **Understanding References**: References can seem confusing at first because they offer a different syntax for accessing memory. This exercise shows that references are similar to pointers but provide a more straightforward way to work with variables without explicitly dealing with memory addresses.

## Example Output

Your program should produce output similar to the following:

```
Memory address of the string variable: 0x7ffee3b60e18
Memory address held by stringPTR: 0x7ffee3b60e18
Memory address held by stringREF: 0x7ffee3b60e18

Value of the string variable: HI THIS IS BRAIN
Value pointed to by stringPTR: HI THIS IS BRAIN
Value referenced by stringREF: HI THIS IS BRAIN
```

## Compilation and Execution

- To compile the program, run the following command:

  ```bash
  make
  ```

- This will generate an executable file, which you can run with:

  ```bash
  ./brain
  ```

- To clean up the compiled files, use:

  ```bash
  make clean
  ```

## Summary

This exercise helps you understand the relationship between pointers, references, and memory addresses in C++. By manipulating a simple string, you gain insight into how these concepts work and how they can be used in more complex programs.
