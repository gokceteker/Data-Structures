# Week 06 – Binary Tree and Pre-order Traversal

## Course
Data Structures

## Assignment Description
This assignment involves creating a basic Binary Tree structure in C and implementing the Pre-order Traversal algorithm.  
The implementation follows the hierarchical structure provided in the course examples.

## Pre-order Traversal Logic
In Pre-order traversal, nodes are visited in a specific sequence: Root → Left Subtree → Right Subtree.  
For the tree implemented in this project (nodes 1 to 7), the expected output is: `1 2 4 5 3 6 7`

## Why Use Pre-order Traversal?
Pre-order traversal is specifically preferred in data structures for several reasons:

- **Tree Duplication:** It is the primary method used to create a complete copy of an existing tree, as it processes the root node before its children.
- **Expression Trees:** Used by compilers to generate Prefix notation (Polish notation) from mathematical expression trees.
- **Hierarchy Representation:** It is ideal for displaying hierarchical structures, such as file system directories, where the parent folder must be listed before its contents.

## How to Run

Compile the code:
```bash
gcc week6_tree_preorder.c -o week6
./week6
```
