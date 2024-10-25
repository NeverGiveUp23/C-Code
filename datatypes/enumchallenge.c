#include <stdbool.h>
#include <stdio.h>



int main(void){

    // enums are act ual ints under the hood.
    enum Company {
        Google,
        Meta = 8, // changing the memory location
        Tesla,
        Walmart
    };

    enum Company google, meta, tesla;
    google = Google;
    meta = Meta;
    tesla = Tesla;

    printf(" The value of Google is: %d\n The value of Meta is: %d\n The value of Tesla is: %d\n", google, meta, tesla);

    // outcome
   // 0
   // 8
   // 9

    return 0;
}