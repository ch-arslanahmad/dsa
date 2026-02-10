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

  void push_front(int data) {
  Node* nNode = new Node(data);

  nNode->next = head;
  head = nNode;
  
  }


  // empty list, (head[10]), (head[10], [20], [30])
  void pop_front(){
    if (head == nullptr) return; // if empty

    Node* temp = head; // temp = head[10] (same for both)

    head = temp->next; // moved head forward, (to nul), (to 20).
    delete temp; // removed temp value
  }  


  

  
  
  }


  void display() {
    Node* temp = head;
    while(temp != nullptr) {
      cout<<"VALUE: "<<temp->data<<endl;
      temp = temp->next;
    }
  }

  void pop_back(){
    if (head == nullptr) return; // if empty

    if (head->next == nullptr){ // if only 1 value
      delete head;
      head = nullptr;
      return;
    }

    Node* temp = head;

    while(temp->next->next != nullptr) {
      temp = temp->next;
    }

    delete temp->next;
    temp->next=nullptr; // make the last node pointer to nullptr
  }

};

int main() {
    LinkedList l1;
    l1.append(10);
    l1.append(12);
    l1.append(11);

    l1.pop();
    
    l1.display(); // shows: 10,12
}
