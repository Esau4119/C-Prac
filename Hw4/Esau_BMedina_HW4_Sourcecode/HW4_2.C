// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/13/2023
// Statement: This code will tell the user if their number is odd or even. It runs until the user types -1 to kill the game. 

//used to import libraries. 
#include <stdio.h> 
#include <stdbool.h>


// initializing our main function
int main(){
    float nums = 0;
printf("Welcome, Type any number to see if it is even or odd\nEnter -1 to exit!\n");
       

bool ctrl = true; 
while(ctrl){ // while this is true the loop runs
  if (nums == -1){ // if user types -1 then the game ends
    break;
  }

    if( (nums - (int)nums)== 0){ // if there is any left over after subtracing these integers then we have a decimal.
        if(nums != 0){
            if( (int)nums %2 == 0){ // if int is divisable by 2 
                printf("\n%.0f is even",nums);
            }else { // else it is odd 
                printf("\n%.0f is odd",nums);
            }
        }
        
        
    printf("\nInput integer:\t");       // printing question for our user
    scanf("%f", &nums);
    }else{
        printf("\nEnter an Integer PLEASE:\t");       // printing question for our user
        scanf("%f", &nums); 


    }
  


}



printf("\nthank you for playing!");
    return 0;
}