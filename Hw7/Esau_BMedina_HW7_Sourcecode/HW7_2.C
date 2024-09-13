// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 04/09/2023
// Statement: This code will calculate the sum of each row of a 2D array
//used to import libraries. 
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 6;
    bool blt_Five = true;       //ble is an assembly command that stands for  "less than"
    // asking user for input on sizing the array
    printf("\nInput the size of the square matrix (less than 5): ");
    scanf("%d",&n);


    // Here I am making sure that the program gets a number less than 5.
    if(n > 5){
         
        while(blt_Five){ // while our n is greater than 5 we will stay in this loop. 
            printf("\nNumber entered is greater or equal to 5 ");
            printf("\nInput the size of the square matrix (less than 5): ");
            scanf("%d",&n); 

            if(n < 5){ // after the user entered a value we can check if it is less than 5 in order to leave. 
                break;
            }
        } 
    }
    

    // assigning the sizing from user to the matricies
    int a[n][n];        
   

    // Entering values for A matrix
    printf("\nInput elements in the first matrix :\n");
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("element - [%d],[%d] : ", i,j);
            scanf("%d",&a[i][j]);          // inputing data through our keyboard
         }
    }

   
    // Addition
    printf("\nThe 2d array and its row sum:\n");
    for (int i = 0; i < n; i++) {   // i = row
     int rSum = 0;
     printf("Row%d : ",i+1);
         for (int j = 0; j < n; j++){   // j = column
            rSum +=  a[i][j];   // adding up our sum off numbers in row
            printf("%d ", a[i][j] );
                
         }
        
       printf("Sum: %d\n", rSum);
    }



    
    return 0;

}