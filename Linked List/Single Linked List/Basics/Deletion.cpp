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


void deleteAtHead(Node ** head){
    Node* temp = *head;
    *head = temp->next;
    delete(temp);
}

/* Indices are starting from 0 */
void deleteByIndex(Node** node, int position) {
    if(position == 0)
}
