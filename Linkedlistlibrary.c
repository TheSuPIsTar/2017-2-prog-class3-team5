#include "linkedlist.h"

LINK CreateNode(int input){
	LINK Cur;
	if((Cur = (LINK)malloc(sizeof(Node))) == NULL){
		printf("fail to create a node");
		return NULL;
	}
	Cur->value = input;
	Cur->next = NULL;
	return Cur;
}

LINK append(LINK cur, LINK head)
{
	LINK nextNODE = head;
	if(head == NULL)
	{
		head = cur;
		return head;
	}

	while(nextNODE->next != NULL)
	{
		nextNODE = nextNODE->next;
	}

	nextNODE->next = cur;

	return head;
}

void DeleteOddNode(LINK head, int sizeofNode){
	LINK Cur = head;
	for(int i = 0; i < sizeofNode; i++){
		if(i = 0){
			head = head->Cur;
			free(Cur);
			Cur = head;
		}
		else if(i%2 == 1){
			Link temp = Cur->next;
			Cur->next = temp->next;
			free(temp);
		}
	}
}

void ReverseList(LINK head){
	LINK Cur = head;
	while (Cur != NULL)
	{
		printf("%d\n", Cur->value);
		Cur = Cur->next;
	}
}

int LengthofList(LINK head){
	int length=1;
	LINK Cur = head;
	while((Cur = Cur->next) != NULL){
		++length;
	}
	return length;
}

void PrintList(LINK head){
	LINK Cur = head;
	while(1){
		printf("%d",Cur->value);
		if((Cur = Cur->next) != NULL){
			exit(1);
		}
	}
}

void PrintMiddleNode(LINK head, int lengthofNode){
	LINK Cur = head;
	for(int i = 0; i < lengthofNode/2; i++){
		Cur = Cur->next;
	}
	if(lengthofNode%2 == 1)
		printf("%d",Cur->value);
	else
		printf("%d %d", Cur->value, Cur->next->value);
}
