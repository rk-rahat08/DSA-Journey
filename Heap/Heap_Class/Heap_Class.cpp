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
};

int main() 
{
  
  return 0;
}
