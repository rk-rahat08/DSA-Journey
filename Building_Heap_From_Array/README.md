# Heapifying a Random Array (Build Heap)

## Purpose
Heapifying a random array converts an unsorted array into a valid heap
by restoring the heap property.

## Key Idea
Leaf nodes already satisfy the heap property.
Therefore, heapify is applied only to non-leaf (parent) nodes
using Percolate Down.

## Finding the Last Parent Node (0-based indexing)

- Last element index = `size - 1`
- Parent of any node `i` = `(i - 1) / 2`

Parent of the last node is calculated as:
((size - 1) - 1) / 2

Here,
- The **first `-1`** (`size - 1`) is because of **0-based indexing**
  (last element index in the array).
- The **second `-1`** comes from the **parent index formula**
  `(i - 1) / 2`.

So the expression becomes:
(size - 2) / 2

Hence, the index of the last parent node is `(size - 2) / 2`.

All indices after this represent leaf nodes and do not require heapification.

## Heapify Process
1. Start from the last parent node `(size - 2) / 2`
2. Apply Percolate Down
3. Move backward towards the root (index `0`)
4. Continue until the entire array satisfies the heap property

## Time Complexity
O(n)

## Applicable To
- Max Heap
- Min Heap
