#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Maxsize 10

typedef struct {
	int date[Maxsize];
	int length;
}Squlist;


void Initlist(Squlist *L)
{
	L->length = 0;
}

void Input(Squlist* L)
{
	int i = 0;
	int j = 9;
	if (L->length < Maxsize)
	{
		for (i = 0; i < 6; i++)
		{
			L->date[i] = j;
			j += 23;
			L->length++;
		}
	}

}

void Print(Squlist* L)
{
	for ( int i = 0;  i <L->length; i++)
	{
		printf("%d ", L->date[i]);
	}
	printf("\n");
}

int insetlist(Squlist* L,int loc,int elem)
{
	if (loc<1 || loc>L->length+1)
	{
		return 0;
	}

	if (L->length > Maxsize)
	{
		return 0;
	}
	
		for (int i = L->length; i >= loc; i--)
		{
			L->date[i] = L->date[i - 1];
		}
		L->date[loc - 1] = elem;
		L->length++;
	
}




int main()
{
	Squlist L;
	Initlist(&L);
	Input(&L);
	Print(&L);
	insetlist(&L,9,25);

	Print(&L);

	return 0;
}