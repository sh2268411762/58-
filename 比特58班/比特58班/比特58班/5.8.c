//#include "58.h"




//int MyStrlen(char* str)//求字符串长度
//{
////	code1
//	if (NULL == str)//空指针返回0
//	{
//		return 0;
//	}
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//		//end = end + 1;
//	}
//	return end - start;
//}
//int main()//指针运算
//{
//	int a[10];
//	int* p = a;//指向数组首元素的地址
//	int* q = &a[9];//最后一个元素的地址
//	printf("%d\n", q - p);
//
//
//	//char* str = "helloworld";
//	//int len = MyStrlen(str);
//	//printf("%d\n", len);
//	return 0;
//}

//int main()//越界访问
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = a;
//	//for (size_t i = 0; i <= 5; i++)//程序崩溃
//	for (size_t i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0x11223344;
//	char* pc = (char*)&x;
//	int* pi = (int*)&x;
//
//	*pc = 0;
//	*pi = 0;//*pi就是x
//	return 0;
//}

//指针加1
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("0x：%p\n", &n);
//	printf("0x：%p\n", pc + 1);
//	printf("0x：%p\n", pc);
//	printf("0x：%p\n", pi + 1);
//	printf("0x：%p\n", pi);
//
//	return 0;
//}