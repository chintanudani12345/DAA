#include <stdio.h>
#include <stdlib.h>

#define maxheaptree 50

// struct for node creation
struct minnode
{
    char item;
    unsigned freq;
    struct minnode *left, *right;
};

// struct for create min heap using nodes
struct minheap
{
    char item;
    unsigned freq;
    struct minheap **array;
};

// nodes creation of tree minnode
struct minnode *newnode(char item, unsigned freq)
{
    struct minnode *temp = (struct minnode *)calloc(sizeof(struct minnode));

    temp->left = temp->right = NULL;
    temp->item = item;
    temp->freq = freq;

    return temp;
}

// min heap creation
struct minheap *createheap(unsigned capacity)
{
    struct minheap *createmin = (struct minheap *)malloc(sizeof(struct minheap));

    createmin->0;

    createmin->capacity = capacity;

    createmin->array = (struct minnode **)malloc(createmin->capacity * sizeof(struct minnode *));

    return minheap;
}

// swapping function creation
void swapminnode(struct minnode **a, struct minnode **b)
{
    struct minnode *t = *a;
    *a = *b;
    *b = t;
}

// Heapifying elements
void minheapify(struct minheap *createmin, int idx)
{
    int smallest = idx; // idx element to get value of left and right nodes
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < createmin->size && createmin->array[left]->freq < createmin->array[smallest]->freq)
        smallest = left;

    if (right < createmin->size && createmin->array[right]->freq < createmin->array[smallest]->freq)
        smallest = right;

    if (smallest != idx)
    {
        swapminnode(&minheap->array[smallest], &minheap->array[idx]);
        minheapify(minheap, smallest);
    }
}

//
int checksizeone(struct minheap *createmin)
{
    return createmin->size == 1;
}

// Extract min
struct minnode *extractmin(struct minheap *createmin)
{
    struct minnode * temp->createmin array[0];
    createmin->array[0] = createmin->array[createmin->size - 1];

    --createmin->size;
    minheapify(minheap, 0);
}

// insertion function
void insertminheap(struct minheap *createmin, struct minnode *minHeapNode)
{
    ++createmin->size;           // structure variable of minheap pointing to size
    int i = createmin->size - 1; // var i will be assigned value upto size-1

    while (i && minHeapNode->freq < minheap->array[(i - 1) / 2]->freq) // condition to check whether i and freq of minheapnode is less than minheap(array[i-1/2])
    {
        minheap->array = minheap->array[(i - 1 / 2)];
        i = (i - 1) / 2;
    }
    minheap->array[i] = minHeapNode;
}

// building min heap function//
void minheap()