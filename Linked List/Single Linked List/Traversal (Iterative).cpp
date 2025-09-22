/* Traversal in a linked List (Iterative Method) */

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

void traversal(Node* node) {
	while(node != nullptr) {
		cout << node->data;
		if(node->next != nullptr) {
			cout << "-->" ;
		}
		node = node->next;
	}
	return ;
}


int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Linked List Traversal:" << endl;
    traversal(head);

    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    cout << endl;
    return 0;
}
