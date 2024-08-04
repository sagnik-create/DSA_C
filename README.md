# DSA_C
---

## Maximum and Minimum Element Finder

### Description

This program is designed to find and display the maximum and minimum elements in an array of integers provided by the user. It prompts the user to enter the size of the array and the elements of the array, then computes and prints the maximum and minimum values.

### How It Works

1. **Input the Size of the Array**: The program starts by asking the user to input the size of the array.
2. **Input the Elements of the Array**: The user is then prompted to enter the elements of the array one by one.
3. **Find the Maximum Element**: The program initializes the maximum element as the first element of the array and iterates through the array to find the largest element.
4. **Find the Minimum Element**: Similarly, the program initializes the minimum element as the first element of the array and iterates through the array to find the smallest element.
5. **Display the Results**: The program prints the maximum and minimum elements found in the array.

### Code

```c
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("The maximum element is %d\n", max);
    printf("The minimum element is %d\n", min);
    
    return 0;
}
```

### Usage

1. **Compile the Code**: Use a C compiler to compile the code. For example, using `gcc`:
   ```sh
   gcc -o find_min_max find_min_max.c
   ```
2. **Run the Program**: Execute the compiled program:
   ```sh
   ./find_min_max
   ```
3. **Follow the Prompts**: Enter the size of the array and the elements when prompted.

### Example

```
Enter the size of Array: 5
Enter the elements: 12 7 9 21 5
The maximum element is 21
The minimum element is 5
```

### Notes

- The program uses a simple approach to find the maximum and minimum elements by iterating through the array twice. It could be optimized to find both values in a single pass.
- Make sure to input valid integers when prompted to avoid unexpected behavior.

---
## Factorial Calculator

### Description

This program calculates the factorial of a given integer using a recursive function. The factorial of a non-negative integer `n` is the product of all positive integers less than or equal to `n`. The program demonstrates the use of recursion to perform this calculation.

### How It Works

1. **Recursive Function `fact`**:
   - **Base Case**: If `n` is 0, the function returns 1 since the factorial of 0 is 1.
   - **Recursive Case**: If `n` is greater than 0, the function calls itself with the argument `n-1` and multiplies the result by `n`.

2. **Main Function**:
   - Calls the `fact` function with a specific value (in this case, 5) to calculate its factorial.
   - Prints the result.

### Code

```c
#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int factorial;
    factorial = fact(5);
    printf("%d\n", factorial);
    return 0;
}
```

### Usage

1. **Compile the Code**: Use a C compiler to compile the code. For example, using `gcc`:
   ```sh
   gcc -o factorial_calculator factorial_calculator.c
   ```
2. **Run the Program**: Execute the compiled program:
   ```sh
   ./factorial_calculator
   ```

### Example

```
120
```

### Notes

- The program currently calculates the factorial of 5. To compute the factorial of other numbers, modify the argument passed to the `fact` function in the `main` function.
- Factorials grow very quickly with larger numbers. Be cautious of the potential for stack overflow or integer overflow when dealing with very large values of `n`.

---