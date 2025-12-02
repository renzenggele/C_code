
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 


//int DigitSum(unsigned int a)
//{
//	if (a > 9)
//	{
//		return DigitSum(a / 10)+ a % 10;
//	}
//	else
//		return a;
//
//}
//int main()
//{
//	unsigned int  a = 0;
//	scanf("%u", &a);
//	int sum = DigitSum(a);
//	printf("%d\n", sum); 
//	return 0;
//}



//
//int DigitSum(unsigned int n)
//{
//
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//
//	}
//	else
//		return n;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	
//	return 0;
//}

//k>0 n*pott(n,k-1)
//k=0 n=1
//k<0 1/pott(n,-k)
//double pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * pow(n, k - 1);
//
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0/pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}




//double pow(n, k)
//{
//	if (k > 0)
//		return n * pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}



//void bubble_sort(int arr[], int ret)
//{
//	int i = 0;
//	for (i = 0; i < ret-1; i++)
//	{
//		int j = 0;
//	
//		for (j = 0; j < ret - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//
//
//			{
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//	
//			}
//
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,7,8,3,1,6,9,0,2,4 };
//	int ret = sizeof(arr) / sizeof(0);
//	bubble_sort(arr,ret);
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//






//#include<stdlib.h>
//#define Initsize 10
//
//typedef struct
//{
//	int *data;
//	int MaxSize;
//	int length;
//}Sequent;
//
//void InitSeq(Sequent *L)
//{
//	L->data = (int*)malloc(Initsize * sizeof(int));
//	L->length = 0;
//	L->MaxSize = Initsize;
//}
//
//
//
//void Increase(Sequent *L, int len)
//{
//	int* q = L->data;
//	L->data = (int*)malloc((L->MaxSize + len) * sizeof(int));
//	int i = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		L->data[i] = q[i];
//	}
//	L->MaxSize = L->MaxSize + len;
//
//	free(q);
//}
//
//
//
//
//
//int main()
//{
//	Sequent L;
//	InitSeq(&L);
//	int i = 0;
//	for (i = 10; i <= 1000; i += 10)
//	{
//		if (L.length < L.MaxSize)
//		{
//			L.data[L.length] = i;
//			L.length++;
//		}
//		else
//		{
//			printf("overflow,the length size is  %d\n", L.length);
//			break;
//		}
//	}
//
//	Increase(&L, 5);
//
//	printf("now the maxsize is %d", L.MaxSize);
//
//	return 0;
//}








//#include<stdlib.h>
//#define Initsize 5
//
//typedef struct {
//	int *date;
//	int length;
//	int Maxsize;
//}Seqlist;
//
//void Initlist(Seqlist* L)// 这里传递的参数是struct命名的类型
//{
//	L->date = (int*)malloc(Initsize * sizeof(int));
//	L->length = 0;
//	L->Maxsize = Initsize;
//
//}
//
//
//void Increase(Seqlist* L,int len)
//{
//	int* a = L->date;
//	L->date = (int*)malloc((L->Maxsize + len) * sizeof(int));
//	for (int i = 0; i < L->length; i++)
//	{
//		L->date[i] = a[i];
//	}
//	L->Maxsize = L->Maxsize + len;
//
//	free(a);
//}
//
//int main()
//{
//	Seqlist L;
//	
//	Initlist(&L);
//
//	printf("the Maxsize is %d\n", L.Maxsize);
//
//	int i = 0;
//	for (i = 0; i < 340; i += 34)
//	{
//		if (L.length < L.Maxsize)
//		{
//			L.date[L.length] = i; //这里是根据length去判断的
//			L.length++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0; i < L.length; i++)
//	{
//		printf("%d ", L.date[i]);
//	}
//	printf("\n");
//
//	Increase(&L, 2);
//
//	if (L.length < L.Maxsize)
//	{
//		L.date[L.length] = 10000; 
//		L.length++;
//
//		for (i = 0; i < L.length; i++)
//		{
//			printf("%d ", L.date[i]);
//		}
//		printf("\n");
//
//		printf("I haven't full, at least %d space\n", L.Maxsize - L.length);
//	}
//	else
//	{
//		printf("manle");
//	}
//	return 0;
//}




//#include<string.h>
//void Reverse(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//	
//		Reverse(arr,left+1,right-1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	Reverse(arr, left, right);
//	printf("%s", arr);
//	return 0;
//}

//
// 
// 
// 
// 
// 
//#include<string.h>
//
//void Reverse(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char ret = arr[left];
//		arr[left] = arr[right];
//		arr[right] = ret;
//		Reverse(arr, left+1, right-1);
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdefghi";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	Reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}



struct Lnode {
	int data;
	struct Lnode* next;
};





