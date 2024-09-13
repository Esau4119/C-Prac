// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/03/2023
// Statement: C program that displays the perimeter and area of a circle.


#include <stdio.h>
#include <stdbool.h>.h> // Imported in order to use boolean

  
int main(void) {

  int max = 0;              // Initialized to later get the max number
  bool all = true;         // used to see if all entered numbers are the same 
  int nums[3];            // Array used for storing user entered numbers
  int temp;              // Temporary variable to hold previous number in our loop

  for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){    // For loop that asks user to enter number
          printf("Input num:\t");       // printing question for our user
          scanf("%i", &nums[i]);       //  asking user to enter number
                                      //   
          if(i >= 1 ){               // If I is greater than 1 then we can run the following lines
            temp = nums[i-1];       // needed to be past the first iteration so that we can start comparing values
          if(temp != nums[i]){     //   if we see that 2 values are not the same then we can say that not all of the values are equal in                                                                  //     our array
            all = false;           
          }                     
                               
    }
    
    if (nums[i] > max){     //    if the entered value is bigger than our saved max, we would update max.
      max = nums[i];       
    }
    
    
    
    }
  
  if (all){                                                               // if all values were the same then we print out the following. 
    printf("\nnum1 num2 and num3 are equal");                                            
  }else{                                                                //Else we iterate again to check and see if we have any matching pairs. 
     for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){            // outer loop start at the very front of array
        for(int j = 1; j < sizeof(nums)/sizeof(nums[0]); j++){        // inner loop starts at the second index of array
          if(nums[i] == nums[j] && i < j){                           // if both pairs match and i is less than j (this is to avoid reprints) then we print
          
            printf("\nNum%d is equal to Num%d", i+1, j+1);         // printing the line from expected output
         
        }
      }  
      
    }
  }
  
  printf("\nMaximum is:\t%d",max);                          // printing our max


  
  return 0;
}

 