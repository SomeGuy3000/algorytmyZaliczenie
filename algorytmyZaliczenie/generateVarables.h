#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 100;

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

