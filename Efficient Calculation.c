#include <stdio.h>
#include <math.h>

int main(){

    float base;

    printf("Enter base.\n");
    scanf("%f", &base);

    float result1 = pow(base, 2);
    float result2 = pow(base, 4);
    float result3 = pow(base, 6);
    float result4 = pow(base, 8);


    printf("1.) %.1f \n2.) %.1f \n3.) %.1f \n4.) %.1f", result1, result2, result3, result4);

    return 0;
}