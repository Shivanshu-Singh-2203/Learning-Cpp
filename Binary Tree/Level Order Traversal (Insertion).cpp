/* Inserting a node in level order in a Binary Tree */ 

#include <iostream>
#include <queue>

using namespace std;

struct Node{
	struct Node* left;
	struct Node* right;
	int data;
	Node(int val){
		data = val;
		left = nullptr;
		right = nullptr;
	}
};

void insertNode(struct Node*& root, int val){
	Node* newNode = new Node(val);
	if (root == nullptr){
		root = newNode;
		return;
	}

	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		int levelSize = q.size();
		for(int j = 0; j < levelSize; j ++) {
			Node* current = q.front();
			q.pop();
			if(current->left == nullptr){
				current->left = newNode;
				return;
			}

			if(current->right == nullptr) {
				current->right = newNode;
				return;
			}
			q.push(current->left);
			q.push(current->right);
		}
	}
}

void printLevelOrder(struct Node* root) {
	if(root == nullptr){
		return;
	}
	
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int levelSize = q.size();
		for(int j = 0; j < levelSize; j ++) {
			Node* current = q.front();
			q.pop();

			cout << current->data << " ";
			if(current->left != nullptr) {
				q.push(current->left);
			}
			if (current->right != nullptr) {
				q.push(current->right);
			}
		}
	}
	
}

int main() {
    Node* root = nullptr;

    insertNode(root, 10);
    insertNode(root, 20);
    insertNode(root, 30);
    insertNode(root, 40);

    printLevelOrder(root);

    return 0;
}

