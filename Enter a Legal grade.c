#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaring Variables

    float grade = 0;

    do{
        printf("Insert a VALID grade.\n");
        scanf("%f", &grade);

    }while (grade < 0 || grade > 100);

    printf("THANKS! You've inserted %f, which is a VALID grade.\n", grade);





    return 0;
}