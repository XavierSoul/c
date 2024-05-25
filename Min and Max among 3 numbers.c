#include <stdio.h>
#include <stdlib.h>

int main(){
//declaring Variables
    int num1, num2, num3;


//Asking the User to input the Values that they want sorted
    printf("Enter Number 1.\n");
    scanf("%d", &num1);
    printf("Enter Number 2.\n");
    scanf("%d", &num2);
    printf("Enter Number 3.\n");
    scanf("%d", &num3);

//Finding the Maximum
    if(num1>num2 && num1>num3){
        printf("Number 1 is the Maximum.\n");
    }else if (num2>num3 && num2>num1){
        printf("Number 2 is the Maximum.\n");
    }else{
        printf("Number 3 is the Maximum.\n");
    }
//Finding the Minimum
    if(num1<num2 && num1<num3){
        printf("Number 1 is the Minimum.\n");
    }else if (num2<num3 && num2<num1){
        printf("Number 2 is the Minimum.\n");
    }else{
        printf("Number 3 is the Minimum.\n");
    }





    return 0;
}