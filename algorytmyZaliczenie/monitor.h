#include <iostream>
#include "sortLib.h"
#include "searchLib.h"

clock_t beginTime;

void sortTimeMonitor(int tabSize) {

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
void searchTimeMonitor(int tabSize) {

	srand(time(NULL));

	int* random = generateRandom(tabSize);
	int* temporary = new int[tabSize];
	int numberToFind = rand() % tabSize;

	cout << endl;
	cout << "Czas wykonania wyszukiwania dla liczb losowych:" << endl << endl;

		cout << "Wyszukiwanie linear dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		cout << linearSearch(temporary, tabSize, random[numberToFind]);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;

		cout << "Wyszukiwanie binary dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		cout << binarySearch(temporary, tabSize, random[numberToFind]);
		cout << float(clock() - beginTime) / CLOCKS_PER_SEC << " sec." << endl;
}