#include <stdio.h>
#include <stdbool.h>

int main(void){

    // int, float, double, char, _Bool
    int number = 33;

    float decimal = 33.3f; // add an 'f' behind it to explicitly say it is a float.

    double dub = 22.3;

    _Bool random = 0; // true or false / binary choices.
    // using the stdbool header file with the macro to include the datatype
    bool myBoolean = true;
    bool falseBoolean = false;


    // we can use short to use less memory allocation for small numbers to save space.
    // long will use more storage than an int. Mainly for larger numbers. There are long long, long int as well, you can assign the value with the "L at the end"
    long long longNumber = 23442424244242L;

    // type specifiers can also be applied to doubles
    long double my_number;

    // a long double constant is written as a floating constant with the letter "I" or "L" immediately following.
    my_number = 1.233e+9L;


    // just messing around and making an if statement.
    if (myBoolean == true){
        short num = 0;
        short num2 = 0;

        printf("enter a number: \n");
        scanf("%hi", &num);

        printf("enter another number: \n");
        scanf("%hi", &num2);

        short sum = num + num2;

        printf("The total was: %hi\n", sum);
    };






    return 0;
}