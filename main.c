#include <stdio.h>

int main(){

    int myNumber = 0;
    char str[100];

    printf("Enter a number and your name: \n");
    scanf("%d %s", &myNumber , str);

    printf("You entered: %d and %s ", myNumber, str);

    printf("Is this correct? \n");


    return 0;
}


