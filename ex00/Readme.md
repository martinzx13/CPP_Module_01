
# Zombie Exercise - BraiiiiiiinnnzzzZ

## Exercise 00: BraiiiiiiinnnzzzZ

### Overview

This exercise involves implementing a simple `Zombie` class in C++. The goal is to understand the differences between stack and heap memory allocation by creating and managing `Zombie` objects using both approaches.

### Files to Implement

- **`Zombie.h` / `Zombie.hpp`**: Header file for the `Zombie` class.
- **`Zombie.cpp`**: Implementation of the `Zombie` class.
- **`newZombie.cpp`**: Function to create a `Zombie` object on the heap.
- **`randomChump.cpp`**: Function to create a `Zombie` object on the stack and make it announce itself.
- **`main.cpp`**: Entry point to test the functionality.
- **`Makefile`**: Build system file to compile the program.

### Zombie Class

The `Zombie` class has the following characteristics:

- **Attributes**:
  - `std::string name`: The name of the zombie (private).
  
- **Member Functions**:
  - `void announce()`: Announces the zombie's name in the format: `"<name>: BraiiiiiiinnnzzzZ..."`

- **Destructor**:
  - The destructor should print a message indicating that the zombie is destroyed, including the zombie's name. This is useful for debugging to ensure proper memory management.

### Functions to Implement

1. **`Zombie* newZombie(std::string name);`**
   - Creates a zombie on the heap, names it, and returns a pointer to the `Zombie` object. This allows the zombie to persist outside the scope of the function.

2. **`void randomChump(std::string name);`**
   - Creates a zombie on the stack, names it, and immediately makes the zombie announce itself. The zombie will be destroyed automatically when it goes out of scope.

### Key Concepts

- **Stack vs. Heap Allocation**:
  - **Stack Allocation**: Fast and managed automatically by the compiler. Objects are destroyed when they go out of scope.
  - **Heap Allocation**: More flexible, but requires manual management of memory. Objects persist until they are explicitly deleted.

- **Destructor**:
  - The `Zombie` class's destructor should be used to confirm when an object is destroyed. This is crucial for understanding when and where objects are cleaned up, especially in heap allocation scenarios.

### How to Compile and Run

- To compile the program, navigate to the directory containing the `Makefile` and run:

  ```bash
  make
  ```

- This will produce an executable, which you can run using:

  ```bash
  ./zombie
  ```

- To clean up the compiled files, use:

  ```bash
  make clean
  ```

### Example Usage

```cpp
int main() {
    // Creating a Zombie on the heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; // Remember to free heap-allocated memory

    // Creating a Zombie on the stack
    randomChump("StackZombie");

    return 0;
}
```

### Conclusion

This exercise helps solidify your understanding of memory management in C++. By implementing the `Zombie` class and its associated functions, you gain practical experience in when and how to use stack vs. heap allocation, as well as ensuring proper destruction of objects.