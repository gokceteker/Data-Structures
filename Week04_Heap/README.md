# Week 04 – Max Heap and Min Heap Implementation

## Course
Data Structures 

## Assignment Description
In this assignment, Max Heap and Min Heap data structures are implemented using the C programming language. The implementation is based on an array representation of binary heaps and demonstrates heap construction using heapify operations.

## Heap Description
A heap is a complete binary tree that satisfies the heap property:

- **Max Heap**: The value of each parent node is greater than or equal to its children.
- **Min Heap**: The value of each parent node is less than or equal to its children.

The heap is stored using an array where:
- Left child index = 2i + 1
- Right child index = 2i + 2

## Algorithm Description
The program performs the following steps:

1. Reads the number of elements and the elements themselves.
2. Builds a Max Heap using the max-heapify procedure.
3. Builds a Min Heap using the min-heapify procedure.
4. Displays both heap structures.

## Technologies Used
- Programming Language: C  
- Data Structure: Binary Heap (Array-based)  
- Algorithms: Heapify, Heap Construction

## Compilation and Execution
To compile and run the program:

```bash
gcc week4_heap.c -o week4
./week4
```

## Sample Run
Input:
6
10 20 5 6 1 8

Output:
Max Heap: 20 10 8 6 1 5
Min Heap: 1 6 5 10 20 8
