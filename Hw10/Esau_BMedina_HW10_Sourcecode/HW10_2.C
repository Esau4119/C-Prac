// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 05/09/2023
// Statement: This code will use another function to print values in a swapped order
#include <stdio.h>
#include <stdio.h>

int arraySum(int *arr, int n);

int main()
{
    int n, i, arr[10];

    printf("Input the number of elements to store in the array (max 10): ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array:\n", n);
    for(i=0;i<n;i++)
    {
        printf("element - %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int sum = arraySum(arr, n);

    printf("The sum of array is: %d\n", sum);

    return 0;
}

int arraySum(int *arr, int n)
{
    int sum = 0;
    int *pt = arr; // Point to the first element in the array

    for (int i = 0; i < n; i++) {
        sum = sum + *pt; // Add the element pointed to by the pointer to the sum
        pt++; // Move the pointer to the next element
    }

    return sum;
}
