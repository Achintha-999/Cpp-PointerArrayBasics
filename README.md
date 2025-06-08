# Pointer and Array Basics in C++

This project demonstrates the use of pointers and static arrays in C++ to return an array from a function.

## Overview

The code showcases how to use a static array within a function and return its pointer to the calling function. This is a common technique in C++ for working with arrays when you need to pass data between functions.

### Key Concepts Covered:
- Using **static arrays** to retain data after the function scope ends.
- Returning a **pointer** to an array from a function.
- Accessing array elements using pointers.

## How It Works

1. The `nums()` function:
   - Declares a static array of integers.
   - Accepts user input to populate the array.
   - Returns a pointer to the array.

2. The `main()` function:
   - Calls the `nums()` function and stores the returned pointer.
   - Accesses and prints the first element of the array using the pointer.

## Code Example

```cpp
#include <iostream>
using namespace std;

int* nums() {
    int static numbers[3];
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }
    return numbers;
}

int main() {
    int *p = nums();
    cout << p[0];
    return 0;
}
```
How to Run

1. Clone the repository:
   git clone https://github.com/Achintha-999/Cpp-PointerArrayBasics.git

2. Navigate to the project directory
    cd Cpp-PointerArrayBasics

3. Compile the code using a C++ compiler:
     g++ arrays.cpp -o PointerArrayBasics

4. Run the compiled program:
   ./PointerArrayBasics

Example Input/Output
Input:
10
20
30

Output:
10

Important Notes
-Static arrays are used because their lifetime extends beyond the function scope, allowing the pointer to remain valid after the function returns.
-Returning pointers to local (non-static) arrays is unsafe as their memory is deallocated after the function exits.
