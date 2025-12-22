# Week 08 – Graph Clustering Using Adjacency Matrix

## Course
Data Structures 

## Assignment Description
In this assignment, clusters (connected components) are extracted from a graph represented as an adjacency matrix. The implementation uses the Depth First Search (DFS) algorithm written in the C programming language.

## Graph Representation
- The graph is represented using an adjacency matrix.
- Each vertex is represented by an index starting from 0.
- An edge between two vertices is indicated by a value of 1 in the matrix.

## Algorithm Description
- A visited array is used to keep track of visited vertices.
- DFS traversal is applied starting from each unvisited vertex.
- Each DFS traversal identifies a connected component (cluster).
- The process continues until all vertices are visited.

## Technologies Used
- Programming Language: C  
- Data Structure: Graph (Adjacency Matrix)  
- Algorithm: Depth First Search (DFS)

## Compilation and Execution
```bash
gcc week8_graph_clustering.c -o week8
./week8
```

## Sample Run
Input:
5
0 1 0 0 0
1 0 0 0 0
0 0 0 1 1
0 0 1 0 1
0 0 1 1 0

Output:
Clusters in the graph:
Cluster 1: 0 1
Cluster 2: 2 3 4
