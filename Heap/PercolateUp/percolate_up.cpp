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
    
    
    void percolateUpForMaxHeap(int i)
    {
        // When i = 1 or i = 2, the parent index becomes 0 (root).
        // If the Max Heap property is violated, the value at index i
        // is swapped with its parent and may eventually reach the root.
        //
        // The condition i >= 1 ensures that percolation stops
        // once we reach the root (index 0).
        // If i becomes 0 and the loop still runs, the parent index
        // (i - 1) / 2 becomes -1, leading to invalid memory access
        // and undefined behavior.
        while(i>=1 && arr[(i-1)/2]<arr[i])
        {
            swap(arr[(i-1)/2], arr[i]);
            i=(i-1)/2;
        }
    }
    
    void percolateUpForMinHeap(int i)
    {
        // When i = 1 or i = 2, the parent index becomes 0 (root).
        // If the Min Heap property is violated, the value at index i
        // is swapped with its parent and may eventually reach the root.
        //
        // The condition i >= 1 ensures that percolation stops
        // once we reach the root (index 0).
        // If i becomes 0 and the loop still runs, the parent index
        // (i - 1) / 2 becomes -1, leading to invalid memory access
        // and undefined behavior.
        while(i>=1 && arr[(i-1)/2]>arr[i])
        {
            swap(arr[(i-1)/2], arr[i]);
            i=(i-1)/2;
        }
    }
};

int main() 
{
  
   return 0;
}
