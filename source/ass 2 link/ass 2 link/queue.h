#include "global.h"

typedef Customer QueueEntry;
typedef struct Nodequeue {
	entrytype info;
	 Nodequeue *next;
}Nodequeue;


typedef struct Queue{
	Nodequeue *front;
	Nodequeue *rear;
	int size;
}Queue;

void CreateQueue(Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
void Enqueue(Queue *, entrytype );
void dequeue(Queue *, entrytype *);
int QueueSize(Queue *);
