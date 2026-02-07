# Percolate Up (Heapify Up)

## Purpose
Percolate Up is used to restore the heap property
after inserting a new element into the heap.

## How it works
- The new element is inserted at the end of the heap
- It is compared with its parent
- If the heap property is violated, the element is swapped with its parent
- This process continues until the correct position is found

## Direction
Bottom → Top

## Time Complexity
O(log n)
