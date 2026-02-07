# Deletion in Heap

## Purpose
Deletion in a heap is the process of removing an element
while preserving the heap property.

## Which Element is Deleted
- In **Max Heap**, the root element (maximum) is most commonly deleted.
- In **Min Heap**, the root element (minimum) is most commonly deleted.
- **However, any element at a given index can also be deleted** by
  replacing it with the last element and restoring the heap property.

## Steps Involved
1. Check whether the heap is empty.
2. Identify the index of the element to be deleted (commonly the root).
3. Replace that element with the last element in the heap.
4. Decrease the heap size.
5. Apply **Percolate Down** (or Percolate Up if required) to restore the heap property.

## Why Percolate Down is Needed
After replacement, the heap property may be violated with respect
to the children of the modified node. Percolate Down moves the element
downward until the heap property is restored.

## Time Complexity
O(log n)

## Applicable To
- Max Heap
- Min Heap
