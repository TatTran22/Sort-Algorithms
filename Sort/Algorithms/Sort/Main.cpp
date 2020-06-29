#include "Main.h"

using namespace std;
int main()
{
    int intArray[] = { 7, 6, -8, 0, 15, 26, -47 };
    int arrayLength = sizeof(intArray) / sizeof(*intArray);
    int len = *(&intArray + 1) - intArray;
    cout << arrayLength << "----" << size(intArray) << "----"<<len << "----" << &intArray << "----" << &intArray+1  << "----" <<*(&intArray+1) << endl;

    Sort s;

    s.BubbleSort(intArray, arrayLength);

    cout << endl << "Your sorted array: ";
    s.printArray(intArray, arrayLength);
}


