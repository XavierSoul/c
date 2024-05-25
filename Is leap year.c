#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaring variables
    int year;

    //asking for user inputs for the year
    printf("This is a magical Machine that tells you whether or not a given year is a leap year. \nInput the year you want found out.\n");
    scanf("%d", &year);

    //if loop to see if it's a leap year or not. 
    //conditions for leap year: divisible by 4 with no remainder and/or divisible by 100 with no remainder

    if(year % 4 == 0 || year % 100 == 0){
        printf("%d is a Leap year!\n", year);
    }else{
        printf("%d is not a leap year.\n", year);
    }





    return 0;
}