#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int elements;

    printf("Enter number of elements: ");
    scanf("%d", &elements);

    int numbers[elements];

    int valid_counts = 0;

    while (valid_counts < elements)
    {
        char input[50];

        printf("Enter your number ");
        scanf("%s", input);

        int valid_input = 1;
        for (int  i = 0; input[i] !=  '\0'; i++)
        {
            if (!isdigit(input[i]))
            {
                valid_input = 0;
                break;
            }
            
        }
        if (valid_input)
        {
            numbers[valid_counts] = atoi(input);

        }
        else{
            printf("invalid input");
        }
        printf("numbers entered: ");
        for (int i = 0; i < elements; i++)
        {
            printf("%d", numbers[i]);
        }
        
        printf("\n");
        
        
    }
    
}