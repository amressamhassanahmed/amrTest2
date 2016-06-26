#include "Stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "global.h"
#include <string.h>


void CreateQueue(Queue *pq){
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}

int QueueEmpty(Queue *pq){
	return (pq->front == NULL);
}




int QueueFull(Queue *pq){
	return 0;
}


void Enqueue(Queue *pq, QueueEntry item){

	Nodequeue *p = (Nodequeue *)malloc(sizeof(Nodequeue));
	p->info = item;	 
	p->next= NULL;
	if (!pq->rear) 	
		pq->front = p;
	else 			
	pq->rear->next = p;
	pq->rear = p;
	pq->size++;
}

void dequeue(Queue *pq, QueueEntry *item){
	*item = pq->front->info;
	Nodequeue *p = pq->front;
	pq->front = pq->front->next;
	free(p);
	if (!pq->front) 
		pq->rear = NULL;

	pq->size--;
}

int QueueSize(Queue *pq){
	return pq->size;
}
/*
void TraverseQueue(Queue* pq, void(*pf)(QueueEntry)){
	Nodequeue *p = pq->front;
	for (i = pq->front, siz = 0; siz<pq->size; siz++){

		(*pf)(pq->entry[i]);

		
	}
}*/
