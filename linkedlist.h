#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linked_list //�ڱ����� ����ü�� ���� ���Ǵ�.
{
	char *name;
	struct linked_list *next;
};

typedef struct linked_list NODE; //struct linked_list�� NODE�� �������Ѵ�.

typedef NODE * LINK; //NODE �����͸� ��ũ�� �������Ѵ�.



