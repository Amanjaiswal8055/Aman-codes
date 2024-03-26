#include <iostream>

using namespace std;

// Definition of a node in a binary tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform preorder traversal of a binary tree
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " "; // Visit the current node
    preorderTraversal(root->left); // Traverse the left subtree
    preorderTraversal(root->right); // Traverse the right subtree
}

// Function to perform inorder traversal of a binary tree
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left); // Traverse the left subtree
    cout << root->data << " "; // Visit the current node
    inorderTraversal(root->right); // Traverse the right subtree
}

// Function to perform postorder traversal of a binary tree
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    postorderTraversal(root->left); // Traverse the left subtree
    postorderTraversal(root->right); // Traverse the right subtree
    cout << root->data << " "; // Visit the current node
}

int main() {
    // Construct a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    // Deallocate memory
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
