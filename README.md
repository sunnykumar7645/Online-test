# Online-test
# Longest Valid Parentheses (C++)

This program finds the **longest valid (well-formed) parentheses substring** from a given input string.

## Prerequisites

- C++ compiler (GCC/G++)
- C++11 or later

Verify that g++ is installed:

```bash
g++ --version
```

---

## Project Structure

```
.
├── main.cpp
└── README.md
```

---

## Compile

Use the following command to compile the program:

```bash
g++ -std=c++11 -o longestValidParentheses main.cpp
```

or with optimizations:

```bash
g++ -std=c++17 -O2 -o longestValidParentheses main.cpp
```

This creates an executable named:

```
longestValidParentheses
```

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

## Example

### Input

```
)()())
```

### Output

```
()()
```

---

### Another Example

Input

```
(()
```

Output

```
()
```

---

### Another Example

Input

```
((())())
```

Output

```
((())())
```

---

## Algorithm

The solution uses a **stack of indices**.

- Push the index of every `'('`.
- Pop when a `')'` is encountered.
- If the stack becomes empty, push the current index as the new base.
- Otherwise, calculate the current valid substring length using:

```cpp
length = currentIndex - stack.top();
```

- Track the maximum length and starting index.
- Return the substring using:

```cpp
return s.substr(startIndex, maxLength);
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

where `n` is the length of the input string.