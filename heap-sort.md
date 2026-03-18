# Heap Sort

To heap sort, you need to know:
- Binary Tree (CBT & ACBT)

## Binary Tree

Binary trees are basically nodes connected in an organizational way, with atleast 2 child nodes.

Key terminology includes:
- **Node:** The basic unit containing data.
- **Parent:** A node that has branches leading to other nodes.
- **Child:** A node derived from a parent node.
- **Root:** The top-most node in a tree.



### CBT (Complete Binary Tree)

A complete binary is a binary tree in which,
- all parent nodes have exactly 2 children
- all leaf nodes are at the same level.

For example,

```
        1
      /   \
     2     3
    / \   / \
   4   5 6   7
```

### ACBT (Almost Complete Binary Tree)

A tree where each parent may have fewer than two child nodes, but filling must follow a left-to-right order.

For example,

```
        1
      /   \
     2     3
    / \   / \
   4   5 6   7
  /
 8
```

> [!note]
> This structure is specifically used for **Heap Sort**.


## 2. Heap Tree

A Heap is a specialized ACBT that satisfies the **Heap Property**. Heaps are primarily used for sorting arrays and implementing priority queues.

### Types of Heaps
| Heap Type | Property | Ordering |
| :--- | :--- | :--- |
| **Min Heap** | Parent node is always **smaller** than its children. | Used for **Ascending** sort. |
| **Max Heap** | Parent node is always **greater** than its children. | Used for **Descending** sort. |

For example, an array `[10, 20, 15, 30, 40]` can be represented as a Max Heap:

```
      40
      / \
     30  15
    / \
   10  20

```

It can represented as a Min Heap:

```
      10
      / \
     20  15
    / \
   30  40

```


> [!note]
> A tree must be filled from **left to right** across each level before moving to the next level.
> This means an array, [1,10,5,4,5] can be represented,
> ```
>       1
>      / \
>    10  5
>   / \
>  4   5



## 3. Building a Heap

If a tree is not currently a Min/Max heap (e.g., a random distribution like `1,10,5,4,5`).

there are two primary methods to organize it.

### Method 1: Insert Key One-by-One
In this method, we check the heap condition every time a new value is added, and add values one by one.

1.  **Insert** the value into the next available left-to-right position, one by one.
2.  **Compare** the new node with its parent.
3.  **Swap** if the heap condition (Min or Max) is violated.
4.  **Repeat** the comparison upward until the root or until the condition is met.

### Method 2: Heapify
This is generally more efficient for building a heap from an existing set of data.
1.  **Create the tree:** Insert all values into the tree structure first, following the left-to-right rule, without checking the heap condition.
2.  **Adjust (Heapify):** Start from the last non-leaf node and work upwards to the root, swapping nodes to satisfy the Min/Max heap condition.

For more detailed understanding, look into the [Heapify Algorithm](heapify-algo.md) section.


## 4. Example: Creating a Min Heap


if array `[10, 20, 15, 30, 40]`, we make it into min heap via insert key one by one method as follows,

```
        1
```

Then
```
        1
      /
     10
```

Then,

```
        1
      /   \
     10    5
```

Then, here we see `4` is smaller than its parent `10`, so we swap them,

```
        1
      /   \
     4    5
    /
   10
```

Then, we insert `5` and since it is smaller than `10`, we swap them,

```
        1
      /   \
     10    5
    /
   4
```

Finally, we have the min heap as,

```
        1
      /   \
     4    5
    / \
   10  5

```



> [!important]
> To sort an array using these structures:
> * **To Sort Ascending:** Use a **Min Heap** (the smallest value is always at the top).
> * **To Sort Descending:** Use a **Max Heap** (the largest value is always at the top).
