// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 05/04/2023
// Statement: This program  uses function calls to calculate x raised to the power x, square root of x, and cosine of x

#include <stdio.h>
#include <math.h>

// function to calculate x raised to the power y
double power(double x, double y) {
    return pow(x, y);
}

// function to calculate square root of x
double square_root(double x) {
    return sqrt(x);
}

// function to calculate cosine of x
double cosine(double x) {
    return cos(x);
}

int main() {
    int x;
    printf("Input an integer number: ");
    scanf("%d", &x);

 
    double xx = power(x, x);
    printf("\n%d raised to the power %d: %.0f\n", x, x, xx);

    double sqrtx = square_root(x);
    printf("square root of %d: %.0f\n", x, sqrtx);

    double cosx = cosine(x);
    printf("cosine of %d: %.4f\n", x, cosx);

    return 0;
}

