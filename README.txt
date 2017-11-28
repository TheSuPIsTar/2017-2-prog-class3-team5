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

노드의 생성

LINK append(LINK cur, LINK head);

노드 추가

LINK DeleteOddNode(LINK head, int sizeofNode);

홀수번째 노드의 삭제

void ReverseList(LINK head, int length);

역순출력

int LengthofList(LINK head);

연결리스트의 길이

void PrintList(LINK head);

연결리스트 출력

void PrintMiddleNode(LINK head, int lengthofNode);

중간값출력

--------------------------

Header File

struct linked_list //자기참조 구조체에 대한 정의다.
{
	int value;
	struct linked_list *next;
};


typedef struct linked_list NODE; //struct linked_list를 NODE라 재정의한다.

typedef NODE * LINK; //NODE 포인터를 링크로 재정의한다.

Library 함수들 선언.

--------------------------

개인과제때 만들었던 팀원들의 코드를 활용하여 하나의 완성된 코드를 구현.

