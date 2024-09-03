
# Exercise 03: Unnecessary Violence

## Overview

This exercise involves implementing a `Weapon` class along with two `Human` classes: `HumanA` and `HumanB`. The goal is to understand the differences in how objects are managed and passed around in C++, particularly when dealing with references, pointers, and object lifetimes.

## Requirements

### Files to Implement

- **`Weapon.h` / `Weapon.hpp`**: Header file for the `Weapon` class.
- **`Weapon.cpp`**: Implementation of the `Weapon` class.
- **`HumanA.h` / `HumanA.hpp`**: Header file for the `HumanA` class.
- **`HumanA.cpp`**: Implementation of the `HumanA` class.
- **`HumanB.h` / `HumanB.hpp`**: Header file for the `HumanB` class.
- **`HumanB.cpp`**: Implementation of the `HumanB` class.
- **`main.cpp`**: The main source file for testing the functionality.
- **`Makefile`**: A build system file to compile the program.

### Forbidden Functions

- **None**: You can use any C++ standard library functions necessary.

## Objectives

### Weapon Class

You need to implement a `Weapon` class with the following characteristics:

- **Private Attribute:**
  - `std::string type`: Represents the type of weapon (e.g., "sword", "gun").

- **Member Functions:**
  - `const std::string& getType() const`: Returns a constant reference to the `type` attribute.
  - `void setType(const std::string& newType)`: Sets the `type` attribute using the new type passed as a parameter.

### HumanA and HumanB Classes

You will create two classes, `HumanA` and `HumanB`, which represent two different types of humans with different weapon-handling behaviors.

#### Common Characteristics:

- **Attributes:**
  - `std::string name`: The name of the human.
  - `Weapon& weapon` (for `HumanA`) or `Weapon* weapon` (for `HumanB`): The weapon they wield.

- **Member Function:**
  - `void attack() const`: Displays the message: `<name> attacks with their <weapon type>`.

#### Differences Between HumanA and HumanB:

- **HumanA:**
  - Takes the `Weapon` as a reference in its constructor. 
  - Always has a weapon and cannot be unarmed.

- **HumanB:**
  - Does not take the `Weapon` in its constructor and may be unarmed.
  - The weapon is managed via a pointer, meaning `HumanB` can start without a weapon and later be given one (or have it removed).

## Expected Behavior

If your implementation is correct, executing the following code should produce the expected output:

```cpp
int main() {
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}
```

### Expected Output:

```
Bob attacks with their crude spiked club
Bob attacks with their some other type of club
Jim attacks with their crude spiked club
Jim attacks with their some other type of club
```

## Key Concepts

### Weapon Class:
- **Type Handling**: Understand how to manage and modify the type of a weapon using setter and getter functions.

### HumanA and HumanB Classes:
- **Reference vs. Pointer**: Learn the differences in handling objects passed by reference versus by pointer.
- **Object Lifetimes**: Understand how the lifetime of objects and the way they are referenced (or pointed to) affect the behavior of your program.

## Compilation and Execution

- To compile the program, run the following command:

  ```bash
  make
  ```

- This will generate an executable file, which you can run with:

  ```bash
  ./violence
  ```

- To clean up the compiled files, use:

  ```bash
  make clean
  ```

## Summary

This exercise is designed to help you understand the nuances of object management in C++. By implementing `Weapon`, `HumanA`, and `HumanB`, you’ll gain experience with references, pointers, and how they interact with object lifetimes.
