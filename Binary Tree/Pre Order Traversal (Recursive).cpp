/* Preorder Traversal */
/* root -> left -> right */

#include <bits/stdc++.h>

using namespace std; 

struct Node {
	struct Node* left;
	struct Node* right;
	int data;
	Node(int val){
		left = nullptr;
		right = nullptr;
		data = val;
	}
};

void preOrderTraversal(struct Node* node) {
	if(node == nullptr) {
		return;
	}
	cout << node->data << " ";
	preOrderTraversal(node->left);
	preOrderTraversal(node->right);
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);

	preOrderTraversal(root);

	return 0;
}
