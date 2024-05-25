#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int validateInput(const char *string);
void getStringInput(char *string, int size);
void findLongestString(char *longest);

int main()
{
    // Declaration of Variables
    char longest[100];

    findLongestString(longest);

    printf("The longest string you inputted was %s\n", longest);

    return 0;
}

// Function to validate input
int validateInput(const char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (!isalpha(string[i]))
        {
            return 0; // Not a valid string
        }
    }
    return 1; // Valid string
}

// Function to get a string input
void getStringInput(char *string, int size)
{
    fgets(string, size, stdin);
    strtok(string, "\n"); // Remove the newline character at the end
}

// Function to find longest string
void findLongestString(char *longest)
{
    char temp[100]; // Temporary string to hold our longest string

    strcpy(longest, ""); // Initialize longest string to have nothing inside

    // Ask user to input 5 strings
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Enter string no. %d: ", i + 1);
            getStringInput(temp, sizeof(temp));

        } while (!validateInput(temp)); // Validate input

        // Compare length
        if (strlen(temp) > strlen(longest))
        {
            strcpy(longest, temp);
        }
    }
}
