// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 04/05/2023
// Statement: This code make the user create 2 matrices. Then we print them, add them, and subtract them. 
#include <stdio.h>
#include <stdbool.h> 

int main(){
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
    int b[n][n];

    // Entering values for A matrix
    printf("\nInput elements in the first matrix :\n");
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("element - [%d],[%d] : ", i,j);
            scanf("%d",&a[i][j]);          // inputing data through our keyboard
         }
    }


    // Entering values for b matrix
    printf("\nInput elements in the second matrix :\n");
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("element - [%d],[%d] : ", i,j);
            scanf("%d",&b[i][j]);          // inputing data through our keyboard
         }
    }




    printf("\nThe First matrix is :\n");      // Printing expected outptu
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("%d ",a[i][j]);
           
         }
       printf("\n");
    }

    printf("\nThe Second matrix is :\n");      // Printing expected outptu
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("%d ",b[i][j]);
           
         }
       printf("\n");
    }



    // Addition
    printf("\nThe Addition of two matrix is :\n");
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("%d ",a[i][j] + b[i][j]);       // adding the contents of the same index on both matrix A and B.
           
         }
       printf("\n");
    }


    //Subtraction 
    printf("\nThe Subtraction of two matrix is :\n");
    for (int i = 0; i < n; i++) {   // i = row
         for (int j = 0; j < n; j++){   // j = column
             printf("%d ",a[i][j] - b[i][j]); //Subtracting the contents of the same index on both matrix A and B.
           
         }
       printf("\n");
    }

    
    return 0;
}