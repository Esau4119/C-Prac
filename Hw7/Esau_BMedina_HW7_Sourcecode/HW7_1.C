// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/25/2023
// Statement: This code will print the sum of the digits entered by user

//used to import libraries. 
#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int digit;

   
    printf("Enter a number: "); // Read the input number from the user
    scanf("%d", &num);

    
    while (num > 0) {// Iterate through the digits of the number using a while loop
        
        digit = num % 10;// Extract the last digit of the number
        
        sum += digit;// Add the digit to the running sum
      
        num /= 10;  // Remove the last digit from the number
    }

    // Print the final sum of the digits
    printf("The sum of digits is: %d", sum);

    return 0;
}



