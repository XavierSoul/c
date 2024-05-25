#include <stdio.h>
#include <stdlib.h>

int main(){

    int grade;

//input grade and get grade from user
    printf("Input your grade.\n");
    scanf("%d", &grade);

// Loop to see if grade is good or not

    if (grade >= 80){
        printf("Excellent Job!\n");
    }else if (grade <= 60){
        printf("Oh no... you didn't pass.\n");
    }else{
        printf("Not bad...\n");
    }



    return 0;
}