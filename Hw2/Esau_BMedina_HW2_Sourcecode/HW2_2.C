// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 02/23/2023
// Statement: This code will display information that it recieves after asking the user to input data. 

//used to import libraries. 
#include <stdio.h> 



// initializing our main function
int main(){
    // these should not be changed so I kept them constant.
    const int oz = 16;
    const float kg = 0.45359;
    
    float userlb, newKg;
    float newOz;  
    

    // asking the user for a number. 
    printf("Please enter a number in pounds(lb): ");

    // Taking the data entered by user and storing in userlb. 
    scanf("%f", &userlb); 

    // using our mathmatial operations to get the converstions. 
    newKg = (kg*userlb);
    newOz = ( oz * userlb);


    // printing both the original number in pounds along with the converstion. 
    printf("%.2f in Kg:\t%f\n",userlb,newKg);
    printf("%.2f in Oz:\t%f",userlb,newOz);
   

    return 0;
}