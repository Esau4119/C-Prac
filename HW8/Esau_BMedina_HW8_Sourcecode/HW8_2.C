// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 04/21/2023
// Statement: This code will use another function to print values in a swapped order
#include <stdio.h>

void swapValues (int userVal1, int userVal2){ // initializing our function with 2 arguments

printf("\nAfter swapping: n1 = %d, n2 = %d", userVal2, userVal1);// printing in swapped order

}
  
int main(void) {

int numberOne, numberTwo;

printf("Input 1st number: "); // asking user to input value
scanf("%d",&numberOne);         // storing value

printf("Input 2nd number: "); // asking user to input value
scanf("%d",&numberTwo);         // storing value

printf("\nBefore swapping: n1 = %d, n2 = %d", numberOne, numberTwo);// before swap
swapValues(numberOne,numberTwo); // calling function

return 0;
}