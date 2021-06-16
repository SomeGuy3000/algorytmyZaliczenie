#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int * generateRandom(int tabSize) {
	srand(time(NULL));
	int * randiom = new int[tabSize];
	for (int i = 0; i < tabSize; i++) {
		randiom[i] = rand() % tabSize;
	}
	return randiom;
}

int * generateSorted(int tabSize) {
	int* sorted = new int[tabSize];
	for (int i = 0; i < tabSize; i++) {
		sorted[i] = i;
	}
	return sorted;
}

int * generateReverseSorted(int tabSize) {
	int* reverseSorted = new int[tabSize];
	for (int i = 0; i < tabSize; i++) {
		reverseSorted[i] = tabSize - i;
	}
	return reverseSorted;
}

int** generateGraph(int tabSize)
{
	srand(time(NULL));
	int** tab = new int* [tabSize];

	for (int i = 0; i < tabSize; i++)
	{
		tab[i] = new int[tabSize];
	}

	for (int i = 0; i < tabSize; i++)
	{
		int maxZerosFromDiagonal = tabSize - 2 - i;
		int zerosCount = 0;

		for (int j = i; j < tabSize; j++)
		{
			if (i == j)
				tab[i][j] = 0;
			else
			{
				tab[i][j] = rand() % 2 + 0;
				if (zerosCount == maxZerosFromDiagonal)
				{
					tab[i][j] = rand() % 10;
				}
				else if (tab[i][j] == 1)
				{
					tab[i][j] = rand() % 10;
				}
				else
				{
					zerosCount += 1;
				}
				tab[j][i] = tab[i][j];
			}
		}
	}
	return tab;
}