#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int x) {
            data = x;
            left = right = nullptr;
        }
};

bool isLeaf(Node *node) {
    if(node == nullptr)
        return false;
    if(node->left == nullptr && node->right == nullptr)
        return true;
    return false;
}

bool isSumTree(Node* root) {
    int ls, rs;
    if(root == nullptr || isLeaf(root))
        return true;
    
    if( isSumTree(root->left) && isSumTree(root->right)) {
        if(root->left == nullptr)
            ls = 0;
        else if(isLeaf(root->left))
            ls = root->left->data;
        else
            ls = 2 * (root->left->data);
        if(root->right == nullptr)
            rs = 0;
        else if(isLeaf(root->right))
            rs = root->right->data;
        else
            rs = 2 * (root->right->data);
        return(root->data == ls + rs);
    }
    return false;
}

int main() {
    Node* root = new Node(26);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->right = new Node(3);
    
    if (isSumTree(root))
        cout << "True";
    else
        cout << "False";

    return 0;
}
