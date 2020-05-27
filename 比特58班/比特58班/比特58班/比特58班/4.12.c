//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <math.h>
//#include <time.h>
//#include "58.h"
//#define SIZE 128

//int MyStrlen(const char *str);
//int main()
//{
//	const char* str = "abcdef12";
//	printf("%d",MyStrlen(str));
//	return 0;
//}
//int MyStrlen(const char* str)
//{
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	if (*str == '\0') 
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + MyStrlen(str + 1);
//	}
//}


//int main()
//{
//	char str[SIZE] = "hello ";
//	//printf("%d\n", strlen(strcat(str, "world")));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//int main()
//{
//	char str1[SIZE] = "hello ";
//	char str2[] = "world";
//	strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}



//void Inc(int* p);
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		Inc(&num);
//		Sleep(1000);
//		printf("%d\n", num);
//	}
//	return 0;
//}
//void Inc(int* p)//int* p = &num
//{
//	(*p)++;
//}




//int BinSearch(int arr[],int sz, int x);
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int key = 0;
//	printf("请输入要查找的数字：--> ");
//	scanf("%d", &key);
//	int index = BinSearch(arr, sz, key);
//	printf("%d 的下标是%d\n", key, index);
//	return 0;
//}
//int BinSearch(int arr[],int sz, int x)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			//left++;
//			left = mid+1;
//		}
//		else if (arr[mid] > x)
//		{
//			//right--;
//			right = mid - 1;
//		}
//		else
//		{
//			//break;
//			return mid;
//		}
//	}
//	return -1;
//}



//int IsLeapYear(int year);
//int main()
//{
//	int year;
//	printf("请输入一个年份：--> ");
//	scanf("%d", &year);
//	int ret = IsLeapYear(year);
//	if (1 == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//int IsLeapYear(int year)
//{
//	if (((0 == year % 4) && (year % 100 != 0)) || 0 == year % 400)
//	{
//		return 1;
//	}
//	return 0;
//}



//int IsPrimeNumber(int x);
//int main()
//{
//	int m;
//	printf("请输入一个数：--> ");
//	scanf("%d", &m);
//	
//	int ret = IsPrimeNumber(m);
//	if (1 == ret)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//}
//int IsPrimeNumber(int x)
//{
//	int n = 2;
//	for (n = 2; n < x/2; n++)//i<=(int)sqrt(n)
//	{
//		if (x % n == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}


//void Swap1(int* x, int* y);
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("before ：--> x = %d    y = %d\n", x, y);
//	Swap1(&x, &y);
//	printf("after：--> x = %d    y = %d\n", x, y);
//	return 0;
//}
//void Swap1(int* _x, int* _y)
//{
//	printf("Swap1：before：--> x = %d    y = %d\n", *_x, *_y);
//	int temp = *_x;
//	*_x = *_y;
//	*_y = temp;
//	printf("Swap1：after：--> x = %d    y = %d\n", *_x, *_y);
//}
//void Swap2(int x, int y)
//{
//	printf("Swap1：before：--> x = %d    y = %d\n", x, y);
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("Swap1：after：--> x = %d    y = %d\n", x, y);
//}


