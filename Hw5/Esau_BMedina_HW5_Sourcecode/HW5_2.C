// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/25/2023
// Statement: This code will turn a binary number into a Decimal number
//used to import libraries. 
#include <stdio.h>
#include <math.h>

int main()
{
    // Declare variables
    long long binaryNumber;
    int decimalNumber = 0, i = 0, remainder;
    
    // Prompt the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    
    // Convert the binary number to decimal
    while(binaryNumber != 0)
    {
        // Extract the last digit of the binary number
        remainder = binaryNumber % 10;
        // Remove the last digit from the binary number
        binaryNumber /= 10;
        // Add the extracted digit multiplied by 2^i to the decimal number
        decimalNumber += remainder * pow(2, i);
        // Increment the loop counter
        ++i;
    }
    
    // Print the resulting decimal number
    printf("Decimal Number: %d", decimalNumber);
    
    return 0;
}