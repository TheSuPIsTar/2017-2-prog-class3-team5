#include <stdio.h>
#include <stdlib.h>

struct linked_list //자기참조 구조체에 대한 정의다.
{
	int value;
	struct linked_list *next;
};

typedef struct linked_list NODE; //struct linked_list를 NODE라 재정의한다.

typedef NODE * LINK; //NODE 포인터를 링크로 재정의한다.

LINK CreateNode(int input);
LINK DeleteOddNode(LINK head, int sizeofNode);
void ReverseList(LINK head, int length);
int LengthofList(LINK head);
void PrintList(LINK head);
void PrintMiddleNode(LINK head, int lengthofNode);
LINK append(LINK cur, LINK head);