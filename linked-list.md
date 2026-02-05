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
