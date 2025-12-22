# Week 02 – Tower of Hanoi

## Course
Data Structures 

## Assignment Description
In this assignment, the Tower of Hanoi problem is solved using a recursive algorithm implemented in the C programming language. The problem demonstrates the concept of recursion and divide-and-conquer strategy by moving disks between rods under specific constraints.

## Problem Definition
The Tower of Hanoi consists of three rods and a number of disks of different sizes. Initially, all disks are placed on the source rod in ascending order of size. The objective is to move all disks to the destination rod following these rules:

- Only one disk can be moved at a time.
- A disk can only be placed on top of a larger disk.
- All disks must be moved using an auxiliary rod.

## Algorithm Description
The solution uses a recursive approach with the following logic:

1. Move the top (n-1) disks from the source rod to the auxiliary rod.
2. Move the largest disk from the source rod to the destination rod.
3. Move the (n-1) disks from the auxiliary rod to the destination rod.

This process continues recursively until only one disk remains.

## Technologies Used
- Programming Language: C  
- Algorithm: Recursion (Tower of Hanoi)

## Compilation and Execution
To compile and run the program:

```bash
gcc week2_hanoi.c -o hanoi
./hanoi
```

## Sample Run
Input:
3

Output:
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
