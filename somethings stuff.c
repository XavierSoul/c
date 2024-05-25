#include <stdio.h>
#include <stdlib.h>

int grade[25];
int i = 0, num, result = 0;
int w = 0;

int main(){

    printf("Enter how many grades you want: ");
    scanf("%d", &num);

    while (w == 1){
        for (i <= num){
            printf()
        }



    }





    //computation for the result
    result = result / (i - 1);

    //print the final result
    printf("Your final grade is %f.\n", result);

    //If function to see if you passed or not. Set to pass at the score of 50
    if (result >=50)
        printf("Your result of %.2f.... has PASSED!\n", result);
    else
        printf("Your result of %.2f... has FAILED.\n", result);

   
    

    return 0;
}