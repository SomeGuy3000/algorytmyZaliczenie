#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

int** generateGraphUnweighted()
{
	srand(time(NULL));
	int dim = 3; //nasze tabsize 

	int** tab = new int* [dim];

	for (int i = 0; i < dim; i++)
	{
		tab[i] = new int[dim];
	}

	for (int i = 0; i < dim; i++)
	{
		for (int j = 0; j < dim; j++)
		{
			tab[i][j] = 0;
		}
	}

	return tab;

	//for (int i = 0; i < dim; i++)
	//	delete[] tab[i];

	//delete[] tab; //usuwanie

}
