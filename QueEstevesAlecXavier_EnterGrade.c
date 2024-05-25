/*
file: Enter the grade
author: Alec Xavier B. Que Esteves
description: A program that gets the number of grades the user wants then gets the average
*/

#include <stdio.h>
#include <stdlib.h>

#define PASS_GRADE 50 //defining constants
#define MAX_GRADES 100

int main() {

    //declare variables
    int i;
    float results = 0, grade;
    int num_grades;
    int c; // Variable to store each character read

    //Ask for user input
    printf("How many grades would you like to input?\n");
    scanf("%d", &num_grades);

    // Clear input buffer
    while ((c = getchar()) != '\n' && c != EOF); // Read and discard the user input until we get a newline or end of file

    //for loop to get the grades for us to average.
    for (i = 1; i <= num_grades; i++)
    {
        printf("Enter grade %d: ", i);

        // Read grade and check if input is a floating-point number
        while (scanf("%f", &grade) != 1)
        {
            printf("Invalid input! Please enter a valid grade: ");

            // Clear input buffer
            while ((c = getchar()) != '\n' && c != EOF); // Read and discard the user input until we get a newline or end of file
        }

        // Check if grade is within the valid range
        if (grade >= 0 && grade <= 100)
        {
            results = results + grade;
        }
        else
        {
            printf("Invalid grade! Grade must be between 0 and 100.\n");
            i--; // Decrement i to keep doing the loop
        }
    }

    //once we're done getting all the values the for loop while stop then we can start running the results computation
    results = results / num_grades; // Calculate the average grade

    printf("Your final grade is %.2f.\n", results);

    if (results >= PASS_GRADE)
        printf("Congratulations! You PASSED!\n");
    else
        printf("Sorry, you FAILED.\n");

    return 0;
}