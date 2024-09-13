// CopyRight
// Name: Esau Bojorquez Medina
// Course: Engr 213
// Date: 02/23/2023
// Statement: This code will display information that it recieves after asking the user to input data. 

//used to import libraries. 
#include <stdio.h> 



// initializing our main function
int main(){


    // adding our string variables. Need to use array to create a String. 
        // This time we will leave them empty so that we can ask the user for them.
    char course[10] = "";
    char stud_FName[30] = "";
    char stud_LName[30] = "";
    char studID[10] = "";
    char GPA[10] = "";
   
            // here we ask the user a series of questions to collect informatino. 
    printf("Please enter your course:\t");
            scanf("%s", &course);
    printf("Please enter your Name:\t\t");
            scanf("%s%s", &stud_FName,&stud_LName);
    printf("Please enter your ID#:\t\t");
            scanf("%s", &studID); 
    printf("Please enter your GPA:\t\t");
            scanf("%s", &GPA);


    // inputing our data into another array in order to iterate through them later. 
    char* info[] = {course,stud_FName, studID, GPA};

  

    
    printf("Here is your entered data:\n"); 
    //small for loop that iterates through our array.
    for(int i = 0; i < sizeof(info); i++){

        // As i traverses our array, if it stumbles apon our needed data,
        // it will print the corresponding lines;
        if (info[i] == course){
            printf("\nCourses:\t%s", course); ;
            //puts(course);
            
        }else if(info[i]  == stud_FName){
            printf("\nStudent Name:\t%s %s",stud_FName,stud_LName); 
           // puts(stud_FName); // This could also be used. 
        
           
        }else if(info[i]  == studID){
            printf("\nStudent ID:\t"); 

            // The puts method is built into the library of C. This allows us to print a string from a char array. 
            puts(studID);
        }else if(info[i]  == GPA){
            printf("GPA:\t\t%s",GPA);
           // puts(GPA); // this can also be used. 

        }
         
    }



    return 0;
}