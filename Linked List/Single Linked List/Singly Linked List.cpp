#include <iostream>
#include <ostream>
                     
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
    data = val;
    next = nullptr;
    }

    void printNode(const Node** head);
    void insertAtHead(int val, Node** head);
    void insertAtPosition(Node** head, int val, int position);
    void insertAtTail(int val, Node** head);
    void deleteAtHead(Node** head);
    void deleteByPosition(Node** head, int position);
    void deleteByElement(Node** head, int val);
    bool searchElement(const Node** head,const int val);
    void modifyElementByPosition(const Node** head, const int position,const int newValue);
    void modifyElementByVal(const Node** head,const  int val,const int newValue);
    void reverse(Node**head);
    void deleteHead(Node** head);
    void deleteLinkedList(Node** head);
};

void Node::printNode(const Node** head){
    if(head == nullptr)
    {
-               cout << "--> NULL" << endl;
        return;
        }
    const Node* temp = *head;
    cout << temp->data << "-->";
    const Node* next = temp->next;
    return printNode(&next);
}

void Node::insertAtHead(int val, Node** head){
    Node* temp = *head;
    
}    

void Node::insertAtTail(int val, Node** head){
        Node* temp = *head;

        if(temp == nullptr){
                insertAtHead(val, &*head)
        }
        while(temp != nullptr){
                temp = temp->next;
        }

        Node* newNode =new Node(val);
        
}
void Node::insertAtPosition(Node** head, int val, int position){
        if(position == 0){
                insertAtHead(val, &*head);
        }

        Node* temp = *head;
        for(int k = 0; k < position && temp != nullptr; k ++){
                temp = temp->next;
        

        if((*head == nul))
}
