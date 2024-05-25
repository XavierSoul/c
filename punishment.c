#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Get user input with validation
    do 
    {
        printf("Enter a positive value for N: ");
        if (scanf("%d", &n) != 1 || n <= 0)
        {
            printf("Invalid input! Please enter a positive number.\n");
            while (getchar() != '\n'); // Clear input buffer
        }
    } while (n <= 0);

    for (int i = 0; i < n; i++)
    {
        printf("I'm sorry for not listening to my teacher. I will practice more next time!\n");
    }
    
    

    return 0;
}