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

int binarySearch(int tab[], int r, int x, int l=0)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (tab[mid] == x)
            return mid;

        if (tab[mid] > x)
            return binarySearch(tab, mid - 1, x, l);

        return binarySearch(tab, r, x, mid + 1);
    }

    return -1;

    //implementacja 

    /*  int result = binarySearch(tab, tabSize - 1, wyszukiwany_element, 0);
        if (result == -1)
            cout << "Element nie znajduje sie w tablicy" << endl;
        else
            cout << "Element znajduje sie w tablicy, pod indeksem: " << result << endl;*/

}