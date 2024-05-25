#include <stdio.h>
#include <stdlib.h>

int main(){

    //declare variables
    int price, TotalPrice = 0;

    do {
        printf("Please enter a price:\n");
        scanf("%d", &price);
        TotalPrice = TotalPrice + price;
    }while (price != 0);

    printf("Total order price is %d.\n", TotalPrice);


    return 0;
}