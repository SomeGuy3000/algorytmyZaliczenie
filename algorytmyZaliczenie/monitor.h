#include <iostream>
#include "sortLib.h"
clock_t beginTime;

void sortTimeMonitor(int tabSize) {

	int* random = generateRandom(tabSize);
	int* sorted = generateSorted(tabSize);
	int* reverseSorted = generateReverseSorted(tabSize);

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb losowych:" << endl << endl;

		beginTime = clock();
		bubbleSort(random, tabSize);
		cout << "Sortowanie bombelkowe dla "<< tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		insertionSort(random, tabSize);
		cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		selectionSort(random, tabSize);
		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		mergeSort(random, tabSize - 1);
		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		quickSort(random, tabSize - 1);
		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb posortowanych:" << endl << endl;

		beginTime = clock();
		bubbleSort(sorted, tabSize);
		cout << "Sortowanie bombelkowe dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		insertionSort(sorted, tabSize);
		cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		selectionSort(sorted, tabSize);
		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		mergeSort(sorted, tabSize - 1);
		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		quickSort(sorted, tabSize - 1);
		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb posortowanych w kolejnoœci odwrotnej:" << endl << endl;

		beginTime = clock();
		bubbleSort(reverseSorted, tabSize);
		cout << "Sortowanie bombelkowe dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		insertionSort(reverseSorted, tabSize);
		cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		selectionSort(reverseSorted, tabSize);
		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		mergeSort(reverseSorted, tabSize - 1);
		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
		beginTime = clock();
		quickSort(reverseSorted, tabSize - 1);
		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: " << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
}