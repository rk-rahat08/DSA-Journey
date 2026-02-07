# Insertion in Heap

## Purpose
Insertion in a heap is the process of adding a new element
while preserving the heap property.

## Steps Involved
1. Check whether the heap has reached its maximum capacity.
2. Insert the new element at the end of the heap.
3. Increase the size of the heap.
4. Apply Percolate Up to restore the heap property.

## Why Capacity Check is Required
The heap is implemented using a fixed-size array.
If the heap is full, inserting a new element would cause
out-of-bounds memory access, leading to undefined behavior.

## Heap Property Restoration
After insertion, the new element may violate the heap property
with its parent. Percolate Up is used to move the element
to its correct position.

## Time Complexity
O(log n)

## Applicable To
- Max Heap
- Min Heap
