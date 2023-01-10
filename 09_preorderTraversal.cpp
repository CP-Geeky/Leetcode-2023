#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node {
    int data;
    struct Node *left, *right;
};
 
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
/* Given a binary tree, print its nodes in preorder*/
vector<int> resultantVector;
void findPreorderTraversal(TreeNode* root){
    if(root==NULL){
        return ;
    }
    resultantVector.push_back(root->val);
    findPreorderTraversal(root->left);
    findPreorderTraversal(root->right);
}

vector<int> preorderTraversal(TreeNode* root) {
    findPreorderTraversal(root);
    return resultantVector;
}
 
/* Driver code*/
int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
      // Function call
    cout << "\nPreorder traversal of binary tree is \n";
    vector<int> ans = preorderTraversal(root);
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
 
    return 0;
}