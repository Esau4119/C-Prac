// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 03/25/2023
// Statement: This code will analyze the grade entered by the user. 
//used to import libraries. 
#include <stdio.h>


  
int main(void) {

char grade;
char result; 
printf("Input the grade: "); // asking user to input value
scanf("%c",&grade);         // storing value


if (grade == 'S'){                        // if the value is equal to one of these, then it will print the following. 
    printf("You have chosen: super");
}else if (grade == 'A'){                  // if grade is equal to A
    printf("You have chosen: Very good");
}else if (grade == 'B'){                  // if grade is equal to B
    printf("You have chosen: Fair");
}else if (grade == 'Y'){                   // if grade is equal to Y
    printf("You have chosen: ABSENT");
}else if (grade == 'F'){                  // if grade is equal to F
    printf("You have chosen: Fails");
}


}