/* Linked List */ 

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

int main() {
    
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return 0;
}
