#include <bits/stdc++.h>
#include <queue>

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

bool isPerfect(struct Node* node) {
	if(node == nullptr) {
		return true;
	}

	queue<Node*> q;
	q.push(node);

	int depth = -1;  
	int level = 0;

	while(!q.empty()) {
		int levelSize = q.size();
		for(int j = 0; j < levelSize; j ++) {
			Node* current = q.front();
			q.pop();

			if ((current->left == nullptr && current->right != nullptr) ||
			    (current->left != nullptr && current->right == nullptr)) {
				return false;
			}

			if(current->left == nullptr && current->right == nullptr) {
				if(depth == -1) depth = level;       
				else if(depth != level) return false; 
			}

			if(current->left != nullptr) q.push(current->left);
			if(current->right != nullptr) q.push(current->right);
		}
		level++;
	}	

	return true;
}

