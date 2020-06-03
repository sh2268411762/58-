//#include "58.h"
//
//void ADD(int x, int y)
//{
//	printf("%d\n", x + y);
//}
//int main()
//{
//	int a = 10, b = 20;
//	void (*p)(int, int) = ADD;
//	(*p)(a, b);
//	p(a, b);
//	return EXIT_SUCCESS;
//}


//void print(int** _pp)
//{
//
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	print(pp);
//	printf("0X%p£º", &print);
//	return EXIT_SUCCESS;
//}
//
//void print(int* P, int num)
//{
//	for (size_t i = 0; i < num; i++)
//	{
//
//	}
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int* p = a;
//	print(a, sz);
//	return EXIT_SUCCESS;
//}


//void f(int *arr,int row, int col)
//{
//	
//	for (int i = 0; i < row * col;i++)
//	{
//		if ((0 == (i ) % (row + 2)) && (i != 0))
//		{
//			printf("\n");
//		}
//		
//		printf("%4d", arr[i]);
//	}
//}
//int main()
//{
//	int a[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	f(a, 3, 5);
//	return EXIT_SUCCESS;
//}