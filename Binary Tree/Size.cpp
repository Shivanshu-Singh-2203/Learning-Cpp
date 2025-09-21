/* Size of a binary tree */ 

#include<bits/stdc++.h>

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


int size(struct Node* node){
	if(node == nullptr) {
		return 0;
	}	
	return 1 + size(node->left) + size(node->right);
}

int main() {

    // Constructed binary tree is
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << size(root) << endl;

    return 0;
}
