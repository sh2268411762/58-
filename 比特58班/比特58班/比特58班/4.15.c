//#include "58.h"
//
//#define SIZE 64
//extern count = 0;


////递归：求斐波那契数列——双递归，重复计算
//int Fib(int x);
//int main()
//{
//	int num = 0;
//	printf("请输入数据：-->");
//	scanf("%d", &num);
//
//	int ret = Fib(num);
//	printf("%d\n", ret);
//	printf("count：-->[%d]\n", count);
//	return 0;
//}
//int Fib(int x)
//{
	//迭代,效率高：-->没有调用函数，思路较难懂
	//int first = 1;
	//int second = 1;
	//int third = 1;

	//while ( x > 2 )
	//{
	//	third = first + second;
	//	first = second;
	//	second = third;
	//	x--;
	//}
	//return third;


	//多次调用函数，效率低，思路清晰
//	if (3 == x)
//	{
//		count++;
//	}
//
//	if (1 == x || 2 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return (Fib(x - 1) + Fib(x - 2));
//	}
//}


////阶乘：递归
//int Fact(int x);
//int main()
//{
//	int num = 0;
//	printf("请输入数字：-->");
//	scanf("%d", &num);
//
//	int ret = Fact(num);
//	printf("%d\n", ret);
//	return 0;
//}
//int Fact(int x)
//{
//	//
//	//int i = 1;
//	//int total = 1;
//
//	//while (i <= x)
//	//{
//	//	total *= i;
//	//	i++;
//	//}
//	//printf("%d\n", total);
//
//	if (1 == x || 0==x)
//	{
//		return 1;
//	}
//	else
//	{
//		return (x * Fact(x - 1));
//	}
//}


//void Print2(int x);
//int main()
//{
//	int num = 0;
//	printf("请输入你的数据：-->");
//	scanf("%d", &num);
//
//	Print2(num);
//	return 0;
//}
//void Print2(int x)
//{
//	if (x > 9)
//	{
//		Print2(x / 10);
//	}
	//1.if条件不满足   2.if条件满足但是内部函数调用返回了
//	printf("%d ", x % 10);


	//if (x > 9)
	//{
	//	Print2(x / 10);
	//	printf("%d ", x % 10);
	//}
	//else
	//{
	//	printf("%d ", x);
	//}
//}

////递归分割整数
////递归出口：个位数据可以直接打印
//void Print1(int x);
//int main()
//{
//	int num = 0;
//	printf("请输入你的数据：-->");
//	scanf("%d", &num);
//
//	Print1(num);
//	return 0;
//}
//void Print1(int x)
//{
//	if ( x<10 )
//	{
//		printf("%d ", x);
//		return;
//	}
//	Print1(x / 10);
//	printf("%d ", x % 10);
//}


////分割整数
//void Print(int x);
//int main()
//{
//	int num;
//	printf("请输入你的数据：-->");
//	scanf("%d", &num);
//	Print(num);
//
//	return 0;
//}
//void Print(int x)
//{
//	int arr[SIZE] = { 0 };
//	int i = 0;
//	while(x > 0)
//	{
//		arr[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	while (i > 0)
//	{
//		i--;
//		printf("%d ", arr[i]);
//	}
//	puts("");
//}