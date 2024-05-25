#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int n;

    //Get user input with validation
    do
    {
        printf("Enter a postive value for N: ");
        if (scanf("%d", &n) != 1 || n <= 0)
        {
            printf("Invalid Input! Enter a postive number: \n");
            while(getchar() != '\n'); //clear input buffer
        } 
    } while (n <= 0);

    //Loop to print the triangle

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    



    return 0;
}