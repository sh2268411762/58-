#include "58.h"


//void Bubble(int arr[], int sz);
//void Show(int arr[],int sz);
//int main()
//{
//	int arr[10] = { 1,56,32,87,23,3,2,5,7,88};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("排序前：\n");
//	Show(arr, sz);
//	Bubble(arr, sz);
//	printf("\n排序后：\n");
//	Show(arr, sz);
//	
//	return 0;
//}
//void Bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//void Show(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////二维数组在内存中线性存放
//int main()
//{
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("a[%d][%d]：%d-->地址：0x%p\n", i, j, arr[i][j], &arr[i][j]);
//		}
//	}
//	return 0;
//}


