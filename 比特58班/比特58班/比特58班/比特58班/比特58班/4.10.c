//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <math.h>
//#include <time.h>
//#define SIZE 10
//int Max(int a[], int num)
//{
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int a[SIZE] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	return 0;
//}
////
////交换两个整型数值
//void Swap(int _x, int _y);
//int main()
//{
//	int x = 10;
//	int y = 20;
//	
//	printf("before:-->x = %d,y = %d\n",x, y);
//	//int temp = x;
//	//x = y;
//	//y = x;
//
//	Swap(&x,&y);
//	printf("after:-->x = %d,y = %d\n", x, y);
//	return 0;
//}
//void Swap(int* _x, int* _y)
//{
//	int temp = *_x;
//	*_x = *_y;
//	*_y = temp;
//}


////memset可用来初始化一个数组
//int main()
//{
//	char str[100];
//	memset(str,'n', 100);
//
//	int start;
//	int end;
//	start = GetTickCount();//获取循环运行时间
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%c ", str[i]);
//	}
//	end = GetTickCount();
//	printf("%d\n", end - start);
//	return 0;
//}


////辗转相除法
//int main()
//{
//	int x;
//	int y;
//	printf("请输入要求最大公约数的两个数：-->");
//	scanf("%d%d", &x, &y);
//	while (x * y != 0)
//	{
//		if (x > y)
//		{
//			x %= y;
//		}
//		else if (x < y)
//		{
//			y %= x;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (0 == x)
//	{
//		printf("%d\n", y);
//	}
//	else
//	{
//		printf("%d\n", x);
//	}
//	return 0;
//}


////辗转相减法
//int main()
//{
//	int x;
//	int y;
//	printf("请输入要求最大公约数的两个数：-->");
//	scanf("%d%d", &x, &y);
//	while (1)
//	{
//		if (x > y)
//		{
//			x = x - y;
//		}
//		else if (x < y)
//		{
//			y = y - x;
//		}
//		else//x=y
//		{
//			break;
//		}
//	}//return x;  return y;
//	printf("%d ", y);
//	return 0;
//}
//
