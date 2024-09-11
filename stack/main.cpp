// main.cpp

#include <iostream>
#include "stack.h"

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    return 0;
}
