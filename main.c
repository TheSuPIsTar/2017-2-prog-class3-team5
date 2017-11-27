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
	printf("1. �Էµ� �ڷ��� ������ %d�� �Դϴ�.\n", cnt);
	printf("2. �Է��ڷḦ �Է� �������� ���:\n");
	reverseList(head);
	printf("3. �Է��ڷ��� �߰���ġ�� �ִ� �ڷ��� �� ���:\n");
	middleList(cur);
	printf("4. �Է��ڷḦ �Է� ������ ���:\n");
	printList(head);
	deleteList(head);
	printf("�Է��ڷῡ�� Ȧ����° �ڷḦ ��� �����Ͽ����ϴ�.\n");
	printf("5. ���� �ڷḦ ������� ���:\n");
	printList(head);

	return 0;
}