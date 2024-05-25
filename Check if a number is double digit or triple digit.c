#include <stdio.h>
#include <stdlib.h>
int main(){

    int number;

// ask for user input

    printf("Input your number.\n");
    scanf("%d", &number);

//if statement to check if number is double or triple digit

    if(number > 99){
        printf("Number is a triple digit number.\n");
    }else if(number > 9 && number <= 99){
        printf("Number is a double digit number.\n");
    }else{
        printf("Number is neither a double or a triple digit number.\n");
    }





    return 0;
}