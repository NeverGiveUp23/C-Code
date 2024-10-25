#include <stdio.h>



int main(void){

    // format specifiers are used when displaying variables as output
    int integerVar = 100;
    float floatingVar = 333.21f;
    double doubleVar = 9.4423e+11;
    char charVar = 'D';
    _Bool boolVar = 0;

    float floatVar = 3.993423f;


    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar); // can input the specifier as an int for bool due to it being an int under the hood

    printf("floating var and rounding: %.2f\n", floatVar);
    // output ---> floating var and rounding: 3.99
    printf("floating var and rounding: %.5f\n", floatVar);
    // output ---> floating var and rounding: 3.99342


    // outcome
/*
integerVar = 100
floatingVar = 333.209991
doubleVar = 9.442300e+11
charVar = D
boolVar = 0

 */



/*
 * perimeter is calculated by adding the height and width and then multiplying by 2
 * area is calculated by multiplying the width * height
 */
   double width;
   double height;
   double perimeter;
   double area;

   width = 3.4;
   height = 5.2;
   perimeter = height + width * 2;
   area = width * height;

    printf(" The perimeter of the rectangle: %.2f\n", perimeter);
    printf(" The area of the rectangle is: %.2f\n", area);



    return 0;
}