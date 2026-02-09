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

```structure

temp → A → B → C → nullptr → adding value

```

### Displaying List

To list all items in a linked list, we loop over it.

```cpp
  void display() {
    Node* temp = head; // creating a node
    while(temp != nullptr) { // a node of linked list exists
      cout<<"VALUE: "<<temp->data<<endl; // get data of a node
      temp = temp->next; // move to next node
    }
```


### Removing Item

In a singly linked list,
- the only way to remove a node is to change the pointer that points to it

So basically, we do not delete the last node rather remove the thing pointing to it.

```cpp

  void pop(){
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

```

The last node already points to `nullptr`.
- By updating the second-last node’s next pointer to `nullptr`, we break the link to the last node, effectively removing the last node from the list.



