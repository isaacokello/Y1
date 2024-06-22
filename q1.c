#include <stdio.h>

/**
  * accepts user input and displays above
  * average if value is above 50
  */

int main(){

    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    if (a > 50){
        printf("above average\n");
    }

    return 0;
}
