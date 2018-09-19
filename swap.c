#include <stdio.h>
#include <time.h>

int main() {
    int rayA[10];
    int *rA = rayA;
    srand(time(NULL));
    int i;
    for(i = 0; i < 10; i++) {
        if(i == 9) {
            rayA[i] = 0;
            printf("Value at %i index: %i\n", i, rayA[i]); 
            continue;
       }
        rayA[i] = rand();
        printf("Value at %i index: %i\n", i, rayA[i]);
    }

    int rayB[10];
    int *rB = rayB;

    for(i = 0; i < 10; i++){
        *(rB + i) = *(rA + (9-i)); //reverses the order
        printf("Value of pointer in second array: %d \n", *(rB + i));
    }
    
    return 0;
}

