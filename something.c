#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

//prototyping for functions
int checknumber(float grade);

int main(){
    //Declare the variables needed9
    int i = 1;
    float results = 0, limit, grade;

    //Ask for the user to input the limits of the loop
    printf("How many grades would you like to input?\n");
    scanf("%f", &limit);

    //for loop that keeps getting the input of the grades
    for (i =  1; i <= limit;){
        printf("Enter the grade.\n");
        scanf("%f", &grade);
        //Check to see if it is a valid input
        if (checknumber(grade)){
            //Calculate the results then increment the counter
            results = results + grade;
            i++ ;
        }



    }


    //computation for the result
    results = results / (i - 1);

    //print the final result
    printf("Your final grade is %f.\n", results);

    //If function to see if you passed or not. Set to pass at the score of 50
    if (results >=50)
        printf("Your result of %.2f.... has PASSED!\n", results);
    else
        printf("Your result of %.2f... has FAILED.\n", results);




    return 0;
}

//call function to check if it's a number. Return true if it matches the given and returns false if not
int checknumber(float grade) {
    if (grade >= 0 && grade <= 100) {
        return TRUE;
    }
    return FALSE;
}