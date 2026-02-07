# Percolate Down (Heapify Down)

## Purpose
Percolate Down is used to restore the heap property by moving
a node downward in the heap.

It fixes the heap property in the subtree rooted at a given index.

## When it is used
- After deleting the root element (most common case)
- When an element at any index is replaced by another value
- While building a heap from an array (heapify operation)

## How it works
- Start from a given index `i` (often the root)
- Compare the node with its left and right children
- Swap the node with the appropriate child if the heap property is violated
- Continue this process until the node reaches its correct position

## Direction
Top → Bottom

## Applicable To
- Max Heap
- Min Heap

## Time Complexity
O(log n)

## Key Note
Percolate Down can be applied to **any internal node**, not only the root.
It restores the heap property for the subtree rooted at index `i`.
