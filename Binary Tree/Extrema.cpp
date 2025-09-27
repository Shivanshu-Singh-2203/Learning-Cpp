/* Extrema of a binary tree */ 

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

struct Node {
	int data;
        struct Node* left;
	struct Node* right;
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};

Node* insertNode(Node* root, int val) {
	if (!root) return new Node(val);

	if (!root->left) root->left = new Node(val);
	else if (!root->right) root->right = new Node(val);
	else insertNode(root->left, val);
	return root;
}

int minimum(struct Node* node) {
	if(node == nullptr) {
		return INT_MAX;
	}
	int left = minimum(node->left);
	int right = minimum(node->right);
	return min(node->data,max(left, right));
}

int maximum(struct Node* node) {
	if(node == nullptr) {
		return INT_MIN;
	}
	int left = maximum(node->left);
	int right = maximum(node->right);
	return max(node->data,max(left, right));
}

int main() {
    Node* root = nullptr;

    root = insertNode(root, 10);
    insertNode(root, 20);
    insertNode(root, 5);
    insertNode(root, 40);
    insertNode(root, 3);

    cout << "Minimum value in the tree: " << minimum(root) << endl;
    cout << "Maximum value in the tree: " << maximum(root) << endl;

    return 0;
}
