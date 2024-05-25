#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Declare Function prototypes
int Usercount();
void capitalizeString(char *str);
void UserInput(char **lastName, char **firstName, char **middleInt, char **phoneNum, int userInput);
void UserPhonebook(char **lastName, char **firstName, char **middleInt, char **phoneNum, int userInput);

int main()
{
    // Declare User Input
    int userInput;
    char **phoneNum;
    char **lastName;
    char **firstName;
    char **middleInt;

    printf ("========================================\n              Phonebook\n========================================");

    userInput = Usercount(); // Get number of users

    // Allocate memory for arrays of pointers
    phoneNum = malloc(userInput * sizeof(char *));
    lastName = malloc(userInput * sizeof(char *));
    firstName = malloc(userInput * sizeof(char *));
    middleInt = malloc(userInput * sizeof(char *));

    // Allocate memory for each pointer
    for (int i = 0; i < userInput; i++) {
        phoneNum[i] = malloc(100 * sizeof(char));
        lastName[i] = malloc(100 * sizeof(char));
        firstName[i] = malloc(100 * sizeof(char));
        middleInt[i] = malloc(100 * sizeof(char));
    }

    UserInput(lastName, firstName, middleInt, phoneNum, userInput); // Prompt user for last name, first name, middle initial, and phone number
    UserPhonebook(lastName, firstName, middleInt, phoneNum, userInput); // Display user phonebook

    // Free allocated memory
    for (int i = 0; i < userInput; i++) {
        free(phoneNum[i]);
        free(lastName[i]);
        free(firstName[i]);
        free(middleInt[i]);
    }
    free(phoneNum);
    free(lastName);
    free(firstName);
    free(middleInt);

    return 0;
}

int Usercount() // Get number of users
{
    int userInput;
    printf ("\n\nEnter how many users: ");
    scanf ("%d", &userInput);

    return userInput;
}

void capitalizeString(char *str) // Capitalize user input
{
    int i = 0;

    while (str[i]) {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

// Function to prompt user for last name, first name, middle initial, and phone number
void UserInput(char **lastName, char **firstName, char **middleInt, char **phoneNum, int userInput)
{
    // Loop that keeps going depending on how many users you inputted
    for (int i = 0; i < userInput; i++)
    {
        printf ("\n\n--Contact number #%d--\n", i+1);

        // Last Name
        printf ("Enter Last Name: ");
        getchar(); // Consume newline character left in the buffer
        fgets(lastName[i], 100, stdin);
        lastName[i][strcspn(lastName[i], "\n")] = '\0'; // Remove trailing newline character

        // First Name
        printf ("Enter First Name: ");
        fgets(firstName[i], 100, stdin);
        firstName[i][strcspn(firstName[i], "\n")] = '\0'; // Remove trailing newline character

        // Middle Initial
        printf ("Enter Middle Initial: ");
        scanf ("%s", middleInt[i]);
        while (!isalpha(middleInt[i][0])) // Check if not an alphabet
        {
            printf ("Invalid input! Middle Initial should only contain an alphabet. Please try again: ");
            scanf ("%s", middleInt[i]);
        }

        // Input for Phone Number
        printf ("Enter Phone Number: ");
        scanf ("%s", phoneNum[i]);
        while (strlen(phoneNum[i]) != 11) // Check if the length is not 11
        {
            printf ("Invalid input! Phone Number should be 11 digits. Please try again: ");
            scanf ("%s", phoneNum[i]);
        }

        // Add dashes every four digits
        for (int j = 4; j < 11; j += 4)
        {
            memmove(phoneNum[i] + j + 1, phoneNum[i] + j, strlen(phoneNum[i]) - j + 1); // Shift characters to make space for dash
            phoneNum[i][j] = '-'; // Insert dash
        }
    }
}

void UserPhonebook(char **lastName, char **firstName, char **middleInt, char **phoneNum, int userInput) // Function to display user phonebook
{
    printf ("\n\n-----------------------------\n      Contacts Phonebook\n-----------------------------\n");

    for (int i = 0; i < userInput; i++)
    {
        // Capitalize last name, first name, and middle initial
        capitalizeString(lastName[i]);
        capitalizeString(firstName[i]);
        capitalizeString(middleInt[i]);

        printf ("\n\n--Contact number #%d--\n", i+1);
        printf ("\nName: %s, %s, %s\nPhone Number: %s\n", lastName[i],
                firstName[i], middleInt[i], phoneNum[i]);
    }
}
