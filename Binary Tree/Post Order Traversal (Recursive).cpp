/* Post order Traversal */ 

/* left -> right -> root */

#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val){
		data = val;
		left = nullptr;
		right = nullptr;
	}
};

void postOrderTraversal(struct Node* node){
	if(node == nullptr){
		return;
	}
	postOrderTraversal(node->left);
	postOrderTraversal(node->right);
	cout << node->data << " " ;
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    postOrderTraversal(root);

    return 0;
}
