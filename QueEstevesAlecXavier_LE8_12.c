/*
file: LE8_12 Search Element
author: Alec Xavier B. Que Esteves
description: Write a function to search an element in array using pointers and return the index location. The function accepts the starting address of the array, number of entries and number to search.
*/
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int getNumberOfEntries();
void getEntries(int *numberSet, int size);
int getSearchNumber();
int linearSearch(int *numberSet, int size, int search);

int main() 
{
    // Declare Variables
    int entry;
    int numberSet[100];
    int search;

    // Get number of entries
    entry = getNumberOfEntries();

    // Get entries
    getEntries(numberSet, entry);

    // Get search number
    search = getSearchNumber();

    // Call function linearSearch
    int index = linearSearch(numberSet, entry, search);

    // Print out where the input is found
    if (index == -1) 
    {
        printf("Not found.\n");
    } 
    else 
    {
        printf("Found in Index %d\n", index);
    }

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

// Function to get search number
int getSearchNumber() 
{
    int search; 
    while (1) // loop indefinitely until valid input is provided
    {
        printf("What number would you like to search for: ");
        if (scanf("%d", &search) != 1 || search <= 0) 
        {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n'); // clear input buffer
        }
        else
        {
            break; // exit the loop if valid input is provided
        }
    }
    return search; //Just asking what number the user would like to search for
}

// Function to do the linear search
int linearSearch(int *numberSet, int size, int search) 
{
    int *p = numberSet;
    for (int i = 0; i < size; i++, p++) 
    {
        if (*p == search) //If the value in the array is equal to the searched for value then it will return that index
        {
            return i;
        }
    }
    return -1;
}
