
#include "stdafx.h"
#include <stdio.h>

#include "global.h"




typedef struct  Node {
	entrytype 	info;
	Node *next;

}Node;

typedef struct Stack{
	Node *top;
}Stack;

void CreateStack(Stack *);
int StackEmpty(Stack*);
int StackFull(Stack);
void Push(entrytype, Stack*);
void Pop(entrytype*, Stack*);
void ClearStack(Stack *);


