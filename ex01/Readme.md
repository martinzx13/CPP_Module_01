
# Zombie Horde Exercise

## Exercise 01: Zombie Horde

### Overview

This exercise involves creating a horde of zombies using dynamic memory allocation in C++. The goal is to understand how to allocate and initialize multiple objects in a single operation and manage the memory effectively.

### Files to Implement

- **`Zombie.h` / `Zombie.hpp`**: Header file for the `Zombie` class.
- **`Zombie.cpp`**: Implementation of the `Zombie` class.
- **`zombieHorde.cpp`**: Implementation of the `zombieHorde()` function.
- **`main.cpp`**: Entry point to test the functionality.
- **`Makefile`**: Build system file to compile the program.

### Zombie Class

The `Zombie` class should have the following characteristics:

- **Attributes**:
  - `std::string name`: The name of each zombie (private).

- **Member Functions**:
  - `void announce(void)`: Announces the zombie's name in the format: `"<name>: BraiiiiiiinnnzzzZ..."`

- **Constructor**:
  - A constructor that initializes the zombie's name.

- **Destructor**:
  - The destructor should print a message indicating that the zombie is destroyed, which helps in verifying that all zombies are properly deleted.

### `zombieHorde` Function

The `zombieHorde` function should be implemented to:

- **Allocate Memory**:
  - Allocate memory for `N` `Zombie` objects in a single allocation (on the heap).

- **Initialize Zombies**:
  - Initialize each zombie in the horde with the provided `name`.

- **Return Value**:
  - Return a pointer to the first `Zombie` object in the horde.

### Function Signature

```cpp
Zombie* zombieHorde(int N, std::string name);
```

### Example Usage

In your `main.cpp`, you can implement tests to ensure that the `zombieHorde` function works as expected:

1. **Create a Horde**:
   - Call `zombieHorde()` with a number `N` and a name to create a horde of zombies.

2. **Announce Each Zombie**:
   - Loop through each zombie in the horde and call the `announce()` method to check if they have been initialized correctly.

3. **Memory Management**:
   - Ensure that all zombies are deleted properly after use to prevent memory leaks.

### Example Test in `main.cpp` (Continued)

```cpp
int main() {
    int N = 5; // Number of zombies
    Zombie* horde = zombieHorde(N, "Zombie");

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    // Clean up the dynamically allocated memory
    delete[] horde;

    return 0;
}
```

### Key Concepts

- **Dynamic Memory Allocation:**
  - The `zombieHorde` function should use `new[]` to allocate memory for `N` zombies at once.
  - You must use `delete[]` to free this memory when it is no longer needed.

- **Testing:**
  - Ensure your `main.cpp` includes tests that create and destroy a horde of zombies to verify correct behavior and memory management.

- **Memory Leak Prevention:**
  - Properly managing memory by using `delete[]` after you're done with the zombie horde ensures there are no memory leaks.

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

### Conclusion

This exercise helps you deepen your understanding of dynamic memory allocation in C++. By creating a horde of zombies, you gain practical experience with managing multiple objects in memory, ensuring proper cleanup, and preventing memory leaks.
