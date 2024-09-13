// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 05/16/2023
// Statement:Program in C to find the largest element using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers;  // Pointer to hold the dynamically allocated array
    int totalElements, i;
    int largest;

    // Prompt the user to enter the total number of elements
    printf("Input total number of elements (1 to 10): ");
    scanf("%d", &totalElements);

    // Dynamically allocate memory for the input array
    numbers = (int*) malloc(totalElements * sizeof(int));

    // Check if memory allocation was successful
    if (numbers == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    // Read the elements from the user
    for (i = 0; i < totalElements; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first element is the largest
    largest = numbers[0];

    // Find the largest element in the array
    for (i = 1; i < totalElements; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Print the largest element
    printf("The Largest element is: %d\n", largest);

    // Free the dynamically allocated memory
    free(numbers);

    return 0;
}