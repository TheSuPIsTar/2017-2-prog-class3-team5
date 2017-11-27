#define _CRT_SECURE_NO_WARNINGS

#include "linkedlist.h"
#include "LlinkedlistLibrary.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cnt;

LINK createNode(int *value)
LINK append(LINK cur, LINK head)
void reverseList(LINK head)
void printList(LINK head)
void deleteList(LINK head)
void middleList(LINK head)

int main()
{
	int flag, value = 0;
	cnt = 0;
	LINK head = NULL;
	LINK cur = NULL;

	while (1)
	{
		flag = scanf("%d", &value);
		if (flag != 1)
			break;
		cur = createNode(value);
		if (cur == NULL)
		{
			printf("Error!");
			exit(1);
		}
		head = append(head, cur);
	}
	//PRINT LIST
	printf("1. you have %d numbers inputed.\n", cnt);
	printf("2. Reverse the numbers:\n");
	reverseList(head);
	printf("3. The middle number of the numbers:\n");
	middleList(cur);
	printf("4. the numbers:\n");
	printList(head);
	deleteList(head);
	printf("We deleted odd numbers.\n");
	printf("5. the rest of the numbers:\n");
	printList(head);

	return 0;
}