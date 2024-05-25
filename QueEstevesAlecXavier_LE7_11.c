/*
file: LE 7.11 Largest and Smallest 
author: Alec Xavier B. Que Esteves
description: Design the logic for a program that allows a user to enter 10 numbers, then displays all of the numbers,
the largest number, and the smallest.
*/

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
int validateInput();
void findLargestAndSmallest(int numbers[], int size, int *largest, int *smallest);
void displayNumbers(int numbers[], int size);


int main() 
{ 
    int numbers[10];
    int smallest, largest;

    printf("Enter 10 numbers. It will display the largest and smallest numbers.\n");

    // Loop to input numbers with validation
    for (int i = 0; i < 10; i++)
    {
        printf("Enter variable: ");
        numbers[i] = validateInput();
    }

    // Find the largest and smallest numbers
    findLargestAndSmallest(numbers, 10, &largest, &smallest);

    // Display all numbers entered
    displayNumbers(numbers, 10);

    // Display largest and smallest numbers
    printf("The largest number you entered was %d.\n", largest);
    printf("The smallest number you entered was %d.\n", smallest);

    return 0;
}


// Function to validate input
int validateInput() 
{
    int input;
    while (scanf("%d", &input) != 1) 
    {
        printf("Invalid input. Please enter a valid number.\n");
        while (getchar() != '\n'); // Clear input buffer
    }
    return input;
}

// Function to find the largest and smallest numbers
void findLargestAndSmallest(int numbers[], int size, int *largest, int *smallest) 
{
    *smallest = numbers[0];
    *largest = numbers[0];
    for (int i = 1; i < size; i++) 
    {
        if (numbers[i] > *largest) 
        {
            *largest = numbers[i];
        }
        if (numbers[i] < *smallest) 
        {
            *smallest = numbers[i];
        }
    }
}

// Function to display all numbers entered
void displayNumbers(int numbers[], int size) 
{
    printf("All the numbers you've entered:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
