// queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include <cstddef>
#include <stdexcept>

class Queue {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
    };

    Node* frontNode;
    Node* backNode;
    size_t queueSize;

public:
    // Constructors and Destructor
    Queue();
    ~Queue();
    Queue(const Queue& other);
    Queue& operator=(const Queue& other);

    // Basic Operations
    void enqueue(int value);
    int dequeue();
    int front() const;
    int back() const;
    bool isEmpty() const;
    size_t size() const;

    // Utility Functions
    void clear();
    void swap(Queue& other);

    // Move Constructor and Move Assignment Operator
    Queue(Queue&& other) noexcept;
    Queue& operator=(Queue&& other) noexcept;
};

#endif // QUEUE_H
