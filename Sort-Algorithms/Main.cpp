#include "Main.h"

using namespace std;
int main()
{
    int intArray[] = {1, 6, -8, 0, 15, 26, -47};
    int arrayLength = sizeof(intArray) / sizeof(*intArray);

    Sort s;
    s.BubbleSort(intArray, arrayLength);
    s.printArray(intArray, arrayLength);
}
