#define _CRT_SECURE_NO_WARNINGS

#include "linkedlist.h"
#include "Linkedlistlibrary.c"

LINK CreateNode(int input)
LINK append(LINK cur, LINK head)
void DeleteOddNode(LINK head, int sizeofNode)
void ReverseList(LINK head)
int LengthofList(LINK head)
void PrintList(LINK head)
void PrintMiddleNode(LINK head, int lengthofNode)


int main()
{
	int flag, value = 0;
	LINK head = NULL;
	LINK cur = NULL;

	//
	while (scanf("%d", &value) == 1)
	{	
		cur = CreateNode(value);
		if (cur == NULL)
		{
			printf("Error!");
			exit(1);
		}
		head = append(head, cur);
	}
	int length = LengthofList(head);

	//PRINT LIST
	printf("1. you have %d numbers inputed.\n", length);
	printf("2. Reverse the numbers:\n");
	ReverseList(head);
	printf("3. The middle number of the numbers:\n");
	PrintMiddleNode(head, length);
	printf("4. the numbers:\n");
	printList(head);
	printf("We deleted odd numbers.\n");
	DeleteOddNode(head, length);
	printf("5. the rest of the numbers:\n");
	PrintList(head);

	return 0;
}
