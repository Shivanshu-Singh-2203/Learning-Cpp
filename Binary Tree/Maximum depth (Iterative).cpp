/* Iterative method using queue */ 

#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root){
	if(root == nullptr){
		return -1;
	}

	queue<Node*> q;
	q.push(root);
	int depth = 0;

	while(!q.empty())
	{
		int levelSize = q.size();
		for(int j = 0; j < levelSize; j ++) {
			Node* current = q.front();
			q.pop();

			if(current->left != nullptr){
				q.push(current->left);
			}
			if(current->right != nullptr){
				q.push(current->right);
			}
		}
		depth ++;
	}
	return depth - 1;
}

int main() {
  
    // Representation of the input tree:
    //     12
    //    /  \
    //   8   18
    //  / \
    // 5   11
    Node *root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);
    root->left->left = new Node(5);
    root->left->right = new Node(11);
    
    cout << height(root);
    
    return 0;
}
