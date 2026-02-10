#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = nullptr;
  }
};

class LinkedList {
private:
  Node *head; // the pointer to be tracked
public:
  LinkedList() : head(nullptr) {} // empty(null) when created

  void push_back(int data) {
    Node *nNode = new Node(data); // creating an object to add

    // if empty
    if (head == nullptr) {
      head = nNode; // now points to this node
      return;
    }

    // if not empty
    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next; // move the pointer
    }
    // add a pointer to last node
    temp->next = nNode;
  }

  void push_front(int data) {
    Node *nNode = new Node(data);

    nNode->next = head;
    head = nNode;
  }

  // empty list, (head[10]), (head[10], [20], [30])
  void pop_front() {
    if (head == nullptr)
      return; // if empty

    Node *temp = head; // temp = head[10] (same for both)

    head = temp->next; // moved head forward, (to nul), (to 20).
    delete temp;       // removed temp value
  }

  // insert at position (index-based)
  void insert(int pos, int data) {
    Node *nNode = new Node(data);

    // replace with head
    if (pos == 0) {
      nNode->next = head;
      head = nNode;
      return;
    }

    Node *temp = head;

    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
      temp = temp->next;
    }
    if (temp == nullptr)
      return; // out of bounds

    // replace with temp
    nNode->next = temp->next;
    temp->next = nNode;
  }

  void remove(int pos) {
    if (head == nullptr)
      return;

    if (pos == 0) {
      head = head->next;
      return;
    }
    Node *temp = head;
    Node *prev = nullptr;

    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
      prev = temp;
      temp = temp->next;
    }

    if (temp == nullptr)
      return; // out of bounds

    prev->next = temp->next;
    delete temp;
  }

  void display() {
    Node *temp = head;
    while (temp != nullptr) {
      cout << "VALUE: " << temp->data << endl;
      temp = temp->next;
    }
  }

  void pop_back() {
    if (head == nullptr)
      return; // if empty

    if (head->next == nullptr) { // if only 1 value
      delete head;
      head = nullptr;
      return;
    }

    Node *temp = head;

    while (temp->next->next != nullptr) {
      temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr; // make the last node pointer to nullptr
  }

  bool search(int data) {
    Node *temp = head;
    while (temp != nullptr) {
      if (temp->data == data)
        return true;
      temp = temp->next;
    }
    return false;
  }


  void reverse() {
    Node *current = head;
    Node *prev = nullptr;
    Node *next = nullptr;
    while (current != nullptr) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
  }
  
};

int main() {
  LinkedList l1;
  l1.push_back(10);
  l1.push_back(11);
  l1.push_back(12);

  l1.push_front(9);

  cout << "9 Exists: " << l1.search(9) << endl;

  l1.pop_back();
  l1.insert(2, 100);

  l1.display(); // shows: 10,12
}
