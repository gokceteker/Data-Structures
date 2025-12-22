# Week 10 – Tree Creation Using Array

## Course
Data Structures 

## Assignment Description
This assignment demonstrates the creation and representation of a binary tree using an array-based structure. The program shows how parent-child relationships are derived using index calculations.

## Tree Representation
- The tree is stored in a one-dimensional array.
- For a node at index i:
  - Left child is located at index (2*i + 1)
  - Right child is located at index (2*i + 2)
- This representation is commonly used for complete binary trees.

## Algorithm Description
1. Read the number of nodes.
2. Store tree elements in an array.
3. Display the index-value mapping of the tree.
4. Derive and display parent-child relationships using array indices.

## Technologies Used
- Programming Language: C  
- Data Structure: Binary Tree (Array Representation)

## Compilation and Execution
```bash
gcc week10_tree_array.c -o week10
./week10
```

## Sample Run
Input:
7
10 20 30 40 50 60 70

Output:
Index   Value
0       10
1       20
2       30
3       40
4       50
5       60
6       70

Parent-Child Relationships:
Parent 10 -> Left Child 20
Parent 10 -> Right Child 30
Parent 20 -> Left Child 40
Parent 20 -> Right Child 50
Parent 30 -> Left Child 60
Parent 30 -> Right Child 70
