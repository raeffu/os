//
// Created by Raphael Laubscher on 19/04/16.
//

#include <stdio.h>
#define max 5000

int main()
{
    int i, j;
    int a[max][max];
    for(i = 0; i < max; i++)
    {
        for(j = 0; j < max; j++)
            a[i][j] = j;
    }
    printf("\nLast element: %d\n\n", a[i-1][j-1]);
    return 0;
}