#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int limit;
    int i;
    int j;
    int k;

    //Get user input
    printf("Enter how many levels you want the pyramid to have.\n");
    scanf("%d", &limit);

    //print asterisks

    for (i = 1; i <= limit; i++)
    {
        for (j = i; j < limit; j++)
        {
            printf(" ");
        }
        
        for (k = 1;k <= (2 * i) - 1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}