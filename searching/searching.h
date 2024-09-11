// searching.h

#ifndef SEARCHING_H
#define SEARCHING_H

#include <vector>
#include <algorithm> // For std::sort

class SearchAlgorithms {
public:
    // Linear Search
    // Searches for a target value in an unsorted list
    // Returns the index of the target if found, otherwise returns -1
    static int linearSearch(const std::vector<int>& arr, const int& target);

    // Binary Search
    // Searches for a target value in a sorted list
    // Returns the index of the target if found, otherwise returns -1
    static int binarySearch(const std::vector<int>& arr, const int& target);

    // Interpolation Search
    // Searches for a target value in a sorted list using interpolation
    // Returns the index of the target if found, otherwise returns -1
    static int interpolationSearch(const std::vector<int>& arr, const int& target);
};

#endif // SEARCHING_H
