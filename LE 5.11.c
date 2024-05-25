/*
file: LE 5.11 Average of Even Numbers and Product of Odd Numbers.
author: Alec Xavier B. Que Esteves
description: Program that will ask 10 integers and display the average of all even numbers and the product of all odd numbers entered by the user
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    //declare variables
    int i;
    float number, even, odd = 1;
    int counterOdd = 0, counterEven = 0;
    int c; // Variable to store each character read

    printf("You will be asked to enter 10 numbers.\n"); //Introduction
    printf("We will get the average of all even numbers and the product of all the odd ones.\n");

    //For loop that has an upper limit of 10. If they input an invalid character then it keeps until you do.
    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i); //Ask for user input
        scanf("%f", &number);
        while ((c = getchar()) != '\n' && c != EOF); // Read and discard the user input until we get a newline or end of file

        //Function just to check if it's a number or not
        while (number != (int)number)
        {
            printf("Invalid input! Please enter a valid number: ");
            scanf("%f", &number);
            while ((c = getchar()) != '\n' && c != EOF); // Read and discard the user input until we get a newline or end of file
        }

        //Check if it's an even number, if it is then add them together to get the average for even or the product for odd.
        if ((int)number % 2 == 0)
        {
            even = even + number;
            counterEven = counterEven + 1;
        }
        else
        {
            odd = odd * number;
            counterOdd = counterOdd + 1;
        }
    }

    //Final computation section of the code
    float resultsEven;
    resultsEven = even / counterEven;


    if(counterOdd < 1)
    {//This is for the edgecase wherein the user does not input a single odd number
        odd = 0;
    }

    if(counterEven < 1)
    {//This is for the edgecase wherein the user does not input a single even number
        resultsEven = 0;
    }

    printf("You inputted %d EVEN numbers. Their Average is %.2f\n", counterEven, resultsEven);
    printf("You inputted %d ODD numbers. Their Product is %.1f\n", counterOdd, odd);


    return 0;
}