# Longest Valid Parentheses (C++)

## Overview

This project implements a **stack-based algorithm** to find the **longest valid (well-formed) parentheses substring** from a given input string.

The program accepts a string containing only the characters `(` and `)` and prints the longest valid parentheses substring.

---

## Requirements

- C++11 or later
- GNU C++ Compiler (`g++`)

Check whether `g++` is installed:

```bash
g++ --version
```

---

## Project Structure

```
.
├── longest_valid_parenthesis.cpp
└── README.md
```

---

## Compile

Open a terminal in the project directory and run:

```bash
g++ -std=c++11 longest_valid_parenthesis.cpp -o longestValidParentheses
```

If the compilation is successful, an executable named **longestValidParentheses** will be created.

---

## Run

### Linux / macOS

```bash
./longestValidParentheses
```

### Windows (Command Prompt)

```cmd
longestValidParentheses.exe
```

---

## Sample Execution

### Example 1

```text
$ ./longestValidParentheses

Please provide the input string >
(() 

The result string will be : ()
```

---

### Example 2

```text
$ ./longestValidParentheses

Please provide the input string >
)()())

The result string will be : ()()
```

---

### Example 3

```text
$ ./longestValidParentheses

Please provide the input string >
((())())

The result string will be : ((())())
```

---

## Algorithm

The program uses a **stack of indices**.

### Steps

1. Push `-1` onto the stack as the initial base index.
2. Traverse the input string from left to right.
3. If the current character is `'('`, push its index onto the stack.
4. If the current character is `')'`:
   - Pop the top index.
   - If the stack becomes empty, push the current index as the new base.
   - Otherwise:
     - Calculate the current valid substring length.
     - Update the maximum length and starting index if a longer valid substring is found.
5. Return the longest valid substring using `substr()`.

---

## Example

### Input

```text
)()())
```

### Stack Operations

| Character | Action |
|-----------|--------|
| `)` | Pop → Empty → Push current index |
| `(` | Push index |
| `)` | Pop → Valid substring found |
| `(` | Push index |
| `)` | Pop → Update longest substring |
| `)` | Pop → Empty → Push current index |

### Output

```text
()()
```

---

## Complexity Analysis

| Metric | Complexity |
|---------|------------|
| Time Complexity | **O(n)** |
| Space Complexity | **O(n)** |

where **n** is the length of the input string.

---

## Input Constraints

- `0 <= s.length <= 3 × 10^4`
- The string contains only:
  - `(`
  - `)`

---

## Author

**Sunny Kumar**