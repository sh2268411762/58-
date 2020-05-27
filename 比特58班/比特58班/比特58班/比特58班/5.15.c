//#include "58.h"



//void Inc(int* p)
//{
//	if (NULL == p)
//	{
//		return;
//	}
//	//assert(p != NULL);
//	*p += 10;
//}
//int main()//断言
//{
//	int a = 1;
//	printf("%d\n", a);
//	Inc(&a);
//	//Inc(NULL);
//	printf("%d\n", a);
//	return 0;
//}


//int main()//const
//{
//	const int a = 10;
//	//a = 20;//const修饰的变量不能被直接修改
//	int b = 20;
//	int* p = (int*)&a;
//	*p = 20;
//	printf("0x%p\n", &a);
//	printf("0x%p\n", p);
//	p = &b;
//	printf("0x%p\n", &b);
//	printf("0x%p\n", p);
//	printf("%d\n%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (; i < 10; i++)
//	{
//		arr[i] = 0;
//		printf("hehehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (; i < 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

