#include "queue.h"
#include <stdio.h>
void initQueue(Queue queue){
    queue.size = 0;
    queue.first = 0;
    queue.last = 0;
}

NodePtr getFirst(Queue queue){
    return queue.first;
}

NodePtr peek(Queue queue){
    return (queue.first)->next;
}

void enqueue(data element, QueuePtr queue){

    if (queue->size == 0){
        queue->first = (NodePtr) malloc(sizeof(Node));
        queue->first->element = element;
        queue->first->next = 0;
        queue->last = queue->first;
    }else{
        queue->last->next = (NodePtr) malloc(sizeof(Node));
        queue->last = queue->last->next;
        queue->last->element = element;
        queue->last->next = 0;
    }
    queue->size += 1;
}

Node dequeue(QueuePtr queue){
    Node retVal;
    if (queue->size <= 0 || queue == 0){
       retVal = (Node) {.element = 0, .next = 0};
   }else{
       retVal = (Node) {.element = (getFirst(*queue))->element, .next = (getFirst(*queue))->next};
       NodePtr first = getFirst(*queue);
       queue->first = queue->first->next;
       free(first);
       first = 0;
       queue->size -= 1;
   }
   return retVal;
}
