# Week 02 – Big O Analysis

## Course
Data Structures

## Assignment Description
In this assignment, the time complexity of seven given algorithms is analyzed using Big O notation.
Each algorithm is implemented in C exactly as provided in the course material, and its theoretical
time complexity is evaluated.

## Algorithm Analysis

### Algo1 – O(n)
A single loop that runs from 1 to n.
The number of operations increases linearly with the input size.

### Algo2 – O(n²)
Two nested loops, each running from 1 to n.
The total number of operations is proportional to n × n.

### Algo3 – O(log n)
The loop variable is multiplied by 2 in each iteration.
This results in logarithmic growth in the number of iterations.

### Algo4 – Non-terminating
In this algorithm, the loop variable starts at 1 and is divided by 5 in each iteration.
Since the value of the variable never increases to reach n, the loop does not terminate.
For this reason, the algorithm is theoretically analyzed but commented out during execution.

### Algo5 – O(log n)
Although the loop condition involves n³, the loop variable grows exponentially by a factor of 5.
Ignoring constants and exponents in Big O notation, the time complexity remains logarithmic.

### Algo6 – O(√n)
The loop continues while i² ≤ n.
This condition causes the loop to run approximately √n times.

### Algo7 – O(√n)
The value of k increases as the sum of consecutive integers.
Since the sum grows quadratically, the number of iterations grows proportionally to √n.

## Files
- `week2_algorithms.c` : C implementation of the given algorithms.

## Notes
The C code is provided to demonstrate the structure of the algorithms.
Time complexity results are based on theoretical Big O analysis.

## Compilation and Execution
To compile and run the program:

```bash
gcc week2_algorithms.c -o week2
./week2
```
