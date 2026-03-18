# Fundamentals & Sorting Algorithms & Complexity

## 1. Fundamentals of DSA

Data Structures and Algorithms (DSA) involve taking **Raw Data** and arranging it into **Structured Data**.

### Performance Metrics

The two most important metrics in DSA are:

* **Time Complexity:** How much time an algorithm takes to execute.
* **Space Complexity:** How much memory/space the algorithm requires.

---

## 2. Sorting Algorithms

To sort an array, we utilize various **sorting algorithms**.


The most popular sorting algorithms are comparison based, they are listed as follows:


## Bubble Sort

Bubble Sort is one of the simplest sorting methods. It relies on side-by-side comparisons.
- **Process:** Elements are compared in pairs, and the larger value "bubbles" to the right for ascending order.

### Example of Bubble Sort:

Sorting `[2,7,9,6,4]` involves multiple steps to move digits into their correct positions.

```
[2, 7, 9, 6, 4] -> Compare 2 and 7 (no swap)
[2, 7, 9, 6, 4] -> Compare 7 and 9 (no swap)
[2, 7, 9, 6, 4] -> Compare 9 and 6 (swap)
[2, 7, 6, 9, 4] -> Compare 9 and 4 (swap)
[2, 7, 6, 4, 9] -> End of first pass
```


## Selection Sort

In Selection Sort, the goal is to find the selected (smallest in ascending sort) value in the unsorted portion and put it at the first available position.


### Example of Selection Sort

For the set `[2,7,9,6,4]`, the algorithm finds the smallest number and swaps it to the front until the sequence is sorted.

```
[2, 7, 9, 6, 4] -> Find smallest (2) and swap with itself
[2, 7, 9, 6, 4] -> Find next smallest (4) and swap with 7
[2, 4, 9, 6, 7] -> Find next smallest (6) and swap with 9
[2, 4, 6, 9, 7] -> Find next smallest (7) and swap with 9
[2, 4, 6, 7, 9] -> End of sorting
```


### Insertion Sort

Insertion Sort works by comparing a selected value with all previous values in the array.
- **Process:** It shifts elements to insert the current value into its correct sorted spot.


#### Example of Insertion Sort

```
[2, 7, 9, 6, 4] -> Start with 7, compare with 2 (no shift)
[2, 7, 9, 6, 4] -> Move to 9, compare with 7, compare with 2 (no shift)
[2, 7, 9, 6, 4] -> Move to 6, compare with 9 (shift 9), compare with 7 (shift 7), compare with 2 (no shift), insert 6
[2, 6, 7, 9, 4] -> Move to 4, compare with 9 (shift 9), compare with 7 (shift 7), compare with 6 (shift 6), compare with 2 (no shift), insert 4
[2, 4, 6, 7, 9] -> End of sorting
```

## Non-Comparison Sorting: Radix Sort


It is one of few algorithms that is not comparison-based.

Its process is simple,
- list all the digits of the numbers in the array a stack way, add `0` for missing digits
- sort by units (ones), then tens, then hundreds, etc.
- remove the additional `0` after sorting to get the final sorted list.





### Example of Radix Sort

For an array, `[1, 46, 5, 904, 62, 74]`.


| Original | After Units Pass | After Tens Pass | After Hundreds Pass |
|----------|-----------------|-----------------|---------------------|
| 001      | 001             | 001             | 001                 |
| 046      | 062             | 904             | 005                 |
| 005      | 904             | 005             | 046                 |
| 904      | 074             | 046             | 062                 |
| 062      | 005             | 062             | 074                 |
| 074      | 046             | 074             | 904                 |

Final sorted: `[1, 5, 46, 62, 74, 904]` 



## 3. Practice Exercises

The following datasets were provided for practice:
1. 26, 93, 17, 77, 31, 44, 55, 20
2. 29, 72, 98, 13, 87, 65, 52, 51, 36
3. 36, 13, 100, 120, 63, 1, 57, 98, 5010, 162, 77, 0

