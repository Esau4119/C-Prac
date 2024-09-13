// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/13/2023
// Statement: This code will get the max value of 3 user entered numbers. It will check to see if we have matching pair or if all 3 are matching. 

//used to import libraries. 
#include <stdio.h>

int main(void) {

  int max = 0;            
  int num1,num2,num3;           
           
         printf("Input num:\t");           
          scanf("%i", &num1); 

           printf("Input num2:\t");           
          scanf("%i", &num2); 

           printf("Input num3:\t");           
          scanf("%i", &num3); 

          if (num1 == num2 & num1 == num3){
                 printf("\nnum1 num2 and num3 are equal");  
                 max = num1;
          }else{
             if (num1 >= num2){
                if(num1 == num3 ){
                    max = num1;
                    printf("\nNum1 is equal to Num3");
                }else if( num1 == num2){
                    max = num1;
                    printf("\nNum1 is equal to Num2");
                }else if( num1 > num3){
                    max = num1;
                }else{
                    max = num3;
                }

            }else if(num2 >= num1){
              if(num2 == num3 ){
                    max = num2;
                    printf("\nNum2 is equal to Num3");
                }else if( num2 == num1){
                    max = num2;
                    printf("\nNum1 is equal to Num2");
                }else if( num2 > num3){
                    max = num2;
                }else{
                    max = num3;
                }
            }else if(num3 >= num2){
                if(num1 == num3 ){
                    max = num1;
                    printf("\nNum1 is equal to Num3");
                }else if( num3 == num2){
                    max = num3;
                    printf("\nNum1 is equal to Num2");
                }else if( num3 > num2){
                    max = num3;
                }else{
                    max = num3;
                }
            }
          }


           printf("\nMaximum is:\t%d",max);  

  return 0;
}


