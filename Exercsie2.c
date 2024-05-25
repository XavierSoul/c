#include <stdio.h>
#include <stdlib.h>

int main(){

// declaring of variables
    char grade;

// Printing the options for the ranges and asking for the char
    printf("Select your grade from the ranges: \nA (90-100)\nB (80-89)\nC (70-79)\nD (60-69)\nF (0-59)\n");
    scanf("%c",&grade);

//making the switch case statement to check what the user inputted and react accordingly

    switch (grade){
        case 'A':
            printf("Grade is between 90-100,\n");
            break;
        case 'B':
            printf("Grade is between 80-89,\n");
            break;
        
        case 'C':
            printf("Grade is between 70-79,\n");
            break;

        case 'D':
            printf("Grade is between 60-69,\n");
            break;
        
        case 'F':
            printf("Grade is between 0-59,\n");
            break;

        default:
            printf("Invalid character, try again.");
            break;
    }

    return 0;
}