/*
file: LE 7_12 Vowels and Consonants in String.
author: Alec Xavier B. Que Esteves
description: Ask a string and determine how many vowels and consonants.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Function prototypes
void validateInput(char *string);
int countVowels(const char *string);
int countConsonants(const char *string);

int main()
{
    char string[100];
    printf("Enter a string: ");
    validateInput(string); //Makes sure it only accepts strings with alphabets

    int vowels = countVowels(string);
    int consonants = countConsonants(string);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

// Function to validate input
void validateInput(char *string) //Points to string
{
    int i = 0;
    fgets(string, 100, stdin); // Read string including spaces
    while (string[i] != '\n') //Condition states as long as the string index is not null which is the last index then it will continue
    {
        if (!isalpha(string[i])) //Condition states if index is not an alphabet then it will error
        {
            printf("Input must contain only alphabetic characters. Please try again: ");
            fgets(string, 100, stdin);
            i = 0;
        }
        else //If it's an alphabet move to the next index then check again if it's an alphabet
        {
            i++;
        }
    }
}

// Function to count vowels
int countVowels(const char *string) //Points to string
{
    //Initialize vowels
    int vowels = 0;
    for (int i = 0; string[i] != '\0'; i++) //Counting how many vowels
    {
        if (isalpha(string[i])) //Check to see if it's a letter
        {
            char ch = tolower(string[i]); //Turn the indexed letter into lowercase for convenience
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
        }
    }
    return vowels; //Will return the number of vowels
}

// Function to count consonants
int countConsonants(const char *string) //Points to string
{
    //Initialize consonants
    int consonants = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isalpha(string[i])) //Check to see if it's a letter
        {
            char ch = tolower(string[i]); //Turn the indexed letter into lowercase for convenience
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
                consonants++;
        }
    }
    return consonants; //Will return the number of consonants
}
