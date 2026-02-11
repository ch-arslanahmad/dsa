# Double & Circular Linked List

- **Double Linked List** - each node points to previous & next
- **Circular Linked List** - last node points to head, can be single or doubly linked list.


Operations are same as single linked list, however implementation in code is different.

## Double Linked List Operations

All operations remain same, only difference is implementing `tail` pointer in code.

### Add Value (push_front)

Like `push_front`,
```cpp

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

```

In this code, for example,
- we use a conditional, if no Node, then new Node is head/tail.
- if not empty, new node, points to head & `nullptr`. Head points to new Node. Then, `head = nNode`.

Unlike linked list, where you only take care of one direction, here, its bidirectional.

However this does not show the true benefit of `tail` pointer.

### Adding Value (push_back)

```cpp

  void push_back(int data) {
    Node *nNode = new Node(data); // creating an object to add

    // if empty
    if (head == nullptr) {
      head = tail = nNode; // now points to this node
      return;
    }

    // if not empty
    tail->next = nNode;
    tail = nNode
  }

```

- If no node exists, then same thing as `push_front` if
- if exists, then make the `tail` point to new node, and make the node new `tail`.

- [Full Code Implementation](double-linked-list.cpp)
