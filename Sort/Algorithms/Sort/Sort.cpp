#include "Sort.h"
#include <iterator>

void Sort::BubbleSort(int array[], int n) {
	for (int lastUnsortedIndex = n - 1; lastUnsortedIndex > 0; lastUnsortedIndex--)
		for (int i = 0; i < lastUnsortedIndex; i++) {
			if (array[i] > array[i + 1])
				swap(&array[i], &array[i + 1]);
		}
}

void Sort::swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void Sort::printArray(int array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}



