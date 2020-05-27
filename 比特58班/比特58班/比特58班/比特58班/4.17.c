#include "58.h"


//int main()
//{
//	int a = 10;
//	int b = 100;
//	int c = 190;
//	printf("%p\n", a);
//	printf("%p\n", b);
//	printf("%p\n", c);
//
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d]£º-->%p\n",i, &arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10];
//	char arr1[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int SZ = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]£º0x%p\n", i, &arr[i]);
//	}
//	puts("");
//	for (i = 0; i < SZ; i++)
//	{
//		printf("arr1[%d]£º0x%p\n", i, &arr1[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	puts("");
//	for(i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	puts("");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	puts("");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%c ", arr4[i]);
//	}
//	puts("");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%c ", arr5[i]);
//	}
//	puts("");
//	printf("%s\n", arr6);
//	return 0;
//}