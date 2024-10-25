#include <stdio.h>

int main(void){

    //integer and floating point conversions

    float float1 = 123.124f, float2;
    int int1, int2 = -150;
    char c = 'a';


    int1 = float1; // floating to integer
    printf("%f assigned to an int produces %i\n", float1, int1);

    float1 = int2; // integer to floating conversion.
    printf("%i assigned to a float produces %f\n", int2, float1);

    float1 = int2 / 100; // integer divided by integer
    printf("%i divided by 100 produces %.2f\n", int2, float1);



    // type cast

    float2 = (float) int1 / 100; // type casting integer value to float


    // another way to use the type casting is
    int total = (int) 29.55 + (int) 65.99;
    printf("%i\n", total);
    // this is converted to 29 + 65 in C

    // +=

    int count = 10;
    count += 20; // total = 30
    printf("%i\n", count);


    int a, b;
    a = 40;
    b = 2;


    count /= (int)(a + b);
    printf("%i\n", count);

    float C = (27 - 32) / 1.8f;

    printf("%.2f\n", C);

    int math, a1, a2;
    a1 = 3 * 2.55;
    a2 = 5* 2.55;

    math = (a1 * 2) - (a2 * 2) + 6;

    printf("%i\n", math);

    return 0;
}