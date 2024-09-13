// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/03/2023
// Statement: This code will print out my name, id number, and major using variables and arrays. 

//used to import libraries. 
#include <stdio.h> 



// initializing our main function
int main(){

    //using const, since this variable should not change
    const float PI = 3.1415926;

    //initializing our variables
    int userNum, nth;

    printf("This program will set nth bit of the given number as 1.");
    printf("\nPlease enter any number: ");
        scanf("%i",&userNum); //taking user input and assigning it to our user number variable
    printf("Now enter number for nth bit(0-31): ");
        scanf("%i",&nth);// taking user input and assigning it to our nth number variable
    printf("Bit set successfully.");
    printf("\nNumber before setting %d bit:\t%d (in decimal)",nth,userNum);
    userNum= (1 << nth) | userNum; // using left shift 
    printf("\nNumber after setting %d bit:\t%d (in decimal)",nth,userNum);
    
    return 0;
}