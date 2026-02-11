// Double DoubleLinkedList
#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data) : data(data), next(nullptr), prev(nullptr){}
};

class DoubleLinkedList {
private:
  Node *head; // first node
  Node *tail; // last node
public:
  DoubleLinkedList() : head(nullptr) {} // empty(null) when created

  void push_back(int data) {
    Node *nNode = new Node(data); // creating an object to add

    // if empty
    if (head == nullptr) {
      head = tail = nNode; // now points to this node
      return;
    }

    // if not empty
    tail->next = nNode;
    tail = nNode;
  }

  void push_front(int data) {
    Node *nNode = new Node(data);

    if(head == nullptr) {
      head = tail = nNode; // now points to this node
      return;    
    }
    
    nNode->next = head; // points to head
    nNode->prev = nullptr;
    head->prev = nNode;
    head = nNode; // becomes head
  }

  // normal traversal
  void display() {
    Node *temp = head;
    while (temp != nullptr) {
      cout << "VALUE: " << temp->data << endl;
      temp = temp->next;
    }
  }

  // two-pointer approach (unordered print)
  void display2() {
    Node* front = head;
    Node* back = tail;

    while(front != nullptr && back !=nullptr && front != back && front->prev != back) {
      cout<<front->data<<endl;
      cout<<back->data<<endl;
      front = front->next;
      back = back->prev;
    
    }
  
  }

};

int main() {
  DoubleLinkedList l1;
  l1.push_back(10);
  l1.push_back(11);
  l1.push_back(12);

  // l1.push_front(9);

  // cout << "9 Exists: " << l1.search(9) << endl;

  // l1.pop_back();
  // l1.insert(2, 100);

  l1.display2(); // shows: 10,12
}

