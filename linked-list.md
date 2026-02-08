# Linked List

A Linked List is a data structure where elements (called nodes) are connected in sequence, and each **node** contains:
- **Data** – the value it holds
- **Pointer** – reference to the next node

Unlike arrays, the memory isn't contingous.

The last node points to *null* signifying the endency of a list.

They are connected via pointers or references that each node posses.

**Example:** a train (linked-list) has cars (node) which have passengers (data) and each car connects to the other car via hook (references).


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

Here, each node is connected via a pointer, so multiple nodes connected are a linked list.

This is for understanding how would they work, in reality we work with 2 classes/struct.
 - `Node` → holding data & pointer
 - `LinkedList` → connected `Nodes` and able to do operations

Learn about [LinkedList with operations](linked-list-operations.md] here.

