// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 02/11/2023
// Statement: This code will print out my name, id number, and major using variables and arrays. 

//used to import libraries. 
#include <stdio.h> 



// initializing our main function
int main(){


    // adding our string variables. Need to use array to create a String. 
    char name[] = "Esau B Medina";
    char iD[] = "900000000";
    char major[] = "Compuer Science";
   

    //Here we are initializing an array of pointers that lead to our variables. 
    char *info[] = {name,iD,major};

    // C allows for pointers to pointers. So we are pointing to our array. 
    char **b = info;

    //small while loop that iterates through our array and prints the data that is being held at that location. 
    while(*b != NULL ){

        // As pointer B traverses our array, if it stumbles apon our needed data, it will print the corresponding lines. 
        if (*b == name){
            printf("Name:\t");
            printf("%s",*b++);

        }else if(*b == iD){
            printf("\nID:\t");
            printf("%s",*b++);

        }else if(*b == major){
            printf("\nMajor:\t");
            printf("%s",*b++);

        }
    }
    return 0;
}