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


    void percolateDownForMaxHeap(int i)
    {
        while(1)
        {
            // Initially, we assume the current node itself is the largest
            // and satisfies the max heap property.
            int largest=i;
            
            // Calculate indices of left and right children of node i
            int leftChild=(2*i)+1;
            int rightChild=(2*i)+2;
            
            
            // If the left child exists and is greater than the current largest(breaking max heap property)
            // update 'largest' to store the left child's index.
            if(leftChild<size && arr[leftChild]>arr[largest])
            {
                largest=leftChild;
            }
            
            
            // If the right child exists and is greater than the current largest(breaking max heap property)
            // update 'largest' to store the right child's index.
            if(rightChild<size && arr[rightChild]>arr[largest])
            {
                largest=rightChild;
            }
            
            
            // If 'largest' is still equal to 'i', it means the current node
            // is already greater than both of its children.
            // Hence, the Max Heap property is satisfied and we stop percolating.
            if(largest==i)
                break;
            
            
            // Swap the current node with the largest child so that
            // the largest value moves upward and max heap property is restored
            // at the current level.
            swap(arr[i], arr[largest]);
            
            // Update i to the child index after swapping so that
            // percolation can continue down the subtree if needed.
            i=largest;
        }
    }
    
    void percolateDownForMinHeap(int i)
    {
        while(1)
        {
            // Initially, we assume the current node itself is the smallest
            // and satisfies the min heap property.
            int smallest=i;
            
            // Calculate indices of left and right children of node i
            int leftChild=(2*i)+1;
            int rightChild=(2*i)+2;
            
            
            // If the left child exists and is smaller than the current smallest(breaking min heap property)
            // update 'smallest' to store the left child's index.
            if(leftChild<size && arr[leftChild]<arr[smallest])
            {
                smallest=leftChild;
            }
            
            
            // If the right child exists and is smaller than the current smallest(breaking min heap property)
            // update 'smallest' to store the right child's index.
            if(rightChild<size && arr[rightChild]<arr[smallest])
            {
                smallest=rightChild;
            }
            
            
            // If 'smallest' is still equal to 'i', it means the current node
            // is already smaller than both of its children.
            // Hence, the Min Heap property is satisfied and we stop percolating.
            if(smallest==i)
                break;
            
            
            // Swap the current node with the smallest child so that
            // the smallest value moves upward and min heap property is restored
            // at the current level.
            swap(arr[i], arr[smallest]);
            
            // Update i to the child index after swapping so that
            // percolation can continue down the subtree if needed.
            i=smallest;
        }
    }
    
};

int main() 
{
  
    return 0;
}
