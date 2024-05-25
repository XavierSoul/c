#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;

    printf("Enter Number 1.\n");
    scanf("%d", &num1);
    printf("Enter Number 2.\n");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("Number 1 Is greater than Number 2.\n");
    }else if (num1 < num2){
        printf("Number 2 Is greater than Number 1.\n");
    }else{
        printf("Number 1 and Number 2 are equal.\n");
    }
    

    return 0;
}