#include <stdio.h>
#include <stdlib.h>

int main() {
//declare variables
    int num1, num2;
//Ask for User input
    printf("Enter number 1\n");
    scanf("%d", &num1);

    printf("Enter number 2\n");
    scanf("%d", &num2);
//if statement to see if it's the same or not.
    if (num1 == num2){
        printf("True.\n");
    }else{
        printf("False.\n");
    }





    return 0;
}