#include <stdio.h>


int main(void) {

    int n, triangleNumber, number, counter, n2;

    // this is a nested for loop
    // the loop outside will run the loop inside n times
    // and will ask me n times to pick a number to triangulate.
    // this can help if the user has n amount of numbers to calculate and triangulate

    printf("How many numbers do you need to Triangulate? ");
    scanf("%i", &n2);

    for (counter = 1; counter <= n2 ; ++counter) {
        if (n2 == 1){ // checking if the input from user is equal 1 to get a unique printf
            printf("What Triangle number do you want to enter? ");
        } else if(counter < n2){ // if the count is less than the user input number
            printf("Enter the other Triangle number you want to enter? ");
        }else if(counter == n2){ // if count equals the user input number.
            printf("Enter the last Triangle number you want to enter? ");
        }
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