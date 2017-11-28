#include "linkedlist.h"

LINK CreateNode(int input){
	LINK Cur;
	if((Cur = (LINK)malloc(sizeof(NODE))) == NULL){
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

LINK DeleteOddNode(LINK head, int sizeofNode){
	LINK Cur = head;
	for(int i = 1; i <= sizeofNode/2+1; i++){
		if(i == 1){
			head = head->next;
			free(Cur);
			Cur = head;
		}
		else if(Cur->next){
			LINK temp = Cur->next;
			Cur->next = Cur->next->next;
			free(temp);
			Cur = Cur->next;
		}
	}
	return head;
}

void ReverseList(LINK head, int length){
	for(int i =0; i < length; i++)
	{
		LINK Cur = head;
		for(int j = 0; j < length - i-1; j++){
				Cur = Cur->next;
		}
		printf("%d ", Cur->value);
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
		printf("%d ",Cur->value);
		if((Cur = Cur->next) == NULL){
			break;
		}
	}
	printf("\n");
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
