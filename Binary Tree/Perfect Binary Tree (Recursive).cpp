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

int depth(struct Node* node) {
	if(node == nullptr) {
		return 0;
	}
	return 1 + max(depth(node->left), depth(node->right)); 
}

bool isPerfectAtd(struct Node* node, int d) {
	if(node == nullptr){
		return true;
	}

	if(node ->left == nullptr && node->right == nullptr)
	{
		return d == 1;
	}

	if(node->left == nullptr || node->right == nullptr) {
		return false;
	}
	return isPerfectAtd(node->left, d-1) && isPerfectAtd(node->right, d - 1);
}

bool isPerfect(struct Node* node) {
	int d = depth(node);
	return isPerfectAtd(node, d);
}

int main() {
    Node* root = nullptr;

    cout << "Empty tree: " << (isPerfect(root) ? "Perfect" : "Not Perfect") << endl;

    root = insertNode(root, 10);
    cout << "Single node tree: " << (isPerfect(root) ? "Perfect" : "Not Perfect") << endl;

    insertNode(root, 20);
    insertNode(root, 30);
    cout << "3-node tree: " << (isPerfect(root) ? "Perfect" : "Not Perfect") << endl;

    Node* root2 = new Node(10);
    root2->left = new Node(20);
    cout << "Incomplete tree: " << (isPerfect(root2) ? "Perfect" : "Not Perfect") << endl;

    Node* root3 = nullptr;
    root3 = insertNode(root3, 10);
    insertNode(root3, 20);
    insertNode(root3, 30);
    insertNode(root3, 40);
    insertNode(root3, 50);
    insertNode(root3, 60);
    insertNode(root3, 70);
    cout << "7-node perfect tree: " << (isPerfect(root3) ? "Perfect" : "Not Perfect") << endl;

    return 0;
}

