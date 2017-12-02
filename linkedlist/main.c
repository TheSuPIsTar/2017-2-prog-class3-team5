#define _CRT_SECURE_NO_WARNINGS

#include "linkedlist.h"


int main()
{
	int flag, value = 0;
	LINK head = NULL;
	LINK cur = NULL;

	//
	printf("please put input");
	while (scanf("%d", &value) == 1)
	{	
		cur = CreateNode(value);
		if (cur == NULL)
		{
			printf("Error!");
			exit(1);
		}
		head = append(cur, head);
	}
	int length = LengthofList(head);

	//PRINT LIST
	printf("1. you have %d numbers inputed.", length);
	printf("\n2. the Reverse ordered numbers:");
	ReverseList(head, length);
	printf("\n3. The middle number of the numbers:");
	PrintMiddleNode(head, length);
	printf("\n4. the input ordered numbers:");
	PrintList(head);
	printf("we just deleted odd nodes.");
	head = DeleteOddNode(head, length);
	printf("\n5. the rest of the numbers:");
	PrintList(head);

	return 0;
}
