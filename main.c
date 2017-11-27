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
	printf("1. 입력된 자료의 개수는 %d개 입니다.\n", cnt);
	printf("2. 입력자료를 입력 역순으로 출력:\n");
	reverseList(head);
	printf("3. 입력자료의 중간위치에 있는 자료의 값 출력:\n");
	middleList(cur);
	printf("4. 입력자료를 입력 순으로 출력:\n");
	printList(head);
	deleteList(head);
	printf("입력자료에서 홀수번째 자료를 모두 삭제하였습니다.\n");
	printf("5. 남은 자료를 순서대로 출력:\n");
	printList(head);

	return 0;
}