# Week 03 – Infix to Postfix Conversion (Shunting Yard Algorithm)

## Course
Data Structures 

## Assignment Description
In this assignment, an infix expression is converted into a postfix expression using the Shunting Yard algorithm. The algorithm uses a stack to manage operators and parentheses while maintaining correct operator precedence and associativity.

## Algorithm Description
The Shunting Yard algorithm processes the infix expression from left to right and applies the following rules:

1. Operands are directly added to the postfix expression.
2. Operators are pushed onto the stack based on their precedence.
3. Operators with higher or equal precedence on the stack are popped before pushing a new operator.
4. Left parentheses are pushed onto the stack.
5. When a right parenthesis is encountered, operators are popped until the matching left parenthesis is found.
6. After processing the entire infix expression, remaining operators are popped from the stack and added to the postfix expression.

## Technologies Used
- Programming Language: C  
- Data Structure: Stack (Array-based)  
- Algorithm: Shunting Yard Algorithm

## Compilation and Execution
To compile and run the program:

```bash
gcc week3_shunting_yard.c -o shunting
./shunting
```

## Sample Run
Input:
A+B*(C-D)

Output:
ABCD-*+
