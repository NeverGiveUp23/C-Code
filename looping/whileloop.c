#include <stdio.h>


int main(void){

    int count = 1;

    while (count <= 3){
        printf("%i\n", count);
        ++count;
    }


    int u, v, temp;

    printf("Please input in two non-negative numbers. \n");
    scanf("%i %i", &u, &v);

    while( v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their GCD is %i\n", u);

    return 0;
}