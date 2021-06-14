#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

int binarySearch(int tab[], int n, int e)
{
    int f, l, m;
    f = 0;
    l = n - 1;

    while (f <= l)
    {
        m = (f + l) / 2;
        if (e == tab[m])
            return m;
        else
            if (e > tab[m])
                f = m + 1;
            else
                l = m - 1;
    }
    return -1;
}

int linearSearch(int tab[], int tabSize, int x)
{
    for (int i = 0; i < tabSize; i++)
        if (tab[i] == x)
            return i;
    return -1;
}

int jumpSearch(int tab[], int n, int x)
{
    int step = sqrt(n);
    int prev = 0;
    while (tab[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (tab[prev] < x)
    {
        prev++;

        if (prev == min(step, n))
            return -1;
    }
    if (tab[prev] == x)
        return prev;

    return -1;
}

int interpolationSearch(int tab[], int n, int x)
{
    int lo = 0, hi = (n - 1);

    while (lo <= hi && x >= tab[lo] && x <= tab[hi])
    {
        if (lo == hi)
        {
            if (tab[lo] == x) return lo;
            return -1;
        }
        int pos = lo + (((double)(hi - lo) /
            (tab[hi] - tab[lo])) * (x - tab[lo]));
        if (tab[pos] == x)
            return pos;
        if (tab[pos] < x)
            lo = pos + 1;
        else
            hi = pos - 1;
    }
    return -1;
}