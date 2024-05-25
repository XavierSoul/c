#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int num;
    
    do
    {
        printf("Input a positive number.\n");
        if (scanf("%d", &num) != 1)
        {
            printf("Invalid Input! Enter a positive number.");
            while (getchar() != '\n'); // Clear input buffer
        }
    } while (num <= 0);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    for (int i = num; i > 0; i--)
    {
        printf("%d ", i);
    }

    
    
    


    return 0;
}