// linkedlist.h

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct Node {
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insertAtStart(int value);
    void insertAtEnd(int value);
    void insertAtPosition(Node* node, int value);
    void deleteNode(int value);
    void deleteStart();
    void deleteEnd();
    void deletePosition(Node* node);
    void printList() const;
    Node* search(int value) const;
    void updateValue(int oldValue, int newValue);
    bool isEmpty() const;
    int getLength() const;
    void reverse();
    void clearList();

private:
    Node* head;
    int length;

    void deleteList(Node* node);
};

#endif
