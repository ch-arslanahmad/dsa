# Data Structures

Data Structures are integral components of computer science, engineering & development, allowing efficient way to organize, store, manipulate data.

## Common Data Structures

Some common data Structures with basic explaination & real-world usecases are as follows:

### 1. Arrays

Arrays are collection of elements in a contiguous memory. All the elements can be accessed via indices.

Arrays allow:
- Dynamic Programming, like,
  - Fibonacci Sequence
  - Knapsack Problem
  - Matrix Chain Multiplication
  - Kadane’s Algorithm

Allowing arrays to store and retrieve previously computed data.

- Sorting Algorithms, like,
  - Quick Sort
  - Merge Sort
  - Bubble Sort
  - Insertion Sort

- Building other data structures, like,
  - Stacks
  - Queues
  - Linked Lists
  - Trees
  - Graphs

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220721080308/array.png" alt="array"/>

> [!note]
> Dynamic Programming means solving complex problems by breaking them down into simpler sub-problems, and solving each sub-problem at a time & using the process or output to avoid redundant computation.
For example, Fibonacci Sequence ($F_{n-1}$ - $F_{n-2}$)


### 2. Linked Lists

Linked Lists are linear data structures where each element (node) is connected to the next node via pointer, like an iron chain.

It is used when:
- frequent insertion/deletion
- dynamic memory allocation
- also fundamental for building complex data structures like stacks, queues, trees, graphs.
- Polymonial Manipulation (arithmetic operations), each node contains both coefficient and exponent of a term in the polynomial.

For example, 3x^2 + 2x + 1 becomes,
```
[3, 2] -> [2, 1] -> [1, 0] -> NULL
```

If we show a linked list visually,

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250619155958124670/Linked-list.webp" alt="Linked List"/>

### 3. Stacks

Stacks are linear data structures that follow Last In First Out (LIFO) principle like a pile of plates

They allow insertion and deletion from only the top.

- The are used in OS to manage function calls, expression evaluation etc.
- Used in algorithms like Depth First Search (DFS).

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20230726165552/Stack-Data-Structure.png" alt="Stack"/>


### 4. Queues

Queues unlike stacks, follow First In First Out (FIFO) principle, like a line at a counter

It allows insertion at the rear and deletion from the front only.

- They are used in OS for scheduling tasks, managing resources etc.
- Used in algorithms like Breadth First Search (BFS).
- Printing-like scenarios, where the first document sent to the printer should be printed first.


<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250827110558739481/Dequeue-Operation-in-Queue-1.webp" alt="Queue"/>

### 5. Trees

Trees are hierarchical data structure consisting of nodes.
Each node:
- parent node
- children nodes
- leaf nodes (nodes without children)

It is used in various applications like:
- Binary Search Trees (BST) for efficient searching and sorting.
- Heaps for priority queues.
- File systems, where directories and files are organized in a tree structure.
- Database Indexing, where B-trees are used to maintain sorted data and allow for efficient insertion, deletion, and search operations.
- Decision Trees in machine learning, where they are used for classification and regression tasks.


<img src="https://media.geeksforgeeks.org/wp-content/uploads/20251006175023711337/1.webp" alt="tree"/>

### 6. Graphs

A graph is a non-linear data structure in which each node is connected via lines (also called links or edges), simply put.
For example, each city is a node, and cities are connected via road (edges).

It is used in:
- Routing like in GPS navigation systems, where the graph represents a network of roads and intersections.
- Social Networks, where users are represented as nodes and their connections (friendships, followers) are represented as edges.
- Web Page Ranking
- Analyzing Biological networks like protein-protein interaction networks, gene regulatory networks etc.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20251024112600799492/introduction_to_graphs.webp" alt="graph"/>


### 7. Hash Tables

Hash table is key-value pair table where each key is mapped to a specific value using a hash function.

The location of value is determined by applying the hash function to the key, which generates an index in the table.

It is used in:
- Database Indexing & Searching
- Caching, where frequently accessed data is stored for quick retrieval.
- Password storage (hash the password, store the hash)
- Compiler Design, where symbol tables are used to store information about variables, functions, etc.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240508162721/Components-of-Hashing.webp" alt="Hash Table"/>
