#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2;

    printf("Insert Number 1.\n");
    scanf("%f", &num1);
    printf("Insert Number 2.\n");
    scanf("%f", &num2);

    if (num1 > num2){
        printf("The Max is %.1f. \nThe Min is %.1f.\n", num1, num2);
    } else {
        printf("The Max is %.1f. \nThe Min is %.1f.\n", num2, num1);
    }







    return 0;
}