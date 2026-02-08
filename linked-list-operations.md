# Linked List & Operations

If we use proper classes to make a Linked list, it will be,

```cpp
// Node Class
class Node {
public:
  int data;
  Node* next;

  Node(int data) {this->data=data;
  next = nullptr;}

};

// Main Class
class LinkedList {
private:
  Node* head;
public:
  LinkedList() : head(nullptr) {}
};

```

## Basic Operations

Now even though,i have made a linked list, we cannot do any basic operation like:
- adding item
- removing item
- search item
- update item
- looping over item etc


### Adding an Item

```cpp
  void append(int data) {
    Node nNode = new Node(data); // creating an object to add
    
    // if empty
    if(head == nullptr) {
        head = nNode; // now points to this node
        return;
    }
    
    // if not empty
    Node* temp = nNode;
    while(temp->next != nullptr) {
        temp = temp->next; // move the pointer
    }
    // add a pointer to last node
    temp->next=nNode;
  }
```

- `while (temp->next != nullptr)`, Run as long as there is another node after `temp`.
  - `temp = temp->next`, move the node to next
- `temp->next=nNode`, adding a pointer to the last node


