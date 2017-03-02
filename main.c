#include "queue.h"
#include <stdio.h>

int main(){

    Queue queue;
    initQueue(queue);

    data test = 69.69;
    enqueue(test, &queue);
    printf("\nFirst element should be 69.69, it is %f", queue.first->element);
    Node retNode = dequeue(&queue);
    printf("\nSize of queue should be 0, it is %d", queue.size);
    printf("\nThe node contained: %f", retNode.element);
    return 0;
}
