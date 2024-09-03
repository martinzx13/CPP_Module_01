
# Exercise 04: File Replace

## Overview

This exercise involves creating a program that processes a text file by replacing all occurrences of a specific string (`s1`) with another string (`s2`). The program reads from an existing file and writes the modified content to a new file. The challenge lies in implementing this without using the `std::string::replace` function, encouraging you to explore other string manipulation techniques in C++.

## Requirements

### Turn-in Directory

- **Directory**: `ex04/`

### Files to Submit

- **Makefile**: Build system file to compile the program.
- **Source Files**: All `.cpp` files.
- **Header Files**: Any `.h` or `.hpp` files used.

### Forbidden Functions

- **`std::string::replace`**: Directly using the `replace` member function of `std::string` is not allowed.

### Allowed Functions

- All other member functions of the `std::string` class are allowed. You will need to leverage these functions creatively to achieve the desired string replacement functionality.

## Program Details

### Program Input

The program should take three command-line arguments in the following order:

1. **Filename**: The name of the file to be processed.
2. **String `s1`**: The string to be replaced in the file.
3. **String `s2`**: The string to replace `s1`.

### Program Behavior

1. **File Handling**:
   - The program should open the specified file and read its contents.
   - If the file cannot be opened (e.g., it doesn't exist), the program should handle this gracefully and provide an appropriate error message.

2. **String Replacement**:
   - The program should replace every occurrence of `s1` with `s2` in the file's content.
   - Since `std::string::replace` is forbidden, consider using functions like `find`, `substr`, `append`, or others to implement the replacement logic.

3. **Output**:
   - The modified content should be written to a new file named `<filename>.replace`.
   - Ensure that the program handles edge cases, such as `s1` being empty, `s2` being empty, or no occurrences of `s1` in the file.

### Error Handling

- **Invalid Input**: The program should check that the correct number of arguments is provided. If not, it should display a usage message and exit.
- **File Errors**: If the program cannot open the input file or create the output file, it should handle these errors gracefully.

## Example Usage

### Command Line

```bash
./replace filename.txt s1 s2
```

### Expected Behavior

- **Input File (`filename.txt`)**:
  ```
  Hello, this is s1.
  s1 is being used multiple times.
  ```

- **Output File (`filename.txt.replace`)**:
  ```
  Hello, this is s2.
  s2 is being used multiple times.
  ```

## Key Concepts

### String Manipulation

- **`std::string` Functions**: Since `std::string::replace` is forbidden, you will need to use other functions like `find`, `substr`, `erase`, and `insert` to manually replace occurrences of `s1` with `s2`.

### File Handling

- **File Streams**: Use C++ file streams (`std::ifstream`, `std::ofstream`) to read from and write to files.

### Error Handling

- **Robustness**: Your program should handle various error conditions, such as missing files, incorrect inputs, or empty strings, gracefully.

## Compilation and Execution

- **To compile the program**, run the following command:

  ```bash
  make
  ```

- **To run the program**, use:

  ```bash
  ./replace <filename> <s1> <s2>
  ```

- **To clean up the compiled files**, use:

  ```bash
  make clean
  ```

## Testing

- Create and turn in your own tests to ensure your program works as expected. Consider edge cases and different input scenarios to validate the robustness of your solution.

## Summary

This exercise challenges you to manipulate strings and handle file I/O operations in C++. By restricting the use of `std::string::replace`, you gain a deeper understanding of string manipulation and how to creatively solve problems using the tools available in the C++ standard library.

