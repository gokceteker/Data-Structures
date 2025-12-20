# Week 05 – Shunting Yard Algorithm (Infix to Postfix)

## Course
Data Structures

## Assignment Description
This assignment implements the Shunting Yard Algorithm to convert mathematical expressions from Infix notation to Postfix (Reverse Polish Notation). The implementation focuses on using a custom Stack data structure to manage operator precedence and parentheses.

## Technical Implementation
The code follows a modular approach by defining a Stack structure and associated operations:

- **Struct-Based Stack:** Encapsulates `items[]` and `top` pointer for better data management.
- **Precedence Handling:** A dedicated function defines the hierarchy of operators (`*`, `/` > `+`, `-`).
- **Space-Separated Output:** The postfix result is formatted with spaces for improved readability.

## Process Examples

**Example 1:** `a*b+c`  
- `a` is added to output.  
- `*` is pushed to stack.  
- `b` is added to output.  
- `+` has lower precedence than `*`, so `*` is popped to output and `+` is pushed.  
- `c` is added to output.  
- Remaining `+` is popped.  
**Result:** `a b * c +`

**Example 2:** `(a+b)*c`  
- `(` is pushed to stack.  
- `a` is added to output.  
- `+` is pushed to stack.  
- `b` is added to output.  
- `)` triggers pops until `(` is reached. `+` is added to output.  
- `*` is pushed to stack.  
- `c` is added to output.  
- Remaining `*` is popped.  
**Result:** `a b + c *`

## How to Run

Compile the source code:

```bash
gcc week5_shunting_yard.c -o week5
./week5
```
