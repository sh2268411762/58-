#include "58.h"




//条件编译:判断是否被定义
#define DEBUG 0
int main()
{
#if defined(DEBUG)
	printf("debug0");
#endif
	return EXIT_SUCCESS;
}
//条件编译:判断是否为真
#define DEBUG 10
int main()
{
	printf("1:%d\n", DEBUG);
#if DEBUG
	printf("2:%d\n", DEBUG);
#endif
	return EXIT_SUCCESS;
}
//
//
////条件编译
//#define DEBUG
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (; i <= 10; i++)
//	{
//#ifdef DEBUG
//		printf("before debug:%d\n", sum);
//#endif
//		sum += i;
//#ifdef DEBUG
//		printf("after debug:%d\n", sum);
//#endif
//	}
//	printf("%d\n", sum);
//
//	return EXIT_SUCCESS;
//}
//
//
////宏和函数对比
////宏常用于执行简单地运算
//
//void fun()
//{
//
//}
//int main()
//{
//
//	return EXIT_SUCCESS;
//}

////带副作用的宏参数
////x+1 不带副作用
////x++ 带有副作用
//#define MAX(x,y) (x)>(y)?(x):(y)
//
//int main()
//{
//
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("%d,%d,%d\n", x, y, z);
//
//	printf("%d\n", MAX(10, 9));
//	return EXIT_SUCCESS;
//}


////##可以把它两边的符号合成一个符号。
////它允许宏定义从分离的文本文本片段创建标识符
//#define ADD(num,value) x##num += value
//int main()
//{
//	int x1 = 1;
//	int x2 = 2;
//	int x3 = 3;
//	ADD(1, 100);
//	ADD(2, 100);
//	ADD(3, 100);
//	printf("x1 = %d,x2 = %d,x3 = %d\n", x1, x2, x3);
//	return EXIT_SUCCESS;
//}