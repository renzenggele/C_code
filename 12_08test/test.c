#define _CRT_SECURE_NO_WARNINGS


//int main()
//{
//    int password[20] = { 0 };
//
//
//    int i = 0;
//
//    for (i = 0; i < 3; i++)
//    {
//        printf("input password>");
//        scanf("%s", password);
//
//        if (strcmp(password, "abcdef") == 0)
//        {
//            printf("correct password");
//            break;
//        }
//        else
//            printf("error password,pls try again\n");
//    }
//    
//
//    return 0;
//}



#include<stdlib.h>
#include<time.h>





void menu() //void 意思是不返回值
{
    printf("*********************\n");
    printf("*** selection *******\n");
    printf("*** 1: begin  *******\n");
    printf("*** 0: exit   *******\n");
    printf("*********************\n");
}

void game()
{
    int guess = 0;
    int ret = rand() % 100 + 1;
    //rand表示随机返回一个整数 范围： 0 ~ RAND_MAX（32767） 
    //%100 是除以100后取余 在 0~99 之间，然后+1 是 1~100之间了

    printf("%d\n", ret);


    while (1)

    {
        printf("pls entry the number\n");
        scanf("%d", &guess);

        if (guess > ret)
        {
            printf("big than it\n");
        }
        else if (guess < ret)
        {
            printf("small than it\n");
        }
        else
        {
            printf("equal it\n");
            break;
        }
    }

}





int main()
{



    int input = 0;

    srand((unsigned int)time(NULL));
    //srand 设置一个随机数值起点  调用方法： srand()   
    //time函数 返回一个时间戳 NULL 表示 空指针 0



    do //do while 循环，先干后循环
    {
        menu();// 直接调用这个函数

        printf("pls selection\n");

        scanf("%d", &input);

        switch (input)
        {
        case 1:
            game();//调用game函数
            break;

        case 0:
            printf("exit");
            break;
        default:
            printf("select again\n");
            break;
        }


    } while (input); //这里用input来判断，非0 为真，0为假。0 不会循环






    return 0;
}
