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

- `banker.cpp` : C++ source code that implements the Banker's algorithm.
- `README.md` : This file describing the project.

## How to Compile and Run

1. Open a terminal (Linux/Unix environment).
2. Compile:

```bash
g++ banker.cpp -o banker
```

3. Run:

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
