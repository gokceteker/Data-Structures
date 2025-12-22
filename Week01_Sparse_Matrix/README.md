# Week 01 – Sparse Matrix Transformation

## Course
Data Structures

## Assignment Description
In this assignment, a sparse matrix is transformed into a compact 3-tuple representation using the C programming language. A sparse matrix is defined as a matrix in which the majority of elements are zero. Instead of storing all elements, only the non-zero elements and their positions are stored in order to optimize memory usage.

## Sparse Matrix Representation
The sparse matrix is represented in a three-column format:

- Row index  
- Column index  
- Value  

The first row of the representation contains the following information:
- Total number of rows in the original matrix
- Total number of columns in the original matrix
- Total number of non-zero elements

## Algorithm Description
The program performs the following steps:

1. Reads the number of rows and columns of the matrix from the user.
2. Validates that the matrix size does not exceed the predefined limit (10x10).
3. Reads all matrix elements and counts the number of non-zero elements.
4. Creates a sparse matrix with (number of non-zero elements + 1) rows and three columns.
5. Stores the row index, column index, and value of each non-zero element.
6. Displays the sparse matrix in 3-tuple format.

## Technologies Used
- Programming Language: C  
- Data Structure: Two-Dimensional Array  
- Algorithm: Sparse Matrix Transformation

## Compilation and Execution
To compile and run the program:

```bash
gcc sparse_matrix.c -o sparse
./sparse
```

## Sample Run
Input:
3
3
0 5 0
0 0 0
0 0 8

Output:
Sparse Matrix (3-tuple representation):
Row    Col    Value
3      3      2
0      1      5
2      2      8
