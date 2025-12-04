#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>


typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*Linklist;


Initlist(Linklist* L)
{
	*L = (LNode*)malloc(sizeof(LNode));
	if (*L == NULL)
	{
		return 0;
	}
	(*L)->next = NULL;
	return 0;

}

Insetlist(Linklist L, int a, char b)
{
	LNode* p;
	int j = 1;
	if (a < 1)
	{
		return 0;
	}
	p = L;
	while (p != NULL && j <= a)
	{
		*p = *p->next;
		j++;
	}
	if (p == NULL)
	{
		return 2;
	}

	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->next = p->next;// 这里s和p都不加*号，是因为p和s本身就是指针变量
	p->next = s;//这里也同样是因为p本身就是指针变量
	return 4;
}


int main()
{
	Linklist L;
	Initlist(&L);
	Insetlist(L, 1, 'A');

	return 0;
}