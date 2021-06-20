#include <iostream>
#include "generateVariables.h"
#include "graphGeneration.h"

#include "sortLib.h"
#include "searchLib.h"
#include "graphLib.h"

#define V 9

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
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		selectionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		mergeSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		quickSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie babelkowe dla " << tabSize << " liczb trwa: ";
		copy(random, random + tabSize, temporary);
		beginTime = clock();
		bubbleSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb posortowanych:" << endl << endl;

		cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		insertionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		selectionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		mergeSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		quickSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie babelkowe dla " << tabSize << " liczb trwa: ";
		copy(sorted, sorted + tabSize, temporary);
		beginTime = clock();
		bubbleSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

	cout << endl;
	cout << "Czas wykonania sortowania dla liczb posortowanych w kolejnosci odwrotnej:" << endl << endl;
		
	cout << "Sortowanie insertion dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		insertionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie selection dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		selectionSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie merge dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		mergeSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie quick dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		quickSort(temporary, tabSize - 1);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << "Sortowanie babelkowe dla " << tabSize << " liczb trwa: ";
		copy(reverseSorted, reverseSorted + tabSize, temporary);
		beginTime = clock();
		bubbleSort(temporary, tabSize);
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

	cout << endl;
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

		cout << endl;
}

void graphMonitor(int n) {
	const int constGraphProgress = 500;
	const int constDfsProgress = 95;
	int graphSize = constGraphProgress * n;
	int graphDfsSize = constDfsProgress * n;
	int** graph = generateGraph(graphSize);
	int** graphDfs = generateGraph(graphDfsSize);


	cout << endl;
	cout << "Czas wykonania algorytmow grafowych:" << endl << endl;

	cout << "Algortm Dijkstry dla grafu wielkosci " << graphSize << " trwa: ";
	beginTime = clock();
	dijkstra(graph, graphSize);
	cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

	cout << "Algortm BFS dla grafu wielkosci " << graphSize << " trwa: ";
	beginTime = clock();
	bfs(graph, graphSize);
	cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

	cout << "Algortm DFS dla grafu wielkosci " << graphDfsSize << " trwa: ";
	beginTime = clock();
	dfs(graphDfs, graphDfsSize);
	cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

	cout << endl;
}

	void graphConstansMonitor() {
		int graph[V][V] = { { 0,  4, 0,  0,  0,  0, 0,  8, 0 },
							{ 4,  0, 8,  0,  0,  0, 0, 11, 0 },
							{ 0,  8, 0,  7,  0,  4, 0,  0, 2 },
							{ 0,  0, 7,  0,  9, 14, 0,  0, 0 },
							{ 0,  0, 0,  9,  0, 10, 0,  0, 0 },
							{ 0,  0, 4, 14, 10,  0, 2,  0, 0 },
							{ 0,  0, 0,  0,  0,  2, 0,  1, 6 },
							{ 8, 11, 0,  0,  0,  0, 1,  0, 7 },
							{ 0,  0, 2,  0,  0,  0, 6,  7, 0 } };

		cout << endl;

		cout << "Algortm Dijkstry: ";
		beginTime = clock();
		constansDijkstra(graph);
		cout << "Czas trwania: ";
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;
		cout << endl;

		cout << "Algortm BFS odwiedza kolejno wierzcholki: ";
		beginTime = clock();
		constansBfs(graph);
		cout << "Czas trwania: ";
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;
		cout << endl;

		cout << "Algortm DFS wartosci kolejnych odwiedzanych wierzcholkow: ";
		beginTime = clock();
		constansDfs(graph);
		cout << endl << endl;
		cout << "Czas trwania: ";
		cout << float(clock() - beginTime) / (CLOCKS_PER_SEC / 1000) << " milisec." << endl;

		cout << endl;
}