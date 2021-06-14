#include <iostream>
#include <stdlib.h>

//swap

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//bubbleSort

int bubbleSort(int tab[], int tabSize)
{
    int i, j;
    for (i = 0; i < tabSize - 1; i++)
        for (j = 0; j < tabSize - i - 1; j++)
            if (tab[j] > tab[j + 1])
                swap(&tab[j], &tab[j + 1]);
    return 0;
}

//insertionSort

int insertionSort(int tab[], int tabSize)
{
    int i, x, j;
    for (i = 1; i < tabSize; i++)
    {
        x = tab[i];
        j = i - 1;

        while (j >= 0 && tab[j] > x)
        {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = x;
    }
    return 0;
}

//selectionSort

int selectionSort(int tab[], int tabSize)
{
    int i, j, min;

    for (i = 0; i < tabSize - 1; i++)
    {
        min = i;
        for (j = i + 1; j < tabSize; j++)
            if (tab[j] < tab[min])
                min = j;

        swap(&tab[min], &tab[i]);
    }
    return 0;
}

//quickSort

void quickSort(int tab[], int right, int left = 0)
{
    if (right <= left) return;

    int i = left - 1, j = right + 1,
        u = tab[(left + right) / 2];
    while (1)
    {
        while (u > tab[++i]);
        while (u < tab[--j]);
        if (i <= j)
            swap(tab[i], tab[j]);
        else
            break;
    }
    if (j > left)
        quickSort(tab, j, left);
    if (i < right)
        quickSort(tab, right, i);
}

//mergeSort

void  merge(int tab[], int l, int r, int m)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = tab[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = tab[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            tab[k] = L[i];
            i++;
        }
        else {
            tab[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        tab[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        tab[k] = R[j];
        j++;
        k++;
    }
}

int mergeSort(int tab[], int r, int l=0)
{
    if (l >= r) 
    {
        return 0;
    }
    int m = l + (r - l) / 2;
    mergeSort(tab, m, l);
    mergeSort(tab, r, m + 1);
    merge(tab, l, r, m);
    return 0;
}

//bubbleSort(tab[],tabSize)
//insertionSort(tab[],tabSize)
//selectionSort(tab[],tabSize)
//quickSort(tab[],tabSize-1)
//mergeSort(tab[],tabSize-1)