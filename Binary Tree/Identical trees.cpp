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

bool isIdentical(struct Node* source, struct Node* destination) {
	if((source == nullptr) && (destination == nullptr)) {
		return true;
	}
	if(source != nullptr && destination != nullptr) {
		bool current = false;
		if(source->data == destination->data){ 
			current = true;
		}
		bool left = isIdentical(source->left, destination->left);
		bool right = isIdentical(source->right,destination->right);
		
		return (left && right && current);
	}
	return false;
}

int main() {
    Node* root1 = nullptr;
    Node* root2 = nullptr;

    // Build first tree
    root1 = insertNode(root1, 10);
    insertNode(root1, 20);
    insertNode(root1, 30);

    // Build second tree
    root2 = insertNode(root2, 10);
    insertNode(root2, 20);
    insertNode(root2, 10);

    if (isIdentical(root1, root2)) {
        cout << "Both trees are identical." << endl;
    } else {
        cout << "Trees are not identical." << endl;
    }

    return 0;
}

