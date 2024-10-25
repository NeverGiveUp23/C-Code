#include <stdio.h>
#include <stdbool.h>

int main(void){

    short n, triangleNumber;

    triangleNumber = 0;

//    for(n = 1; n <= 200; n = n + 1 ){
//        triangleNumber = triangleNumber + n;
//
//        printf("The 200th number is %i\n", triangleNumber);
//
//    }


    printf("Table of triangular numbers\n\n");
    printf(" n        Sum from 1 to n\n");
    printf("---       ----------------\n");

    for (n = 1; n <= 15; n++) {
        triangleNumber += n;
        printf(" %2i             %2i\n", n, triangleNumber);
    }

    // output
    /*
     *  n        Sum from 1 to n
        ---       ----------------
         1             1
         2             3
         3             6
         4             10
         5             15
         6             21
         7             28
         8             36
         9             45
         10             55
         11             66
         12             78
         13             91
         14             105
         15             120

         Table of negative triangular numbers

             n        Sum from 1 to n
            ---       ----------------
             -1             -1
             -2             -3
             -3             -6
             -4             -10
             -5             -15
             -6             -21
             -7             -28
             -8             -36
             -9             -45
             -10             -55
             -11             -66
             -12             -78
             -13             -91
             -14             -105
             -15             -120


     */




    return 0;
}
