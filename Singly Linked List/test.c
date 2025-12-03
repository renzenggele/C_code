#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//practice three times -------------------------
// 
// first
//struct LNode
//{
//	int data;
//	struct LNode* next;
//};
//typedef struct LNode LNode;
//typedef struct  LNode *Linklist;

//second
// 
//struct LNode {
//	int data;
//	struct LNode *next;
//};
//typedef struct LNode LNode;
//typedef struct LNode *Linklist;


//third

//struct LNode {
//	int data;
//	struct LNode* next;
//};
//
//typedef struct LNode LNode;
//typedef struct LNode* Linklist;

//--------------------------------------------------------

//practice another ways three times

//first
//typedef struct LNode {
//	int data;
//	struct LNode* next;
//}LNode,*Linklist;

//second

//typedef struct LNode {
//
//	int data;
//	struct LNode* next;
//}LNode,*Linklist;


//third

//typedef struct LNode {
//	int data;
//	struct LNode *next;
//}LNode,*Linklist;
//
//---------------------------------------------------------------

//用代码定义一个顺序表

//#define Maxsize 10

//typedef struct {
//	int data;
//	int length;
//};

/*
typedef struct {
	int data;
	int Maxsize;
	int length;
}*/;

//继续
//用代码定义一个单链表


//typedef struct LNode {
//	int data;
//	struct LNode* next;
//
//}LNode,*Linklist;



//不带头结点的单链表

/*
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*Linklist;


int InitList(Linklist *L)
{
	*L = NULL;// 这里一定要记得 要是指针，只有这样才能改变实参的值
	return 1;
}

int Empty(Linklist L)
{
	if (L == NULL)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	Linklist L;
	//初始化单链表
	InitList(&L);
	//判断单链表是否为空
	if (Empty(L))
	{
		printf("empty");
	}
}


*/



//不带头结点的单链表
/*
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*Linklist;

void InitList(Linklist* L)
{
	*L = NULL;
	
}

int Emptylist(Linklist L)
{
	if (L == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	Linklist L;
	InitList(&L);
	if (Emptylist(L))
	{
		printf("empty\n");
	}

	return 0;
}


*/


//带头节点的单链表
#include<stdlib.h>

typedef struct LNode {
	int data;
	struct LNode *next;
}LNode,*Linklist;

int Initlist(Linklist* L)
{
	*L = (LNode*)malloc(sizeof(LNode));// 这里还是要*L ，因为是赋值给main函数的L 的，如果不用*L ,就只是给形参（实参的copy）赋值了
	if (*L == NULL)
	{
		return 0;
	}
	(*L)->next = NULL;//访问成员用 (*L)->xxx（先解引用到一级指针，再访问成员）    ->优先级高于* 所以加（）
	return 1;
}
int main()
{
	Linklist L;
	Initlist(&L);
	return 0;
}
