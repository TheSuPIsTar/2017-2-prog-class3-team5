#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linked_list //�ڱ����� ����ü�� ���� ���Ǵ�.
{
	int value;
	struct linked_list *next;
};

typedef struct linked_list NODE; //struct linked_list�� NODE�� �������Ѵ�.

typedef NODE * LINK; //NODE �����͸� ��ũ�� �������Ѵ�.

LINK CreateNode(int input);
void DeleteOddNode(LINK head, int sizeofNode);
void ReverseNode(LINK head);
int LengthofNode(LINK head);
void PrintNode(LINK head);
void PrintMiddleNode(LINK head, int lengthofNode);