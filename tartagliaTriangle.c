#include <stdio.h>
#include <math.h>

// Program that shows n rows of the tartaglia triangle

void tartagliaTriangle(int n)
{
    int triangle[n][(int) pow(2, n)], i, j;

    for (i = 0; i < n ; ++i)
        for (j = 0; j < i + 1; ++j){

            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];

        }

    for (i = 0; i < n; ++i){
        for (j = 0; j < i + 1; ++j)
            printf("%i ",, triangle[i][j]);
        printf("\n");
    }
}

int main(void)
{   
    
    tartagliaTriangle(10);

    return 0;
}