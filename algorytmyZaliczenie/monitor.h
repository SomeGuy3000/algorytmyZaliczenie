#include <iostream>
#include "sortLib.h"
#include "searchLib.h"

clock_t beginTime;

void sortTimeMonitor(int n) {

	const int constSortProgress = 5000;
	int tabSize = constSortProgress * n;

	int* random = generateRandom(tabSize);
	int* sorted = generateSorted(tabSize);
	int* reverseSorted = generateReverseSorted(tabSize);
	int* temporary = new int[tabSize];

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb losowych:" << endl << endl;
		cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock(); 
		insertionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		selectionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		mergeSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		quickSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie bombelkowe dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		bubbleSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb posortowanych:" << endl << endl;

		cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		insertionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		selectionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		mergeSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		quickSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie bombelkowe dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		bubbleSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb posortowanych w kolejnosci odwrotnej:" << endl << endl;
		
	cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		insertionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		selectionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		mergeSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		quickSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Sortowanie bombelkowe dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		bubbleSort(temporary, tabSize);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
}
void searchTimeMonitor(int n) {

	const int constSearchProgress = 75000000;
	int tabSize = constSearchProgress * n;

	int* sorted = generateSorted(tabSize);
	int numberToFind = sorted[tabSize - 1];

	cout << endl;
	cout << "Czas wykonania wyszukiwania ostatniego elementu dla liczb posortowanych:" << endl << endl;

		cout << "Wyszukiwanie linear dla " << tabSize << " liczb trwa: ";
		beginTime = clock();
		linearSearch(sorted, tabSize, numberToFind);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Wyszukiwanie binary dla " << tabSize << " liczb trwa: ";
		beginTime = clock();
		binarySearch(sorted, tabSize, numberToFind);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Wyszukiwanie jump dla " << tabSize << " liczb trwa: ";
		beginTime = clock();
		jumpSearch(sorted, tabSize, numberToFind);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Wyszukiwanie interpolation dla " << tabSize << " liczb trwa: ";
		beginTime = clock();
		interpolationSearch(sorted, tabSize, numberToFind);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;
}