#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declaring variables
    float count = 0;
    float grade = 0, result=0;

    //Printing the instructions for the user
    printf("Enter the grade that you want to get the average of and enter -1 to stop.\n");
    scanf("%f", &grade);

    //While loop that keeps going unles the user inputs -1
    while (grade != -1)
    {
        //We want to get the grade then add it to the total amount then we get the count and ask for another input.
        result = result + grade;
        count = count + 1;
        printf("Enter the grade that you want to get the average of and enter -1 to stop.\n");
        scanf("%f", &grade);
    } 

    //Print statement that shows their average and how many grades they've inputted.
    printf("You've entered %.1f grades!\n", count);
    printf("Your average grade is %.2f.\n", result);



    return 0;
}