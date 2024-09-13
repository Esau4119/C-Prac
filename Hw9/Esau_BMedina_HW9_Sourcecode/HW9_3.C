// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 05/04/2023
// Statement: Demonstrate the use of & and * operator
//used to import libraries. 
#include <stdio.h>
int main() {
    int m = 100;
    float fx = 200.600006;
    char cht = 'z';
    printf("Pointer: Demonstrate the use of & and * operator:\n");
    printf("--------------------------------------------------------\n");
    printf("m = %d\nfx = %f\ncht = %c\n", m,fx,cht);

    // using & operator to print addresses
    printf("\nUsing & operator:\n");
    printf("--------------------------------------\n");
    printf("address of m = %p\naddress of fx = %p\naddress of cht = %p\n", &m, &fx, &cht);
    
    // using & and * operators to print values
    printf("\nUsing & and * operator:\n"); 
    printf("--------------------------------------\n");
    printf("value at address of m = %d\nvalue at address of fx = %f\nvalue at address of cht = %c\n", *(&m),*(&fx),*(&cht));
   
    // using only pointer variable to print addresses
    printf("\nUsing only pointer variable:\n");
    printf("--------------------------------------\n");
    int *pm = &m;
    float *pfx = &fx;
    char *pcht = &cht;
    printf("address of m = %p\naddress of fx = %p\naddress of cht = %p\n", pm, pfx, pcht);
   
    // using only pointer operator to print values
    printf("\nUsing only pointer variable:\n");
    printf("--------------------------------------\n");
    printf("value at address of m = %d\nvalue at address of fx = %f\nvalue at address of cht = %c\n", *pm, *pfx, *pcht);

    return 0;
}

