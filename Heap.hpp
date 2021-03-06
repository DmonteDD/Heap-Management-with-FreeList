#ifndef STRUCTS_HEADER  //begin header guard
#define STRUCTS_HEADER

#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <math.h>
#include "LinkedList.hpp"
using namespace std;

class Heap 
{
    public:
    int size,liveNodes=0;
    LinkedList* FreeList;
    Node* new_node;
    Heap(int heapsize);
    int allocate(int numBytes);
    int free(int addrs,int sizef);
    void stats();
};
#endif