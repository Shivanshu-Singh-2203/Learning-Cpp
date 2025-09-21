/* Recursive maximum depth search */

#include <algorithm>
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


int maxDepth(struct Node* root)
{
	if(root == nullptr) {
		return -1;
	}
	int left = maxDepth(root->left);
	int right = maxDepth(root->right);
	return max(left, right) + 1;
}

int main() {
	Node *root = new Node(12);
	root->left = new Node(8);
	root->right = new Node(18);
	root->left->left = new Node(5);
	root->left->right = new Node(11);
	
	cout << maxDepth(root);
	return 0;
}
