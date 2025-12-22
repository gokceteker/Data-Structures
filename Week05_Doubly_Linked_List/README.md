# Week 05 – Doubly Linked List Operations

## Course
Data Structures 

## Assignment Description
In this assignment, a Doubly Linked List is implemented using the C programming language. The implementation supports insertion at a specific position, deletion from a specific position, and traversal of the list.

## Doubly Linked List Description
A doubly linked list is a linear data structure in which each node contains three parts:
- Data
- Pointer to the previous node
- Pointer to the next node

This structure allows traversal in both forward and backward directions.

## Algorithm Description
The program supports the following operations:

1. **Insertion at a specific position**  
   A new node is inserted at the position specified by the user. The previous and next pointers of adjacent nodes are updated accordingly.

2. **Deletion at a specific position**  
   The node at the specified position is removed from the list, and memory is deallocated.

3. **Traversal**  
   The list is traversed from the head node to the end, displaying all elements.

## Technologies Used
- Programming Language: C  
- Data Structure: Doubly Linked List  

## Compilation and Execution
To compile and run the program:

```bash
gcc week5_doubly_linked_list.c -o week5
./week5
```

## Sample Run
1. Insert at position
2. Delete at position
3. Traverse
4. Exit

Input:
1
10
1
1
20
2
3

Output:
Doubly Linked List: 10 20
