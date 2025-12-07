#define _CRT_SECURE_NO_WARNINGS


//int main()
//{
//
//    int arr[5] = { 1,3,5,7,9 };
//    int arr2[] = { 2,4,6,8,0 };
//    int i = 0;
//    int ret = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < ret; i++)
//    {
//        int rec = 0;
//        rec = arr[i];
//        arr[i] = arr2[i];
//        arr2[i] = rec;
//    }
//
//    for (i = 0; i < ret; i++)
//    {
//        printf("arr:%d", arr[i]);
//    }
//    printf("\n");
//    for (i = 0; i < ret; i++)
//    {
//        printf("arr2:%d", arr2[i]);
//    }
//    printf("\n");
//    return 0;
//
//}


//创建一个整型数组，完成对数组的操作
// 实现函数init（）初始化数组为0
// 实现print（） 打印函数的每个元素
// 实现reverse（） 函数完成数组元素的逆置



//void Reverse(int arr[], int ret)
//{
//
//    int left = 0;
//    int right = ret-1;
//    int i = 0;
//    while(left < right)
//        {
//            int a = 0;
//            a = arr[left];
//            arr[left] = arr[right];
//            arr[right] = a;
//            left++;
//            right--;
//        }
//}
//
//    
//void init(int arr[], int ret)
//{
//    int i = 0;
//    for (i = 0; i < ret; i++)
//    {
//        arr[i] = 0;
//    }
//}
//
//
//void Print(int arr[], int ret)
//{
//    int i = 0;
//    for (i = 0; i < ret; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    printf("\n");
//}
//
//
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int ret = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//
//    Print(arr, ret);
//
//    Reverse(arr, ret);
//
//    Print(arr, ret);
//
//    init(arr, ret);
//
//    Print(arr, ret);
//
//
//    return 0;
//}
//



void bubble_sort(int arr[], int ret)
{
    int i = 0;
    for (i = 0; i < ret - 1; i++)
    {
        int j = 0;
        for (j = 0; j < ret - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

}


int main()
{
    int arr[] = { 9,8,7,6,5,4,3,2,1 };
    int ret = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, ret);

    int i = 0;
    for (i = 0; i < ret; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}





//带头节点的单链表
typedef struct LNode {
    int data;
    struct LNode* next;
}LNode, * Linklist;

int Initlist(Linklist* L)
{
    *L = (LNode*)malloc(sizeof(LNode));
    if (*L == NULL)
    {
        return 0;
    }
    (*L)->next = NULL;
    return 1;
}


int InsetList(Linklist L, int i, int e)
{
    //先判断 i是否小于1，
    if (i < 1)
    {
        return 2;
    }
    LNode* p; //申请一块地址，用来存放p
    int j = 0;
    p = L;//   让L的内容和P 一样
    while (p != NULL && j < i - 1) //进入循环，首先判断p！=null, 让j增加到i-1的位置。这里要&& ，而不是，表达式，逗号表达式：整个表达式的结果等于最后一个子表达式的值

    {
        p = (*p).next; //p里的next 指向下一个节点
        j++;
    }
    if (p == NULL) //判断值不合法
    {
        return 1;
    }
    LNode* s = (LNode*)malloc(sizeof(LNode)); //申请一块地址，用来存放s
    s->data = e; //s的内容未e
    s->next = p->next;//s的下一个节点指向p的下一个节点
    p->next = s;//p的下一个节点指向s
}



int main()
{
    Linklist L;
    Initlist(&L);

    InsetList(L, 1, 5);
}
