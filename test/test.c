#include <stdio.h>

//int main() {
//	int a = (int)2.23;
//	// 2.23属于字面浮点数，编译器默认理解为double类型
//	
//	//printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	int b = 1;
//	if(a && b)
//		printf("a is true\n");
//
//	int c = 0;
//	int d = 1;
//	if (a || b)
//		printf("a is true\n");
//	return 0;
//}

//int main()
//{
//
//	int a = 3;
//	int b = 8;
//	int r = (a > b ? a : b);
//	printf("r = %d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 8;
//	int c = 5;
//	//         a=-5     b=9        c =0
//	int d = (a = 3 - 8, b = 4 - a, c = a+5);
//	if(d)
//		printf("d is true\n");
//	else
//		printf("d is false\n");
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{//                0  1  2  3  4  5  6  7  8  
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };  //此处的[]是定义数组的语法
//	int a = 3; //a是一个变量,在下边的[]可以使用变量，上面的[]不可以使用变量
//	arr[a] = 10; //[] 就是下标引用操作符，arr和3是两个操作数
//	printf("arr[3] = %d\n", arr[3]);
//	printf("arr[2] = %d\n", arr[2]);
//
//	return 0;
//}


//
//
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int sum = Add(3, 5); // () 就是函数调用操作符，Add和3,5是两个操作数
//	//函数调用时的括号不能省略，必须有，
//	//sizeof是一个运算符，sizeof(Add)是一个表达式，括号可以省略
//	printf("sum = %d\n", sum);
//	return 0;
//
//}













//
//int main()
//{
//	auto int a = 3; //所有的局部变量默认都是auto类型的
//	//auto关键字在C语言中并不常用,通常用于C++，但在C99标准中也可以使用
//	printf("a = %d\n", a);
//
//	
//	return 0;
//}
//
//#define NUM 100
//
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//	return 0;
//
//}


#define CHEN(x,y)((x)*(y))




int main()
{
	int a = 3;
	int b = 5;

	int c = CHEN(a + 1, b + 2);
	printf("c = %d\n", c);


	return 0;
}






//int main()
//{
//
//    int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//
//    int times = 0;
//    //这里是用sizeof（arr）得到整个数组的大小，再除以一个数组的大小，就能得出共有几个数，也就是对应次数
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    //进入循环，用times 和 sz比较，小于sz就进入循环
//    while (times < sz)
//    {
//        //打印字符形式的，用了ASCII码值，这里 参数 arr[times] 表示对应的数，第几次= 第几位
//        printf("%c", arr[times]);
//        //这里每次times自增
//        times++;
//
//    }




//int main()
//{
//
//    int year = 0;
//    int month = 0;
//    int date = 0;
//
//    //这里来定义每个参数在输入缓冲区中读取几个字符
//    scanf("%4d%2d%2d", &year,&month,&date);
//
//
//    //这里判断所有条件都要满足
//    if (1990 <= year && year <= 2015 && 1 <= month && month <= 12 && 01 <= date && date <= 30)
//    {
//        printf("year:%d\n", year);
//        //这里是0来补两位
//        printf("month:%02d\n", month);
//        printf("date:%02d\n", date);
//
//    }
//
//    else
//    {
//        printf("请正确输入");
//    }
//    
//
//
//    return 0;
//}





//int main()
//{
//
//    //输入
//    int num = 0;
//    // 如果 是0.0 则会被认定为double类型，所以要加f
//    float c = 0.0f;
//    float math = 0.0f;
//    float eng = 0.0f;
//
//    scanf("%d;%f,%f,%f", &num, &c, &math, &eng);
//
//    //.2表示保留两位小数
//        printf("the each subject score of NO.%d is %.2f, %.2f, %.2f\n", num, c, math, eng);
//
//
//    
//    
//
//    return 0;
//}
