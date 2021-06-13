#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

int linearSearch(int tab[], int tabSize, int x)
{
    int i;
    for (i = 0; i < tabSize; i++)
        if (tab[i] == x)
            return i;
    return -1;

  //implementacja

  /*  int result = linearSearch(tab, tabSize, wyszukiwany_element);
      if (result == -1)
          cout << "Element nie znajduje sie w tablicy" << endl;
      else
          cout << "Element znajduje sie w tablicy, pod indeksem: " << result << endl;*/

}

int binarySearch(int tab[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (tab[mid] == x)
            return mid;

        if (tab[mid] > x)
            return binarySearch(tab, l, mid - 1, x);

        return binarySearch(tab, mid + 1, r, x);
    }

    return -1;

    //implementacja 

    /*  int result = binarySearch(tab, 0, tabSize - 1, wyszukiwany_element);
        if (result == -1)
            cout << "Element nie znajduje sie w tablicy" << endl;
        else
            cout << "Element znajduje sie w tablicy, pod indeksem: " << result << endl;*/

}