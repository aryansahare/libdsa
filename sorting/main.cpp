// main.cpp

#include <iostream>
#include "sorting.h"

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    Sorting::printArray(arr, n);

    Sorting::selectionSort(arr, n);
    std::cout << "Sorted array (Selection Sort): ";
    Sorting::printArray(arr, n);

    int arr2[] = {64, 25, 12, 22, 11};
    Sorting::insertionSort(arr2, n);
    std::cout << "Sorted array (Insertion Sort): ";
    Sorting::printArray(arr2, n);

    // Add more sorting examples as needed

    return 0;
}
