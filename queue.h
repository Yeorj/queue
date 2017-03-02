#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdlib.h>

typedef double data;    // Change "double" to prefer datatype

typedef data* dataPtr;

struct Node{
    data element;
    struct Node * next;
};

typedef struct Node Node;
typedef Node* NodePtr;

typedef struct{
    NodePtr first;
    NodePtr last;
    long size;
} Queue;
typedef Queue* QueuePtr;

void initQueue(Queue);
NodePtr getFirst(Queue);
NodePtr peek(Queue);
void enqueue(data, QueuePtr);
Node dequeue(QueuePtr);

#endif // _QUEUE_H_
