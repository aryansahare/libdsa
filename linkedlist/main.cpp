// main.cpp

#include "linkedlist.h"

int main() {
    // Create a LinkedList object
    LinkedList list;

    // Check if the list is initially empty
    std::cout << "Is the list empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    // Insert elements at the start
    list.insertAtStart(10);
    list.insertAtStart(20);
    list.insertAtStart(30);

    // Print the list
    std::cout << "List after inserting elements at the start:" << std::endl;
    list.printList();

    // Insert elements at the end
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    // Print the list
    std::cout << "List after inserting elements at the end:" << std::endl;
    list.printList();

    // Insert an element after a specific node (e.g., after the node with value 20)
    Node* node = list.search(20);
    if (node) {
        list.insertAtPosition(node, 25);
    }

    // Print the list
    std::cout << "List after inserting an element at a specific position:" << std::endl;
    list.printList();

    // Update a value
    list.updateValue(25, 35);

    // Print the list
    std::cout << "List after updating a value:" << std::endl;
    list.printList();

    // Delete an element by value
    list.deleteNode(35);

    // Print the list
    std::cout << "List after deleting an element by value:" << std::endl;
    list.printList();

    // Delete the start element
    list.deleteStart();

    // Print the list
    std::cout << "List after deleting the start element:" << std::endl;
    list.printList();

    // Delete the end element
    list.deleteEnd();

    // Print the list
    std::cout << "List after deleting the end element:" << std::endl;
    list.printList();

    // Reverse the list
    list.reverse();

    // Print the list
    std::cout << "List after reversing:" << std::endl;
    list.printList();

    // Check if the list is empty
    std::cout << "Is the list empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    // Clear the list
    list.clearList();

    // Print the list
    std::cout << "List after clearing:" << std::endl;
    list.printList();

    return 0;
}
