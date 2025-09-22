#include <bits/stdc++.h>

using namespace std;

class Node {

	public:
	int data;
	Node* next;

	Node(int value) {
		this->data = value;
		this->next = nullptr;
	}
};

/* Indices are starting from 1*/ 

void deleteAtIndex(Node* root, int val, int index) {
	Node* temp = root;

	if(index == 1) {
		Node* newHead = temp->next;
		delete temp;
		return newHead;
	}

	if(index < 1) {
		cout << "Index out of range" << endl;
		return temp;
	}

	Node* curr = temp;
	for(int j = 0; j < index-1 && curr !=nullptr ; j ++) {
		curr = curr->next;
	}

	if(curr == nullptr) {
	       if(j == index-1) {
		       return temp;	       
	       }

	       else{
		       cout << "Index out of range." << endl;
		       return temp;
	       }
	}

