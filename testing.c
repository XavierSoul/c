#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1,2,3,4,5,6,6,7,8,9};

    for (int i = 0; i < 10; i++)
    {
        if(array[i] == 4)
        {
            printf("The number you're looking for is at index: %d", i);
        }
    }
    


    return 0;
}