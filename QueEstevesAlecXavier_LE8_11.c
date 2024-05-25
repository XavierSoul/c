/*
file: LE8_11 Days of the Week.
author: Alec Xavier B. Que Esteves
description: Write a function that sets up an array called days, which contains pointers to the names of the days of the week 
and return the name of the day from the given day. The function accepts the given day.
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
const char *getDayOfWeek(int day);
int getValidInput();

int main() 
{
    //Declaration of Variables
    int day;

    //Call function getValidInput
    day = getValidInput();

    //Print the day of the week
    printf("Day of the week: %s\n", getDayOfWeek(day));

    return 0;
}


// Function to print out the day
const char *getDayOfWeek(int day) 
{
    const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    if (day >= 1 && day <= 7) 
    {
        return days[day - 1]; //User Clarity, we subtract one so they can still use zero-based indexing
    } 
    else 
    {
        return "Invalid day";
    }
}

// Function to get valid input from the user
int getValidInput() 
{
    int day = 0;

    do 
    {
        printf("Enter day: ");
        if (scanf("%d", &day) != 1 || day < 1 || day > 7) 
        {
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            while (getchar() != '\n'); // clear input buffer
        }
    } while (day < 1 || day > 7);

    return day; // Return the input without subtracting 1
}
