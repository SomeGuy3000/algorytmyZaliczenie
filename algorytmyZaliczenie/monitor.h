#include <iostream>
#include "sortLib.h"
clock_t beginTime;

void sortTimeMonitor(int * random, int * sorted, int * reverseSorted, int tabSize) {
	beginTime = clock();
	bubbleSort(random, tabSize);
	cout << "" << float(clock() - beginTime) / CLOCKS_PER_SEC << endl;
	beginTime = clock();
	insertionSort(random, tabSize);
	cout << "" << float(clock() - beginTime) / CLOCKS_PER_SEC << endl;
	beginTime = clock();
	selectionSort(random, tabSize);
	cout << "" << float(clock() - beginTime) / CLOCKS_PER_SEC << endl;
	beginTime = clock();
	mergeSort(random, tabSize - 1);
	cout << "" << float(clock() - beginTime) / CLOCKS_PER_SEC << endl;
	beginTime = clock();
	quickSort(random, tabSize - 1);
	cout << "" << float(clock() - beginTime) / CLOCKS_PER_SEC << endl;
}