// main.cpp

#include <iostream>
#include <vector>
#include "searching.h"

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target = 5;

    // Linear Search
    int index = SearchAlgorithms::linearSearch(data, target);
    std::cout << "Linear Search: Index of " << target << " is " << index << std::endl;

    // Binary Search
    index = SearchAlgorithms::binarySearch(data, target);
    std::cout << "Binary Search: Index of " << target << " is " << index << std::endl;

    // Interpolation Search
    index = SearchAlgorithms::interpolationSearch(data, target);
    std::cout << "Interpolation Search: Index of " << target << " is " << index << std::endl;

    return 0;
}
