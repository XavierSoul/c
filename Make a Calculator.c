#include <stdio.h>
#include <stdlib.h>

int main(){

// declare the variables
    float num1, num2, result;
    char operator;

// Get user to input the variables and store that data

    printf("Input your Operator('+','-','*','/')\n");
    scanf("%c", &operator);

    printf("Input Number 1.\n");
    scanf("%f", &num1);

    printf("Input Number 2.\n");
    scanf("%f", &num2);

//switch case statement to detect the operator and do the coresponding operation
    switch(operator){
        case '+':
        result = num1 + num2;
        printf("%f + %f = %f\n", num1,num2,result);
        break;

        case '-':
        result = num1 - num2;
        printf("%f - %f = %f\n", num1,num2,result);
        break;

        case '*':
        result = num1 * num2;
        printf("%f * %f = %f\n", num1,num2,result);
        break;

        case '/':
        result = num1 / num2;
        printf("%f / %f = %f\n", num1,num2,result);
        break;

        default:
        printf("You inputted an invalid operator.\n");
        break;
    }









return 0;
}