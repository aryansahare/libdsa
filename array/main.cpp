// main.cpp

#include "array.h"
#include <iostream>
#include <vector>
#include <functional>

int main() {
    // Initialize ArrayUtils with some data
    std::vector<int> initialData = {1, 2, 3, 4, 5};
    ArrayUtils arrayUtils(initialData);

    // Print the initial data
    std::cout << "Initial Array: ";
    arrayUtils.print();

    // Access an element
    std::cout << "Element at index 2: " << arrayUtils.access(2) << std::endl;

    // Update an element
    arrayUtils.update(2, 10);
    std::cout << "Array after updating index 2: ";
    arrayUtils.print();

    // Insert an element
    arrayUtils.insert(3, 20);
    std::cout << "Array after inserting 20 at index 3: ";
    arrayUtils.print();

    // Remove an element
    arrayUtils.remove(1);
    std::cout << "Array after removing element at index 1: ";
    arrayUtils.print();

    // Find an element
    int index = arrayUtils.find(20);
    std::cout << "Index of element 20: " << index << std::endl;

    // Reverse the array
    arrayUtils.reverse();
    std::cout << "Array after reversing: ";
    arrayUtils.print();

    // Map operation: multiply each element by 2
    std::vector<int> mapped = arrayUtils.map([](int x) { return x * 2; });
    std::cout << "Array after mapping (multiply by 2): ";
    for (int num : mapped) std::cout << num << " ";
    std::cout << std::endl;

    // Filter operation: keep only even elements
    std::vector<int> filtered = arrayUtils.filter([](int x) { return x % 2 == 0; });
    std::cout << "Array after filtering (keep even numbers): ";
    for (int num : filtered) std::cout << num << " ";
    std::cout << std::endl;

    // Reduce operation: sum of all elements
    int sum = arrayUtils.reduce(0, [](int acc, int x) { return acc + x; });
    std::cout << "Sum of all elements: " << sum << std::endl;

    // Flatten a vector of vectors
    std::vector<std::vector<int>> vecOfVecs = {{1, 2}, {3, 4}, {5}};
    std::vector<int> flattened = ArrayUtils::flatten(vecOfVecs);
    std::cout << "Flattened vector: ";
    for (int num : flattened) std::cout << num << " ";
    std::cout << std::endl;

    // Slice operation
    std::vector<int> sliced = arrayUtils.slice(1, 4);
    std::cout << "Array slice from index 1 to 4: ";
    for (int num : sliced) std::cout << num << " ";
    std::cout << std::endl;

    // Push and pop operations
    arrayUtils.push(30);
    std::cout << "Array after pushing 30: ";
    arrayUtils.print();
    arrayUtils.pop();
    std::cout << "Array after popping last element: ";
    arrayUtils.print();

    // Shift and unshift operations
    arrayUtils.shift();
    std::cout << "Array after shifting (removing first element): ";
    arrayUtils.print();
    arrayUtils.unshift(40);
    std::cout << "Array after unshifting (adding 40 at the beginning): ";
    arrayUtils.print();

    // Join operation
    std::string joined = arrayUtils.join(", ");
    std::cout << "Array joined with ', ': " << joined << std::endl;

    // Copy operation
    std::vector<int> copied = arrayUtils.copy();
    std::cout << "Copied array: ";
    for (int num : copied) std::cout << num << " ";
    std::cout << std::endl;

    // Fill operation
    arrayUtils.fill(7);
    std::cout << "Array after filling with 7: ";
    arrayUtils.print();

    // Sort operation
    arrayUtils.sort();
    std::cout << "Array after sorting: ";
    arrayUtils.print();

    // Stable sort operation
    arrayUtils.stable_sort();
    std::cout << "Array after stable sorting: ";
    arrayUtils.print();

    return 0;
}
