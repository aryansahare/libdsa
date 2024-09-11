// stack.h

#ifndef STACK_H
#define STACK_H

#include <cstddef>
#include <stdexcept>

class Stack {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
    };

    Node* topNode;
    size_t stackSize;

public:
    // Constructors and Destructors
    Stack();
    ~Stack();
    Stack(const Stack& other);
    Stack& operator=(const Stack& other);

    // Basic operations
    void push(int value);
    int pop();
    int top() const;
    bool isEmpty() const;
    size_t size() const;

    // Utility Functions
    void clear();
    void swap(Stack& other);

    // Move Constructor and Move Assignment Operator
    Stack(Stack&& other) noexcept;
    Stack& operator=(Stack&& other) noexcept;
};

#endif // STACK_H
