#include <stdio.h>
#include <math.h>

//This program counts the number of algarisms (repeatedily) between 1 and x

int numberOfAlgarisms(int x){

    int alpha = 0, aux, i, j, power = 1, nines = 0;

    aux = x;

    while (aux != 0){

        aux /= 10;
        alpha++;

    }

    if (alpha > 1){

        for (i = 0; i < alpha - 1; ++i){

            nines += 9 * (int) pow(10, i);

            for (j = 0; j < i; ++j)
                nines += 9  * (int) pow(10,j);
        }

        return (alpha * x - nines);

    }

    return x;

}


int main(void){
    int input;

    printf("\nInsert a number (x) for the interval: [1, x]: ");
    scanf("%i", &input);


    printf("The number of algarisms in the interval [1, %i] is %i\n\n",input, numberOfAlgarisms(input));

    return 0;
}