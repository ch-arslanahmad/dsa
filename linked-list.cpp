#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data) {this->data=data;
  next = nullptr;}

};

class LinkedList {
private:
  Node* head; // the pointer to be tracked
public:
  LinkedList() : head(nullptr) {} // empty(null) when created

  void append(int data) {
    Node* nNode = new Node(data); // creating an object to add
    
    // if empty
    if(head == nullptr) {
        head = nNode; // now points to this node
        return;
    }
    
    // if not empty
    Node* temp = head;
    while(temp->next != nullptr) {
        temp = temp->next; // move the pointer
    }
    // add a pointer to last node
    temp->next=nNode;
  }


  void display() {
    Node* temp = head;
    while(temp != nullptr) {
      cout<<"VALUE: "<<temp->data<<endl;
      temp = temp->next;
    }
  }

};

int main() {
    LinkedList l1;
    l1.append(10);
    l1.append(12);
    l1.append(11);
    
    l1.display();
}
