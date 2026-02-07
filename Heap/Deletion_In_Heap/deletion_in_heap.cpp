#include <bits/stdc++.h>
using namespace std;


// Array representation of Heap (0-based indexing)
// Index of parent node i      = (i - 1) / 2
// Index of left child node i  = 2 * i + 1
// Index of right child node i = 2 * i + 2


class Heap
{
public:

    int * arr; //pointer to dynamic array to store heap elements
    int size; //current number of elements
    int capacity; //maximum allowed elements

    Heap(int capacity)
    {
        this->capacity=capacity;
        size=0;
        arr=new int[capacity];
    }
    void deletion_in_heap(int index)
    {
        if(size==0)
        {
            cout<<"Heap is empty!";
            return;
        }
        
        if(index <0 || index>=size)
        {
            cout<<"Invalid index!";
            return;
        }
        
        // Replace the element to be deleted with the last element
        swap(arr[index], arr[size-1]);
        
        // Reduce the heap size so that the last element
        // (which contains the deleted value) is no longer
        // considered part of the heap.
        size--;
        
        // After deletion or replacement, the element may violate the heap property
        // with respect to its children. Percolate Down is used to move the
        // element downward until the heap property is restored.
        percolateDown(index);
    }
};
