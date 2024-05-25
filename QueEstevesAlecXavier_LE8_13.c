/*
file: LE8_13 Maximum Number
author: Alec Xavier B. Que Esteves
description: Create a function that determine and returns the maximum number in an array of integers using pointers. 
The function accepts the starting address of the array and number of entries.
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int getNumberOfEntries();
void getEntries(int *numberSet, int size);
int findMax(int *numberSet, int size); // Modified function prototype

int main() 
{
    // Declare Variables
    int entry;
    int numberSet[100];
    int max;

    // Get number of entries
    entry = getNumberOfEntries();

    // Get entries
    getEntries(numberSet, entry);

    // Call function findMax
    max = findMax(numberSet, entry);

    // Print out the maximum number
    printf("The maximum number in the array is: %d\n", max);

    return 0;
}

// Function to get number of entries
int getNumberOfEntries() 
{
    int entry;
    while (1) // loop indefinitely until valid input is provided
    {
        printf("Enter the number of entries you would like: ");
        if (scanf("%d", &entry) != 1 || entry <= 0) 
        {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n'); // clear input buffer
        }
        else
        {
            break; // exit the loop if valid input is provided
        }
    }
    return entry; 
}

// Function to get entries
void getEntries(int *numberSet, int size) 
{
    int *p = numberSet; //Setting a pointer for easier passing of values
    for (int i = 0; i < size; i++, p++) 
    {
        int temp;
        while (1) // loop indefinitely until valid input is provided
        {
            printf("Enter number %d: ", i + 1);
            if (scanf("%d", &temp) != 1 || temp <= 0) 
            {
                printf("Invalid input. Please enter a positive number.\n");
                while (getchar() != '\n'); // clear input buffer
            } 
            else 
            {
                *p = temp; //Setting pointer to temp
                break; // exit the loop if valid input is provided
            }
        }
    }
}

// Function to find the maximum number
int findMax(int *numberSet, int size) 
{
    if (size <= 0) 
    {
        return -1; // Return -1 if the array is empty or invalid size
    }
    
    int max = *numberSet; // Initialize max with the first element of the array
    int *p = numberSet; // Pointer p points to the beginning of the array
    
    for (int i = 1; i < size; i++, p++) 
    {
        if (*p > max) 
        {
            max = *p; // Update max if the current element is greater
        }
    }
    
    return max;
}
