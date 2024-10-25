#include <stdio.h>
#include <stdbool.h>

int main(void){

    //enum allows you to define a var and specify the valid values that could be stored in that variable.
   // won't be able to assign values to this enum
    enum myColor {
        red, // 0
        blue, // 1
        green // 2
    };



    enum myColor redColor, greenColor;
    redColor = red; // can only contain the values in the enum type
    greenColor = green;

    bool isRed = (isRed == greenColor);

    printf("%i\n", isRed);

    enum month {
        September,
        October,
        November,
        December,
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August
    };

    enum month thisMonth;
    thisMonth = February;

    // enums as ints

    enum direction {
        right,
        left = 9,
        up
    };

    enum direction direction = left;

    // Char only stores a single character 'd', the digit '9' or single digit as well. Not string.
    char cooking;
    cooking = 'B';


    char question[2] = "\?";

    return 0;
}