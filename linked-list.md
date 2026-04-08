# Linked List

A Linked List is a data structure where elements (called nodes) are connected in sequence, and each **node** contains:
- **Data** – the value it holds
- **Pointer** – reference to the next node

Each Linked List contains:
- `head` - pointer to the first node 
- `tail` - pointer to last node, .. (optional in SLL, recommended in DLL/CLL)

Unlike arrays, the memory isn't contingous.

The last node points to *null* signifying the end of a list.

They are connected via pointers or references that each node posses.

**Example:** a train (linked-list) has cars (node) which have passengers (data) and each car connects to the other car via hook (references).

> [!important]
> Singly linked lists are O(1) for insertion or deletion only when the node (or its previous node) is already known; otherwise traversal makes it O(n), never O(log n).

## Use Case

It's used when:
- No need for contiguous memory
- flexible size
- Insertion and deletion are faster

Hence it is used in:
- undo/redos
- media navigation,
- history list

It's essential in OS memory management but the latter are more noticable uses.

## Types of Linked List

The following are the types of linked-lists:
- Single Linked List - basic, 1-directional
- Double Linked List - 
2-directional, each node points to the next as well as previous.
- Circular Linked List - last node points to the first, effectivly making a circle...

I will start with basic single linked list.


## Basic Code

### C++ 

First lets start with node.

```cpp

// Node Class
class Node {
  int data;
  Node* next;

  Node(int data) {this->data=data;
  next = nullptr;}

};

int main() {
    Node* first = new Node(10);
    Node* sec = new Node(11);
    Node* third = new Node(12);
    
    // manual linking
    first->next=sec;
    sec->next=third;
    // no linking for third as it is last
    
    // Accessing data through links
    std::cout << "First: " << first->data << std::endl;
    std::cout << "Second: " << first->next->data << std::endl;
    std::cout << "Third: " << first->next->next->data << std::endl;
}

```

### Java

```java

class Node {
int data;
Node next; // reference

  Node(int d) {
    data = d;
    next = null;
  }
}


```


Here, each node is connected via a pointer/reference, so multiple nodes connected are a linked list.

This is for understanding how would they work, in reality we work with 2 classes/struct.
 - `Node` → holding data & pointer
 - `LinkedList` → connected `Nodes` and able to do operations

Learn about [LinkedList with operations](linked-list-operations.md) here.

