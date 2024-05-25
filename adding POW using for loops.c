#include <stdio.h>
#include <stdlib.h>


int main(){
    //declaring variables
    int number, pow, i = 1;
    int result = 1;

    //Asking for user input
    printf("Input the number.\n");
    scanf("%d", &number);
    printf("Input the pow.\n");
    scanf("%d", &pow);

    //for loop
    for(i = 1; i <= pow; i++){
        result = result * number;
    }

    printf("The result of %d raised to the power of %d is %d.\n", number, pow, result);


    return 0;
}