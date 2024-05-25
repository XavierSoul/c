#include <stdio.h>
#include <stdlib.h>


int main(){

    //Declare the variables

    int day, month, year;

    //Ask for user input

    printf("Input the day.\n");
    scanf("%d", &day);
    printf("Input the Month.\n");
    scanf("%d", &month);
    printf("Input the Year.\n");
    scanf("%d", &year);

    //If statement trying to exclude all the months with 30 days and the user inputs the last day.

    if((month == 4 && day == 30)||(month == 6 && day == 30)||(month == 9 && day == 30)||(month == 11 && day == 30)){
        day = day - 29;
        month = month + 1;
        printf("The date tomorrow is %d / %d / %d", day, month, year);

        //The following section is for February

    }else if(month == 2 && day == 29 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){
        day = day - 28;
        month = month + 1;
        printf("The date tomorrow is %d / %d / %d", day, month, year);
    }else if(month == 2 && day == 28){
        day = day - 27;
        month = month + 1;
        printf("The date tomorrow is %d / %d / %d", day, month, year);

        //The following section is for months with 31 days

    }else if((month == 1 && day == 31) || (month == 3 && day == 31) || (month == 4 && day == 31) || (month == 5 && day == 31)
    || (month == 7 && day == 31) || (month == 8 && day == 31) || (month == 10 && day == 31)){
        day = day - 30;
        month = month + 1;
        printf("The date tomorrow is %d / %d / %d", day, month, year);

    // for december

    }else if(month == 12 && day == 31){
        day = day - 30;
        month = month - 11;
        year = year + 1;
        printf("The date tomorrow is %d / %d / %d", day, month, year);
    }else if(day < 31 && month < 12 ){
        day = day + 1;
        printf("The date tomorrow is %d / %d / %d", day, month, year);
    }else{
        printf("Invalid Input.\n");
    }





    return 0;
}