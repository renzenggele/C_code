#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d", i);
//        printf("hehe\n");
//    }
//        
//
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a=0; a < 3; a++)
//    {
//        for (b=0; b < 3; ++b) 
//        
//        {
//            printf("%d\n",b);
//        }
//    }
//
//    return 0;
//}


//
//int main()
//{
//
//    int i = 1;
//    
//    do
//    {
//        i++;
//        if (i == 5)
//            continue;
//        printf("%d\n", i);
//        
//    } 
//    while (i <= 10);
//
//    return 0;
//}






// 计算n的阶乘 举例 5的阶乘  5*4*3*2*1

//int main()
//{
//
//    int a = 1;
//    int b = 0;
//    int ret = 1;
//    int sum = 0;
//
//    for (b = 1;b <= 3; b++)
//    {
//        for (a = 1; a <= b; a++)// 1，2，3，4，5，
//        {
//            ret = ret * a; //2 6 24 120
//        }
//        sum = sum + ret;
//    }
//
//    
//    printf("%d", sum); //120
//
//    return 0;
//}




// 3的阶乘
//int main()
//{
//    int a = 0;
//    int i = 0;
//    int ret = 1;
//    int sum = 0;
//
//    for (a = 1; a <= 3; a++)
//    {
//        ret = ret * a;
//        sum = sum + ret;
//    }
//
//    printf("%d", sum);
//
//    return 0;
//}
//



// 在一个有序数组中，通过二分法查找具体某个数字k
//二分法 1-300 ，猜200，小了，直接在200-300 

//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//    int k = 4;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    int left = 0;
//    //求数字长度，只用减1，是因为没有\0，然后下标是从0开始，所以-1
//    int right = sz - 1;
//    while(left<=right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//
//        }
//        else
//        {
//            printf("找到了，是%d", k);
//            break;
//        }
//            
//    }
//    if (left > right)
//    {
//        printf("找不到");
//    }
//
//        return 0;
//}