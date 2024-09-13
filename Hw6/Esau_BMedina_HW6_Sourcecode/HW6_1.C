// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 04/05/2023
// Statement: This will ask the user to enter the size and data of an array. We will perform actions on this array. 

//used to import libraries. 
#include <stdio.h>

int main() {
    int n = 1;
    
    // asking user for input on sizing the array
    printf("Input the size of the array to store the number: ");
    scanf("%d",&n);

    int a[n];   // for some reason the n has a red line, the program works for me regardless of that error line. 
    printf("Input %d number of elements in the array: \n",n);
    int max = 0;
  
    for (int i = 0; i < n; i++) {
        
        printf("Element - %d: ", i);
        scanf("%d",&a[i]);          // inputing data through our keyboard

        if(a[i] >= max){
            max = a[i];
        }


    }

    printf("\nThe values store into the array are:");      // Printing expected outptu
    for (int i = 0; i < n; i++){      // starting our loop at the top index of our array and decrementing down
       printf(" %d",a[i]);
    }

    printf("\nThe values store into the array in reverse are:");      // Printing expected outptu
    for (int i = n-1; i>= 0; i--){      // starting our loop at the top index of our array and decrementing down
       printf(" %d",a[i]);
    }



  int min = max;
    for (int i = 0; i < n; i++){
         if(a[i] <= min){
            min = a[i];
        }
    }
    printf("\nMaximum element: %d",max);
    printf("\nMinimum element: %d\n",min);



    return 0;
}


