#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    //Get user input
    do
    {
        printf("Enter a postive value for N: ");
        if (scanf("%d", &n) != 1 || n <= 0)
        {
            printf("Invalid Input! Enter a postive number: \n");
            while(getchar() != '\n'); //clear input buffer
        } 
    } while (n <= 0);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    

    return 0;
}