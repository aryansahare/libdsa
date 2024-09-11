// main.cpp

#include "tree.h"

int main() {
    Tree tree;

    // Inserting values into the tree
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Displaying the tree traversals
    std::cout << "Inorder traversal: ";
    tree.inorder(); // Expected: 20 30 40 50 60 70 80

    std::cout << "Preorder traversal: ";
    tree.preorder(); // Expected: 50 30 20 40 70 60 80

    std::cout << "Postorder traversal: ";
    tree.postorder(); // Expected: 20 40 30 60 80 70 50

    std::cout << "Level order traversal: ";
    tree.levelOrder(); // Expected: 50 30 70 20 40 60 80

    // Displaying tree properties
    std::cout << "Height of the tree: " << tree.height() << std::endl; // Expected: 2
    std::cout << "Size of the tree: " << tree.size() << std::endl;    // Expected: 7

    // Searching for a value in the tree
    int searchValue = 40;
    TreeNode* result = tree.search(searchValue);
    if (result) {
        std::cout << "Value " << searchValue << " found in the tree." << std::endl;
    } else {
        std::cout << "Value " << searchValue << " not found in the tree." << std::endl;
    }

    // Deleting a node from the tree
    int deleteValue = 20;
    tree.deleteNode(deleteValue);
    std::cout << "Inorder traversal after deleting " << deleteValue << ": ";
    tree.inorder(); // Expected: 30 40 50 60 70 80

    // Deleting a node with two children
    deleteValue = 30;
    tree.deleteNode(deleteValue);
    std::cout << "Inorder traversal after deleting " << deleteValue << ": ";
    tree.inorder(); // Expected: 40 50 60 70 80

    // Destroying the tree
    tree.destroy();

    return 0;
}
