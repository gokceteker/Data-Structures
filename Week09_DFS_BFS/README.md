# Week 09 – DFS and BFS Traversal

## Course
Data Structures 

## Assignment Description
This assignment implements Depth First Search (DFS) and Breadth First Search (BFS) traversal algorithms on a graph represented using an adjacency matrix. The program demonstrates graph traversal techniques using the C programming language.

## Graph Representation
- The graph is represented using an adjacency matrix.
- Vertices are indexed starting from 0.
- A value of 1 indicates an edge between two vertices.

## Algorithm Description
- **DFS (Depth First Search)** explores as far as possible along each branch before backtracking.
- **BFS (Breadth First Search)** explores all neighboring vertices at the current level before moving to the next level.
- A visited array is used to track visited vertices.

## Technologies Used
- Programming Language: C  
- Data Structure: Graph (Adjacency Matrix)  
- Algorithms: DFS and BFS  

## Compilation and Execution
```bash
gcc week9_dfs_bfs.c -o week9
./week9
```

## Sample Run
Input:
5
0 1 1 0 0
1 0 0 1 0
1 0 0 1 1
0 1 1 0 0
0 0 1 0 0
0

Output:
DFS Traversal: 0 1 3 2 4
BFS Traversal: 0 1 2 3 4
