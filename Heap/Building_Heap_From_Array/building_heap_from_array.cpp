#include <bits/stdc++.h>
using namespace std;


void build_heap_from_array(int arr[], int size)
{
    // i >= 0 is used because Percolate Down does not check the parent
    // of the current node and only heapifies downward.
    // If index 0 is skipped, the root would never be heapified.
    for(int i=(size-2)/2; i>=0; i--)
    {
        
        // At this point, the left and right children of index i
        // already form valid heaps. However, the element at index i
        // may be out of place and violate the heap property.
        // Percolate Down is used to move this element downward
        // until the heap property is restored at index i.
        percolateDown(i);
    }
}

int main()
{

    return 0;
}
