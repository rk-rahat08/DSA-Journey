#include <bits/stdc++.h>
using namespace std;

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
