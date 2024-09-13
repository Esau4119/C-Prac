// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 05/16/2023
// Statement: Program to calculate mean of three courses of each students

//used to import libraries. 
#include <stdio.h>

struct student {
    char name[20];
    int eng;
    int math;
    int phys;
};

struct student data[] = {
    {"Jack", 82, 72, 78},
    {"Kim", 87, 82, 89},
    {"Steve", 92, 62, 79},
    {"Mark", 80, 82, 88}
};

int main() {
    int i;
    float mean;
    
    for (i = 0; i < 4; i++) {
        // Calculate the mean by summing the three course grades and dividing by 3.0
        mean = (data[i].eng + data[i].math + data[i].phys) / 3.0;
        
        // Print the student's name, individual course grades, and mean value
        printf("%s: Eng = %d Math = %d \tPhys = %d: Mean = %.1f\n",
               data[i].name, data[i].eng, data[i].math, data[i].phys, mean);
    }
    
    return 0;
}
