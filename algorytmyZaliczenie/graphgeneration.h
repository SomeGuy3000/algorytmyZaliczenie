#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int** generateGraphUnweighted()
{
	srand(time(NULL));
	const int dim = 10; //liczba wierzcholkow grafu

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

int** generateGraphWeighted()
{
	srand(time(NULL));
	const int dim = 10; //liczba wierzcholkow grafu

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
			{
				tab[i][j] = rand() % 2 + 0;
				if (tab[i][j] == 1)
				{
					tab[i][j] = rand() % 10;
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

	return 0;
}