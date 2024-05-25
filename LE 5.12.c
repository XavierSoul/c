/*
file: LE 5.12 Passcode Lock.
author: Alec Xavier B. Que Esteves
description:Program that will ask the correct numeric passcode before the user can continue his task.
            The user is given only three trials to enter the correct passcode.
            When the user hit the correct passcode the program will display “ACCESS GRANTED”, otherwise it will display “ACCESS DENIED” after three attempts.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration of variables
    int i, c;
    int password, counter = 0;


    for(i = 0; i < 3; i++)
    {
        printf("Enter the password: "); //Ask for password
        scanf("%d", &password);

        while ((c = getchar()) != '\n' && c != EOF); // Read and discard the user input until we get a newline or end of file

        //Function just to check if it's a number or not
        while (password != (int)password)
        {
            printf("Invalid input! Please enter a valid number: ");
            scanf("%f", &password);
            while ((c = getchar()) != '\n' && c != EOF); // Read and discard the user input until we get a newline or end of file
        }

        if (password == 1234)
        {
            printf("ACCESS GRANTED.\n");
            return 0;
        }
        else
        {
            counter = counter + 1;
            printf("Incorrect password.\n");
            printf("Attempt (%d/3).\n", counter);
        }
    }

    printf("ACCESS DENIED.\n");



    return 0;
}