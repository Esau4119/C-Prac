// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 05/09/2023
// Statement:Program in C to store n elements in an array and print the elements

//used to import libraries. 
#include <stdio.h>
#include<stdio.h>

int main()
{
    int n, i;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Input %d number of elements in the array:\n", n);
    for(i=0;i<n;i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]); // Read the elements from the user
    }

    printf("The elements you entered are:\n");
    for(i=0;i<n;i++)
    {
        printf("element - %d: %d\n", i, *(arr+i)); // Print the elements using pointers
    }

    return 0;
}



