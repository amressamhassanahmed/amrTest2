#include "Stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void CreateStack(Stack *s){
	s->top = NULL;
}

int StackEmpty(Stack   * s){
	return (s->top == NULL);
}


int Stackfull(Stack    s){
	return (0);
}


void Push(entrytype item, Stack*s){
	Node *p = (Node *)malloc(sizeof(Node));
	p->info = item;	  
	p->next = s->top;
	s->top = p;
}

void Pop(entrytype *item, Stack *s){
	Node *pn;
	*item = s->top->info;
	
	pn= s->top;
	s->top = s->top->next;
	free(pn);
}

void ClearStack(Stack *s){
	Node *q;
	while (s->top){
		q=s->top;
		s->top= s->top->next;
		free(q);
	}
}


