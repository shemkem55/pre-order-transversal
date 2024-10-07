#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform preorder traversal
void preorderTraversal(TreeNode* root, vector<int>& result) {
    if (root == nullptr) return; // Base case

    result.push_back(root->val); // Visit the root
    preorderTraversal(root->left, result); // Traverse left subtree
    preorderTraversal(root->right, result); // Traverse right subtree
}

// Main function to return preorder traversal of the tree
vector<int> preorder(TreeNode* root) {
    vector<int> result;
    preorderTraversal(root, result);
    return result;
}

// Example usage
int main() {
    // Create a sample binary tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = preorder(root);
    
    cout << "Preorder traversal of binary tree is: ";
    for (int val : result) {
        cout << val << " ";
    }
    
    // Clean up memory (not shown for brevity)
    
    return 0;
}