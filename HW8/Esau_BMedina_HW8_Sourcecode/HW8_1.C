// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 04/21/2023
// Statement: print up to the Nth term of fibonacci sequence

//used to import libraries. 
#include <stdio.h>
#include <stdbool.h> // Imported in order to use boolean


int factorial(int n) {
    // Initialize the first two numbers in the Fibonacci sequence
    int fib1 = 0, fib2 = 1, fib;
    // Print out the first two numbers in the sequence
    printf("%d ", fib1);
    if (n > 0) {
        printf("%d ", fib2);
    }
    // Iterate from the third number up to the n-th number
    for (int i = 2; i < n; i++) {
        // Calculate the next number in the sequence
        fib = fib1 + fib2;
        // Shift the previous two numbers down the sequence
        fib1 = fib2;
        fib2 = fib;
        // Print out the current number in the sequence
        printf("%d ", fib);
    }
    // Print a newline character to end the output
   // printf("\n");
    return 0;
}


int main() {
    int n;
    // Prompt the user to enter the value of N
    printf("Enter the number of terms: ");
    // Read in the value of N from the user
    scanf("%d", &n);
    // Print a message to indicate what we are calculating
    printf("Fibonacci Series: ", n);
    // Call the fibonacci function with n as the argument
    factorial(n);
    return 0;
}


