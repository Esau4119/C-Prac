// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/16/2023
// Statement: this code will get the sum and amount of numbers between 31 and 100

//used to import libraries. 
#include <stdio.h>


  
int main(void) {

  int count = 0; // Counter for amount of numbers
  int sum = 0;    // Fro summation of numbers
  for(int i = 0; i < 100; i++){    // For loop that goes from 0 ---> 99
      if(i >= 31 ){               // If I is greater than 31 then we can run the following lines            
            count = count + 1; // keeping track of the amount of numbers that are greater than 31 
            sum = sum + i; // summation of all the numbers
        
      }

  }
  printf("There are %d numbers from 1 to 100 are greater than 31.",count); // Printing first line of expected output
  printf("\nThe sum of these %d number is %d.",count,sum);  // Printing Second line of expected output
  return 0;
}