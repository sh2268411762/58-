//#include "58.h"
////
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int Comp(int* x, int* y)
//{
//	if (*x > * y)
//	{
//		return 1;
//	}
//	else if (*x < *y)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int Comp2(double* x, double* y)
//{
//	if (*x > * y)
//	{
//		return 1;
//	}
//	else if (*x < *y)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int Comp1(char* x, char* y)
//{
//	if (*x > * y)
//	{
//		return 1;
//	}
//	else if (*x < *y)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int Company(const void*vx, const void*vy, int size)
//{
//
//	if (1 == size)
//	{
//		char* x = (char*)vx;
//		char* y = (char*)vy;
//		return Comp1(x, y);
//	}
//	else if (4 == size)
//	{
//		int* x = (int*)vx;
//		int* y = (int*)vy;
//		return Comp(x, y);
//	}
//	else if (8 == size)
//	{
//		double* x = (double*)vx;
//		double* y = (double*)vy;
//		return Comp2(x, y);
//	}
//	else
//	{
//		return 0;
//	}
//
//	//����
//	//if (*x > * y)
//	//{
//	//	return 1;
//	//}
//	//else if (*x < *y)
//	//{
//	//	return -1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//
//	//����
//	//if (*x < * y)
//	//{
//	//	return 1;
//	//}
//	//else if (*x > *y)
//	//{
//	//	return -1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//}
//void Swap(char* x, char* y, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(x + i) ^= *(y + i);
//		*(y + i) ^= *(x + i);
//		*(x + i) ^= *(y + i); 
//	}
//}
//void sort(void* list, int sz, int size, int (*company)(const void*, const void*, const int))
//{
//	assert(list);
//	assert(company);
//	char* _list = (char*)list;
//	//�ⲿѭ������ð�ݴ���
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//�ڲ�ѭ������ÿһ��ð��
//		int flag = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (Company(_list + size * j, _list + size * (j + 1), size) > 0)
//			{
//				flag = 1;
//				if (1 == size)
//				{
//					Swap(_list + size * j, _list + size * (j + 1), sizeof(char));
//				}
//				else if (4 == size)
//				{
//					Swap(_list + size * j, _list + size * (j + 1), sizeof(int));
//				}
//				else if (8 == size)
//				{
//					Swap(_list + size * j, _list + size * (j + 1), sizeof(double));
//				}
//			}
//			
//		}
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
//void show(int a[], int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	puts(" ");
//}
//void show1(double a[], int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%lf  ", a[i]);
//	}
//	puts(" ");
//}
//void show2(char a[], int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%5d  ", a[i]);
//	}
//	puts(" ");
//}
//int main()
//{
//	//sort(int a[],int sz)  float a[]  double a[]  char a[]
//	//sort(int *a,int sz)   float *a   double *a   char *a
//	int arr[] = { 45,3,234,655,66,43,33,45,56,10 };
//	double arr1[] = { 90.45,4.56,5.67,2.34,3.45,4.56,56.67,7.89,56.78 };
//	char arr2[] = { 2,78,3,19,29,90,100,79 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	show(arr, sz);
////	qsort(arr, sz, sizeof(int),Company);
//	sort(arr, sz, sizeof(int), Company);
//	show(arr, sz);
//	puts("\n");
//
//	show1(arr1, (sizeof(arr1) / sizeof(arr1[0])));
//	sort(arr1, (sizeof(arr1) / sizeof(arr1[0])), sizeof(double), Company);
//	show1(arr1, (sizeof(arr1) / sizeof(arr1[0])));
//	puts("\n");
//
//	show2(arr2, (sizeof(arr2) / sizeof(arr2[0])));
//	sort(arr2, (sizeof(arr2) / sizeof(arr2[0])), sizeof(char), Company);
//	show2(arr2, (sizeof(arr2) / sizeof(arr2[0])));
//
//	return EXIT_SUCCESS;
//}
//
//
//
//
//
//
//
////
////int ADD(int const x, int const y)
////{
////	return x + y;
////}
////int MUL(int const x, int const y)
////{
////	return x * y;
////}
////int DIV(int const x, int const y)
////{
////	if (y == 0)
////	{
////		return -1;
////	}
////	return x / y;
////}
////int SUB(int const x, int const y)
////{
////	return x - y;
////}
////int EXIT(int const x,int const y)
////{
////	puts("��ӭ����\n");
////	return EXIT_SUCCESS;
////}
////enum Pfun{
////	Exit,
////	Add,
////	Sub,
////	Mul,
////	Div,
////};
////void Menu()
////{
////	printf("#####################################################\n");
////	printf("###  1���ӷ�  2������  3���˷�  4������  0���˳�  ###\n");
////	printf("#####################################################\n");
////
////}
////int main()
////{
////	int a = 10;
////	int b = 5;
////	int(*pfun[5])(int,int) = { EXIT,ADD,SUB,MUL,DIV };
////	int input = 0;
////	int ret = 0;
////	while (1)
////	{
////		Menu();
////		scanf("%d", &input);
////		if (input > 0 && input <= 4)
////		{
////			puts("������������������");
////			scanf("%d%d", &a, &b);
////		}
////		puts(" ");
////
////		switch (input)
////		{
////		case Add:
////			ret = pfun[input](a, b);
////			printf("����ǣ�%d\n", ret);
////			break;
////
////		case Sub:
////			ret = pfun[input](a, b);
////			printf("����ǣ�%d\n", ret);
////			break;
////
////		case Mul:
////			ret = pfun[input](a, b);
////			printf("����ǣ�%d\n", ret);
////			break;
////
////		case Div:
////			ret = pfun[input](a, b);
////			printf("����ǣ�%d\n", ret);
////			break;
////
////		case Exit:
////			printf("�˳�\n");
////			pfun[input](a, b);
////			goto LOOP;
////			break;
////
////		default:
////			printf("��������,������ѡ��\n");
////			break;
////		}
////	}
////LOOP:
////	return EXIT_SUCCESS;
////}