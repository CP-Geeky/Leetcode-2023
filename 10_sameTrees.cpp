#include <bits/stdc++.h>
using namespace std;
 

class Node {
public:
    int data;
    node* left;
    node* right;
};
 
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
}

bool isSameTree(Node* p, Node* q) {
    if(p == NULL && q == NULL)
        return true;
    if(p != NULL && q != NULL) {
        if(p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right)){
            return true;
        }
    } 
    return false;
}

 
/* Driver code*/
int main()
{
    node* root1 = newNode(1);
    node* root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);
 
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
 
      // Function call
    if (isSameTree(root1, root2))
        cout << "Both trees are identical.";
    else
        cout << "Trees are not identical.";
 
    return 0;
}