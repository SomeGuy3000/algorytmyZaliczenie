#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//const int dim = 10; //liczba wierzcholkow grafu

int** generateGraphUnweighted(int dim)
{
	srand(time(NULL));

	int** tab = new int* [dim];

	for (int i = 0; i < dim; i++)
	{
		tab[i] = new int[dim];
	}

	for (int i = 0; i < dim; i++)
	{
		for (int j = i; j < dim; j++)
		{
			if (i == j)
				tab[i][j] = 0;
			else
				tab[i][j] = rand() % 2 + 0;
			tab[j][i] = tab[i][j];
		}
	}


	for (int i = 0; i < dim; i++)
	{
		for (int j = 0; j < dim; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;

	//for (int i = 0; i < dim; i++)
	//	delete[] tab[i];

	//delete[] tab; //usuwanie

}

int** generateGraphWeighted(int dim)
{
	srand(time(NULL));

	int** tab = new int* [dim];

	for (int i = 0; i < dim; i++)
	{
		tab[i] = new int[dim];
	}

	for (int i = 0; i < dim; i++)
	{
		int maxZerosFromDiagonal = dim -2 -i;
		int zerosCount = 0;

		for (int j = i; j < dim; j++)
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

	for (int i = 0; i < dim; i++)
	{
		for (int j = 0; j < dim; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << "\n";
	}

	return tab;
}