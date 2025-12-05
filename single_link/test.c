#define _CRT_SECURE_NO_WARNINGS

#define Maxsize 10
#include<stdio.h>

typedef struct {
	int data[Maxsize];
	int length;
}Sqelist;

Initlist(Sqelist* L)
{
	L->length = 0;
}

int Insertlist(Sqelist *L,int i,int e)
{
	if (i<1 || i>L->length + 1 || L->length >= Maxsize)
	{
		return 0;

	}
	int j = 0;
	for ( j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j-1];
	}
	L->data[i - 1] = e;
	L->length++;
	return 1;
}

int Elemget(Sqelist L, int i)
{
	return L.data[i - 1];
}


int Deletelist(Sqelist* L, int i,int *e)
{
	if (i<1 || i>L->length || L->length >= Maxsize)
	{
		return 0;

	}
	int j = 0;
	*e = L->data[i - 1];
	for (j = L->length; j >= i; j--)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length--;
	return 1;
}

int main()
{
	Sqelist L;
	Initlist(&L);
	int i = 1;

	Insertlist(&L, 1, 5);


	for (i = 1; i < 5; i ++)
	{
	
		int ret = Insertlist(&L, i, 5);
		if (ret == 1)
		{
			printf("%d\n", L.data[i-1]);
		}
		else
		{
			printf("insert fail");
		}
	
	}


	int back = Elemget(L,3);

	printf("get number %d\n", back);

	int e = -1;

	if (Deletelist(&L, 2, &e))
	{
		printf("已经删除了第2个元素，删除的元素为：%d", e);
	}
	
	return 0;
}