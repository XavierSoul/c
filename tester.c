#include <stdio.h>
#include <string.h>

int main()
{
    //Declare Variables
    int arr[7] = {1,4,0,2,9,4,5};
    int temp = arr[0];
    int max = 0;

    //Loop to find the index of the largest number
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > arr[temp])
        {
            temp = i;            
        }
    }

    printf("The max number is at index %d", temp);
    

    return 0;
}