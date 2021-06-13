#pragma once

#include <iostream>
#include <stdlib.h>

//swap

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//bubbleSort

int bubbleSort(int tab[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (tab[j] > tab[j + 1])
                swap(&tab[j], &tab[j + 1]);
    return 0;
}

//insertionSort

int insertionSort(int tab[], int n)
{
    int i, x, j;
    for (i = 1; i < n; i++)
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

void selectionSort(int tab[], int n)
{
    int i, j, min;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (tab[j] < tab[min])
                min = j;

        swap(&tab[min], &tab[i]);
    }
}

//quickSort

int partition(int tab[], int p, int r)
{
    int x = tab[p];
    int i = p, j = r, w;
    while (true)
    {
        while (tab[j] > x)
            j--;
        while (tab[i] < x)
            i++;
        if (i < j) // swap i < j
        {
            w = tab[i];
            tab[i] = tab[j];
            tab[j] = w;
            i++;
            j--;
        }
        else // while i >= j
            return j;
    }
}

void quicksort(int tab[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(tab, p, r);
        quicksort(tab, p, q);
        quicksort(tab, q + 1, r);
    }
}

//wywolanie = quicksort(tablica, 0, ilosc_liczb - 1);

//mergeSort

void merge(int tab[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

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

void mergeSort(int tab[], int l, int r) {
    if (l >= r) {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(tab, l, m);
    mergeSort(tab, m + 1, r);
    merge(tab, l, m, r);
}
