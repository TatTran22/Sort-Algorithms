// Sort Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>


void swap(int* x, int* y) {
	if (*x == *y)
		return;
	int temp = *x;
	*x = *y;
	*y = temp;
}

void printArray(int intArray[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << intArray[i] << "\t";
	}

	std::cout << std::endl;
}

void BubbleSort(int intArray[], int n) {
	for (int firstUnsortedIndex = 0; firstUnsortedIndex < n - 1; firstUnsortedIndex++)
		for (int i = firstUnsortedIndex + 1; i < n; i++) {
			if (intArray[firstUnsortedIndex] > intArray[i])
				swap(&intArray[firstUnsortedIndex], &intArray[i]);
		}
}

void SelectionSort(int intArray[], int n) {

	for (int lastUnsortedIndex = n - 1; lastUnsortedIndex > 0; lastUnsortedIndex--) {
		int largest = 0;

		for (int i = 1; i <= lastUnsortedIndex; i++)
			if (intArray[i] > intArray[largest])
				largest = i;

		swap(&intArray[largest], &intArray[lastUnsortedIndex]);

	}
}

void InsertionSort(int intArray[], int n) {

	for (int firstUnsortedIndex = 1; firstUnsortedIndex < n; firstUnsortedIndex++) {

		int newElement = intArray[firstUnsortedIndex];
		int i;
		for (i = firstUnsortedIndex; i > 0 && intArray[i - 1] > newElement; i--) {
			intArray[i] = intArray[i - 1];
		}

		intArray[i] = newElement;
	}
}

void ShellSort(int intArray[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			int newElement = intArray[i];

			int j = i;

			while (j >= gap && intArray[j - gap] > newElement)
			{
				intArray[j] = intArray[j - gap];
				j -= gap;
			}

			intArray[j] = newElement;
		}
	}
}

void merge() {
	copy()
}

void MergeSort(int intArray[], int n) {
	if()
}


int main()
{
	int intArray[] = { 9, -7, 45, 10, -15, 23, -56 };
	int n = std::end(intArray) - std::begin(intArray);
	std::cout << "Array length: " << n << std::endl;

	ShellSort(intArray, n);

	std::cout << "Sorted array:\t";
	printArray(intArray, n);



}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
