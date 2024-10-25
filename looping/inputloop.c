#include <stdio.h>


int main(void) {

    int n, triangleNumber, number, counter;

    // this is a nested for loop
    // the loop outside will run the loop inside n times
    // and will ask me n times to pick a number to triangulate.

    for (counter = 1; counter <= 2 ; ++counter) {

        printf("What Triangle number do you want to enter? ");
        scanf("%i", &number);

        triangleNumber = 0;

        for(n = 1; n <= number; n++){
            triangleNumber += n;
            printf("The triangle number %i is %i of %i\n", n, triangleNumber, number);
        }
    }

    for (counter = 1; counter <= 5; ++counter){
        printf("How many times can you say Hello? ");
        scanf("%i", &number);

        for (n = 1; n <= number; ++n){
            if(n == 3){
                printf("Okay we get it\n");
            }
            printf("Hello\n");
        }
    }




    return 0;
}