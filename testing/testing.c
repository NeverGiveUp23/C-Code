//
// Created by Felix Vargas Jr on 10/23/24.
#include <stdio.h>

int main(void) {

    int sum;

    sum = 25 + 50;

    printf("%i\n", sum);

  // declares variables
    int value1, value2, sum2;

  // assign values to the variables and calculate the sum
    value1 = 33;
    value2 = 22;
    sum2 = value1 * value2;
// display the result
    printf("Together it is %i\n", sum2);


    float val3;
    val3 = 12.5f;

    char name;
    name = 'f';

    // store long numbers - you can use the L at the end to inform the compiler of the long.
    long int number = 23344234000L;

    printf("%lo\n", number);


    // long long -> extended accuracy, which is guaranteed to be 64 bits long.

    long long int  maxAllowedPoints;

    //maxAllowedPoints = ;



    return 0;

}