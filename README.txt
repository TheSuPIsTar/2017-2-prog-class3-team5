# README file for TEAM[3,5]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

--------------------------
Lee Do hyeong - Readme.txt
Bang Sung Won - Header
Ko Eun Jin - Main
Lee Seung Chan - Library 
Kim Yong Hwan - Libraryc 
--------------------------

Library File

LINK CreateNode(int input);

����� ����

LINK append(LINK cur, LINK head);

��� �߰�

LINK DeleteOddNode(LINK head, int sizeofNode);

Ȧ����° ����� ����

void ReverseList(LINK head, int length);

�������

int LengthofList(LINK head);

���Ḯ��Ʈ�� ����

void PrintList(LINK head);

���Ḯ��Ʈ ���

void PrintMiddleNode(LINK head, int lengthofNode);

�߰������

--------------------------

Header File

struct linked_list //�ڱ����� ����ü�� ���� ���Ǵ�.
{
	int value;
	struct linked_list *next;
};


typedef struct linked_list NODE; //struct linked_list�� NODE�� �������Ѵ�.

typedef NODE * LINK; //NODE �����͸� ��ũ�� �������Ѵ�.

Library �Լ��� ����.

--------------------------

���ΰ����� ������� �������� �ڵ带 Ȱ���Ͽ� �ϳ��� �ϼ��� �ڵ带 ����.

