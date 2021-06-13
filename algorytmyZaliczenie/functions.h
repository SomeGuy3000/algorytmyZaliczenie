#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 100;

int ** generateRandom(int randRange, int tabSize) {
	srand(time(NULL));
	int ** randiom = new int * [tabSize];
	for (int i = 0; i < tabSize; i++) {
		randiom[i] = new int (rand() % randRange);
		cout << randiom[i] << " ";
	}
	return randiom;
}

int generateSorted() {

	int randiom[30];
	for (int i = 0; i < 30; i++)
	{
		randiom[i] = i;
		cout << randiom[i] << " ";
	}
	return 0;
}

int generateReverseSorted() {

	int randiom[30];
	for (int i = 0; i < 30; i++)
	{
		randiom[i] = n-i;
		cout << randiom[i] << " ";
	}
	return 0;
}
