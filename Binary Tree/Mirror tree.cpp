#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
  
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

bool areMirrors(Node* root1, Node* root2) {
  
    if (root1 == nullptr && root2 == nullptr)
        return true;
    
    if (root1 == nullptr || root2 == nullptr)
        return false;
    
    return (root1->data == root2->data) &&
           areMirrors(root1->left, root2->right) &&
           areMirrors(root1->right, root2->left);
}

int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(3);
    root1->right = new Node(2);
    root1->right->left = new Node(5);
    root1->right->right = new Node(4);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    if (areMirrors(root1, root2))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
