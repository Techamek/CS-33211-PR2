# CS-33211-PR2

## Author

- David Austin

# Banker's Algorithm Project

This project implements **Banker's Algorithm** in C++ for deadlock avoidance.

## Problem Description

Given:
- 5 Processes (P0 - P4)
- 3 Resource Types (A, B, C)
- Allocation, Maximum, and Available resource matrices

Determine:
- Whether the system is in a **safe state**
- If yes, output the **safe sequence**

## Files

- `banker.cpp` : C++ source code that implements the Banker's algorithm by reading from an input file.
- `input.txt` : Input file containing the resource Allocation, Max, and Available matrices.
- `README.md` : This file describing the project.

## How to Compile and Run

1. Open a terminal (Linux/Unix environment).
2. Ensure `banker.cpp` and `input.txt` are in the same directory.
3. Compile:

```bash
g++ banker.cpp -o banker
```

4. Run:

```bash
./banker
```

## Example Output

```text
System is in a safe state.
Safe sequence is: P1 -> P3 -> P4 -> P0 -> P2
```

## Requirements

- C++ compiler (g++)
- Linux or Unix environment (or use VirtualBox if on Windows)

## Notes

- The program reads `input.txt` for resource matrices.
- Format of `input.txt`:
  ```
  5 3
  Allocation
  0 1 0
  2 0 0
  3 0 2
  2 1 1
  0 0 2
  Max
  7 5 3
  3 2 2
  9 0 2
  2 2 2
  4 3 3
  Available
  3 3 2
  ```

