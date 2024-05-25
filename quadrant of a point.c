#include <stdio.h>
#include <stdlib.h>


int main(){

    //Declare our variables for the pointer

    int num1, num2;

    //Ask for input from user

    printf("Input the X coordinate.\n");
    scanf("%d", &num1);
    printf("Input the Y coordinate.\n");
    scanf("%d", &num2);

    //If statement to see where it should landing at (+,+) (-,+) (-,-) (+,-)

    if(num1 > 0 && num2 > 0){
        printf("Coordinates (%d,%d) is in Quadrant 1.\n", num1, num2);
    }else if(num1 < 0 && num2 > 0){
        printf("Coordinates (%d,%d) is in Quadrant 2.\n", num1, num2);
    }else if(num1 < 0 && num2 < 0){
        printf("Coordinates (%d,%d) is in Quadrant 3.\n", num1, num2);
    }else{
        printf("Coordinates (%d,%d) is in Quadrant 4.\n", num1, num2);
    }





    return 0;
}