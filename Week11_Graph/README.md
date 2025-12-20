# Week 11 – Graph Clustering and Separation

## Course
Data Structures

## Assignment Description
In this assignment, we explore how nodes in a graph are grouped into clusters and how these clusters are separated based on connectivity.

## How it Works
The provided implementation uses Connected Components analysis via Depth First Search (DFS):
- **Traversal:** The algorithm starts at an unvisited node and visits all reachable nodes using DFS.  
- **Cluster Assignment:** All nodes reachable in a single DFS pass are assigned to the same cluster.  
- **Separation:** If a node cannot be reached from the current traversal, it belongs to a different, separate cluster.

## Clustering Criteria
- **Intra-cluster Edges:** High density of connections within the same group.  
- **Inter-cluster Edges:** No connections (in this basic model) or very sparse connections (in advanced modularity models) between different groups.

## How to Run
Compile:
```bash
gcc week11_graph_clustering.c -o week11
./week11
