#include <stdio.h>
#include <stdlib.h>

int main(){

    //declare variables
    int num;

    //Get user input

    printf("Input your number: (Whether positive or negative)\n");
    scanf("%d", &num);

    //if statement to see whether it's negative or not.

    if(num < 0){
        printf("The absolute value of %d is |%d|", num, num*(-1));
    }else{
        printf("The absolute value of %d is |%d|", num, num);
    }





    return 0;
}