#include <stdio.h>
#include <stdlib.h>

struct linked_list //�ڱ����� ����ü�� ���� ���Ǵ�.
{
	int value;
	struct linked_list *next;
};

typedef struct linked_list NODE; //struct linked_list�� NODE�� �������Ѵ�.

typedef NODE * LINK; //NODE �����͸� ��ũ�� �������Ѵ�.

LINK CreateNode(int input);
LINK DeleteOddNode(LINK head, int sizeofNode);
void ReverseList(LINK head, int length);
int LengthofList(LINK head);
void PrintList(LINK head);
void PrintMiddleNode(LINK head, int lengthofNode);
LINK append(LINK cur, LINK head);