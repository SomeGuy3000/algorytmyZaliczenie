#pragma once

#include <iostream>
#include <stdlib.h>
#include <time.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int bubbleSort(int tab[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (tab[j] > tab[j + 1])
                swap(&tab[j], &tab[j + 1]);
    return 0;
}
