/* Recursive linked list traversal */ 

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

void traversal(Node* head) {
	if(head == nullptr) {
		return;
	}

	if(head != nullptr){
		cout << head->data;
		if(head->next != nullptr) {
			cout << "-->" ;
		}
	}

	return traversal(head->next);
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

