// array.h

#ifndef ARRAY_H
#define ARRAY_H

#include <vector>
#include <functional>
#include <string>
#include <algorithm>

class ArrayUtils {
public:
    // Constructor that takes a vector
    ArrayUtils(const std::vector<int>& data);

    // Other member functions
    int access(size_t index) const;
    void update(size_t index, int value);
    void insert(size_t index, int value);
    void remove(size_t index);
    size_t length() const;
    void print() const;
    int find(int value) const;
    void reverse();
    std::vector<int> map(std::function<int(int)> op) const;
    std::vector<int> filter(std::function<bool(int)> pred) const;
    int reduce(int init, std::function<int(int, int)> binary_op) const;
    static std::vector<int> flatten(const std::vector<std::vector<int>>& vec);
    std::vector<int> slice(size_t start, size_t end) const;
    void push(int value);
    void pop();
    void shift();
    void unshift(int value);
    std::string join(const std::string& delimiter) const;
    std::vector<int> copy() const;
    void fill(int value);
    void sort();  // Non-template sort
    void stable_sort();
    
private:
    std::vector<int> data;
};

#endif
