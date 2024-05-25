#include <stdio.h>
#include <stdlib.h>

int main(){
//declaring variables
    int number, pow;
    int result = 1;
    int i = 0;

//Asking for user to input and power
    printf("Enter the number.\n");
    scanf("%d", &number);
    printf("Enter the power.\n");
    scanf("%d", &pow);

//While loop that multiplies the number by the value of pow

    while (i < pow)
    {
        result = result * number;
        i +=1;
    }

    printf("The value of %d raised to the power of %d is equal to %d.\n", number, pow, result);

    return 0;
}