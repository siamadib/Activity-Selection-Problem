# 📅 Activity Selection Problem

A C++ implementation of the **Activity Selection Problem** using a greedy algorithm to select the maximum number of non-overlapping workshops.

## 📌 Problem Statement

Given a list of workshops with their **name**, **start time**, and **finish time**, select the maximum number of workshops that can be attended without any time conflicts.

The program follows the greedy strategy of always selecting the workshop that finishes earliest.

## 🚀 Algorithm

1. Read the number of workshops.
2. Store each workshop's name, start time, and finish time.
3. Sort all workshops based on their finish times.
4. Select the first workshop.
5. Traverse the remaining workshops:
   - If a workshop starts after or at the finish time of the last selected workshop, select it.
6. Display the maximum number of workshops and their names.

## 💻 Technologies Used

- C++
- STL (`vector`, `algorithm`)
- Structures (`struct`)

## 📥 Input Format

```
n
WorkshopName StartTime FinishTime
WorkshopName StartTime FinishTime
...
```

### Example Input

```
6
A 1 2
B 3 4
C 0 6
D 5 7
E 8 9
F 5 9
```

## 📤 Output

```
Maximum Workshops = 4
Selected: A,B,D,E
```

## ⏱️ Time Complexity

- Sorting: **O(n log n)**
- Selection: **O(n)**
- **Overall:** `O(n log n)`

## 💾 Space Complexity

- **O(n)** (for storing workshops and selected workshops)

## 📚 Concepts Used

- Greedy Algorithm
- Activity Selection
- Sorting
- Structures (`struct`)
- STL Vector

## 🎯 Learning Outcome

This project demonstrates how a greedy strategy can efficiently solve optimization problems by making the locally optimal choice at each step.
