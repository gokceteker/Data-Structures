# Week 04 – Advanced Linked List Operations

## Course
Data Structures

## Assignment Description
This repository contains implementations for Doubly Linked Lists (DLL) and Circular Linked Lists (CLL) in C.  
The assignment focuses on advanced pointer manipulation, recursive memory management, and structural differences between linked list types.

## Implemented Features

### 1. Doubly Linked List (DLL)
- **Insert at End:** Adds a new node to the tail of the list while maintaining both `next` and `prev` pointers.  
- **Insert After:** Searches for a target value and inserts a new node immediately after it, correctly updating pointers to maintain list integrity.  
- **Recursive Deletion:** A memory-efficient function that traverses to the end of the list and frees nodes during the backtracking phase of recursion to ensure no memory leaks occur.  

### 2. Circular Linked List (CLL)
- **Tail-Based Implementation:** Uses a tail pointer instead of a head to provide `O(1)` access to both the beginning (`tail->next`) and the end of the list.  
- **Continuous Traversal:** Implementation of a display function that uses a `do-while` loop to navigate the circular structure without falling into an infinite loop.  

## Key Concepts & Analysis

### Recursive Deletion Logic
The `deleteAllRecursive` function follows a Head-Recursion pattern.  
It reaches the base case (`NULL`) first and then executes `free(*head)` as the function calls pop off the stack.  
This ensures we don't access a node's next pointer after it has been freed.

### Circular vs. Normal Linked List

| Feature | Normal Linked List | Circular Linked List |
|---------|------------------|--------------------|
| Termination | Ends with a `NULL` pointer | Last node points back to the head |
| Traversal | Linear; must restart from head | Continuous; can start from any node |
| Sorting | Standard algorithms apply | Requires reference check to avoid infinite loops |

## How to Run

Compile the code:
```bash
gcc week4_double_circular_linked_list.c -o week4 -lm
./week4
```
