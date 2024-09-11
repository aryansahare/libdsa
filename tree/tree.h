// tree.h

#ifndef TREE_H
#define TREE_H

#include <queue>
#include <iostream>
#include <algorithm>

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : value(value), left(nullptr), right(nullptr) {}
};

class Tree {
private:
    TreeNode* root;

    // Helper functions
    void insert(TreeNode*& node, int value);
    void deleteNode(TreeNode*& node, int value);
    TreeNode* search(TreeNode* node, int value) const;
    TreeNode* findMin(TreeNode* node) const;
    void inorder(TreeNode* node) const;
    void preorder(TreeNode* node) const;
    void postorder(TreeNode* node) const;
    void levelOrder(TreeNode* node) const;
    int height(TreeNode* node) const;
    int size(TreeNode* node) const;
    void destroy(TreeNode* node);

public:
    Tree();
    ~Tree();
    void insert(int value);
    void deleteNode(int value);
    TreeNode* search(int value) const;
    TreeNode* findMin() const;
    void inorder() const;
    void preorder() const;
    void postorder() const;
    void levelOrder() const;
    int height() const;
    int size() const;
    void destroy();
};

#endif // TREE_H
