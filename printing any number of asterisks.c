#include <stdio.h>
#include <stdlib.h>

int main(){
// declare the variables
    int number;
    int count = 0;
// get the number of asterisks from user
    printf("Input the number of asterisks you want printed.");
    scanf("%d", &number);

//While loop that uses the number it gets from the user as the count to print as many asterisks as the user wants
    while (count < number)
    {
        printf("*");
        count+=1;
    } 

    return 0;
}