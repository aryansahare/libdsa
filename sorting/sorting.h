// sorting.h

#ifndef SORTING_H
#define SORTING_H

#include <vector>

class Sorting {
public:
    // Sorting Algorithms for int arrays
    static void selectionSort(int arr[], int n);
    static void insertionSort(int arr[], int n);
    static void bubbleSort(int arr[], int n);
    static void mergeSort(int arr[], int left, int right);
    static void quickSort(int arr[], int low, int high);
    static void heapSort(int arr[], int n);
    static void countingSort(int arr[], int n);
    static void bucketSort(int arr[], int n);
    static void shellSort(int arr[], int n);
    static void fibonacciSort(int arr[], int n);

    // Utility Function
    static void printArray(const int arr[], int size);

private:
    // Helper Functions for int arrays
    static void merge(int arr[], int left, int mid, int right);
    static void heapify(int arr[], int n, int i);
    static int partition(int arr[], int low, int high);
};

#endif // SORTING_H
