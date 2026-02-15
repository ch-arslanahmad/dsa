# Time & Space Complexity

- **Time Complexity**: amount of time taken by an algorithm if `n` input size or length. 
- **Space Complexity**: amount of memory space required by an algorithm to run as if `n` input size or length.

Both of these are measured in terms of Big O Notation, O(n).

## Time Complexity

The following are the common time complexities:
- ### O(1) - Constant Time
Time taken is same regardless of input size like, getting access to any element in an array.
- ### O(log n) - Logarithmic Time
Time taken increases logarithmically as input size increases like, binary search in a sorted array.

For example, an array with binary search (dividing the array into half, 2):
    - 16 size: 4 step
    - 32 size: 5 step
    - 64 size: 6 step

Here, time increases, not linarly.

> [!note]
> logarithmically means n log base n.
> So like in binary search, we divide the array into half, so log base 2.

- ### O(n) - Linear Time
Time taken increases linearly as input size increases like, linear search in an array, like looping over the whole array and using a condtional to check.
    - if you increase the `n` size, time taken also increases by the same amount.

- ### O(n log n) - Linearithmic Time


- ### O(n^2) - Quadratic Time
- ### O(2^n) - Exponential Time

Here, O(1) is the best time complexity and O(2^n) is the worst time complexity.

> [!note]
> It is necessary that not all things can be optimized to be O(1) time complexity, it depends on the problem and the algorithm used to solve it.
> However, we can try to optimize or use a better data structure.
