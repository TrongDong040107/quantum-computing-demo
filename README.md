# Tower of Hanoi

## 1. Introduction

This repository contains two implementations of the Tower of Hanoi problem:

- Recursive implementation
- Non-recursive implementation using stack

The problem uses three rods:

- `A`: source rod
- `B`: auxiliary rod
- `C`: destination rod

The goal is to move all disks from rod `A` to rod `C`.

## 2. Rules

1. Only one disk can be moved at a time.
2. Only the top disk of a rod can be moved.
3. A larger disk cannot be placed on top of a smaller disk.

---

## 3. Recursive Algorithm

To move `n` disks from rod `A` to rod `C`:

1. Move `n - 1` disks from `A` to `B`.
2. Move disk `n` from `A` to `C`.
3. Move `n - 1` disks from `B` to `C`.

The base case occurs when `n = 1`.

The minimum number of moves is:

`2^n - 1`

### Complexity

- Time complexity: `O(2^n)`
- Space complexity: `O(n)`

File:

`recursive.cpp`

---

## 4. Non-recursive Algorithm

The non-recursive version uses a stack to simulate the recursive call stack.

Each task stores:

- Number of disks
- Source rod
- Auxiliary rod
- Destination rod
- Current processing state

The algorithm repeatedly takes a task from the stack until all disk movements are completed.

### Complexity

- Time complexity: `O(2^n)`
- Space complexity: `O(n)`

File:

`non_recursive.cpp`

---

## 5. Test Cases

### Test Case 1

Input:

```text
1
```

Output:

```text
Move disk 1 from A to C
```

Number of moves:

`1`

---

### Test Case 2

Input:

```text
2
```

Output:

```text
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C
```

Number of moves:

`3`

---

### Test Case 3

Input:

```text
3
```

Output:

```text
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

Number of moves:

`7`

---

## 6. Compile and Run

Compile recursive version:

```bash
g++ recursive.cpp -o recursive
./recursive
```

Compile non-recursive version:

```bash
g++ non_recursive.cpp -o non_recursive
./non_recursive
```

---

## 7. Expected Result

Both implementations should produce the same sequence of moves for the same number of disks.
