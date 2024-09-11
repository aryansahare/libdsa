// main.cpp

#include <iostream>
#include "queue.h"

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    std::cout << "Front element: " << queue.front() << std::endl;
    std::cout << "Back element: " << queue.back() << std::endl;

    while (!queue.isEmpty()) {
        std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    }

    return 0;
}
