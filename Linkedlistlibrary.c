#include "linkedlist.h"

LINK createNode(int *value)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	if (cur == NULL)
	{
		printf("Error!");
		return NULL;
	}
	//   cur->value = (int*)malloc(sizeof(int) * 2);
	cur->value = value;
	cur->next = NULL;
	cnt++;
	return cur;
}

LINK append(LINK cur, LINK head)
{
	LINK nextNODE = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}

	while (nextNODE->next != NULL)
	{
		nextNODE = nextNODE->next;
	}
	nextNODE->next = cur;

	return head;
}

void reverseList(LINK head)
{
	LINK nextNODE = head;
	while (nextNODE != NULL)
	{
		printf("%d\n", nextNODE->value);
		nextNODE = nextNODE->next;
	}
}

void printList(LINK head)
{
	LINK nextNODE = head;
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt - i - 1; j++)
			nextNODE = nextNODE->next;
		if (nextNODE->value != 0)
			printf("%d\n", nextNODE->value);
		nextNODE = head;
	}
}

void deleteList(LINK head)
{
	LINK nextNODE = head;
	while (nextNODE != NULL)
	{
		if (cnt % 2 == 1)
		{
			for (int i = 0; i < cnt; i++)
			{
				if (i % 2 == 0)
				{
					nextNODE->value = 0;
				}
				nextNODE = nextNODE->next;
			}
		}
		if (cnt % 2 == 0)
		{
			for (int i = 0; i < cnt; i++)
			{
				if (i % 2 == 1)
				{
					nextNODE->value = 0;
				}
				nextNODE = nextNODE->next;
			}
		}

	}
	head = nextNODE;
	return head;
}

void middleList(LINK head)
{
	LINK nextNODE = head;
	if (cnt % 2 == 1)
	{
		for (int i = 0; i<(int)(cnt / 2 + 0.5); i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%d\n", nextNODE->value);
	}
	if (cnt % 2 == 0)
	{
		for (int i = 0; i<(int)(cnt / 2 + 0.5); i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%d\n", nextNODE->value);
		nextNODE = head;
		for (int i = 0; i<(int)(cnt / 2 + 0.5) - 1; i++)
		{
			nextNODE = nextNODE->next;
		}
		printf("%d\n", nextNODE->value);
	}

}
