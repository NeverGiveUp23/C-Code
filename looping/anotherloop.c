#include <stdio.h>


int main(void){

    int i, j;


    for(i = 0, j = 100; i < 10; ++i, j = j - 10){
        printf("%i , %i", i, j);
    }

    return 0;
}