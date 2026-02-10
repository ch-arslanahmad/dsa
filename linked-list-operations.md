# Linked List & Operations

If we use proper classes to make a Linked list, it will be,

```cpp
// Node Class
class Node {
public:
  int data;
  Node* next;

  Node(int data) : data(data), next(nullptr) {}

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
- [x] adding item (append)
- [x] removing item (pop)
- [x] looping over item etc
- [x] insert at beginning (push)
- [x] delete at beginning (pop_front)
- [x] insert at position (insert)
- [x] delete at position (remove)
- [ ] search
- [ ] reverse

> [!note]
> If you can implement these 9 correctly, you fully understand singly linked lists.


### Adding an Item (push_front)

```cpp
  void push_front(int data) {
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

temp → A → B → C → nullptr = adding value

```


### Adding an Item (push_front)

```cpp

  void push_front(int data) {
  Node* nNode = new Node(data); // new Node

  nNode->next = head; // points to current head only
  head = nNode; // make the new Node the new head
  
  }

```


### Add By Position (remove)

```cpp

  // insert at position (index-based)
  void insert(int pos,int data) {
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
    if (temp == nullptr) return; // out of bounds

    // replace with temp
    nNode->next = temp->next;
    temp->next = nNode;
  }

```

> [!important]
> If everything is pointers, nothing is deleted unless you explicitly call delete.

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

We create a `temp` node, and move that temp node as long as the next node exists.
- printing the data of each node, in each iteration.

### Removing Item (pop_back)

In a singly linked list,
- the only way to remove a node is to change the pointer that points to it

So basically, we do not delete the last node rather remove the thing pointing to it.

```cpp

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

```

The last node already points to `nullptr`.
- By updating the second-last node’s next pointer to `nullptr`, we break the link to the last node, effectively removing the last node from the list.

### Removing Item (pop_front)

```cpp

  // empty list, (head[10]), (head[10], [20], [30])
  void pop_front(){
    if (head == nullptr) return; // if empty

    Node* temp = head; // temp = head[10] (same for both)

    head = temp->next; // moved head forward, (to nul), (to 20).
    delete temp; // removed temp value
  }  

```

### Remove By Position (remove)

```cpp

  void remove(int pos) {
    if (head == nullptr) return;
    
    if(pos == 0) {
      head = head->next;
      return;
    }
    Node* temp = head;
    Node* prev = nullptr;

    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
      prev = temp;
      temp= temp->next;
    }

    if (temp == nullptr) return; // out of bounds

    prev->next = temp->next;
    delete temp;
  
  }

```

To remove a `Node` at position we need a previous.
- when 0 index, simply move the pointer
- when n index, then find `prev` and make it point to the next value, then delete the `temp` value.
- if `temp` is `nullptr`, then invalid `pos` given.


### Search


```cpp

  bool search(int data) {
    Node *temp = head;
    while (temp != nullptr) {
      if (temp->data == data)
        return true;
      temp = temp->next;
    }
    return false;
  }

```

Simply looping over linked list while using simple conditional.


### Reverse Linked List

```cpp

  void reverse() {
    Node *current = head;
    Node *prev = nullptr;
    Node *next = nullptr;
    while (current != nullptr) {
      next = current->next; // initializes next
      current->next = prev; // points current to previous (for reverse)

      // moving the node position
      prev = current; // move the prev
      current = next; // move the current
    }
    head = prev;
  }

```

The code is somewhat complex to comprehend at first, so we will se by iteration.

- **Original List**

```
head -> 1 -> 2 -> 3 -> nullptr
```

#### Initial Pointers:

```cpp
current = head (1), prev = nullptr, next = nullptr
```

#### Iteration 1

```cpp
next = current->next (2)
current->next = prev (nullptr)
prev = current (1)
current = next (2)
```

**List now:** `1 -> nullptr, 2 -> 3 -> nullptr`


#### Iteration 2

```cpp
next = current->next (3)
current->next = prev (1)
prev = current (2)
current = next (3)
```

**List now:** `2 -> 1 -> nullptr, 3 -> nullptr`


#### Iteration 3

```cpp
next = current->next (nullptr)
current->next = prev (2)
prev = current (3)
current = next (nullptr)
```

**Reversed List:** `head = prev -> 3 -> 2 -> 1 -> nullptr`



> [!note]
> The main idea to take things slowly, and divide solution into simpler parts for understanding for linked list.



