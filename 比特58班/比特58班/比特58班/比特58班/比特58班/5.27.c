//#include "58.h"



////数组指针
//int main()
//{
//	//int* p1[10];//指针数组，p1 先与[] 结合，在与 * 结合
//	//int(*p2)[10];//数组指针，p 先和 * 结合，成为一个指针变量，在与 [] 结合，成为一个数组指针
//
//	//int arr[10];
//	////1. sizeof(arr)   &arr    arr代表整个数组，其余都是代表数组首元素
//	//printf("0x%p\n", arr);//数组首元素地址
//	//printf("0x%p\n", &arr);//数组地址
//	//printf("0x%p\n", arr + 1);//+ 4
//	//printf("0x%p\n", &arr + 1);//= 40
//
//	//int* p = arr;//用指针 p 来保存数组
//	//int(*P)[10] = &arr;//数组指针，保存数组的地址
//	//printf("0x%p,0x%p\n", p, p + 1);
//
//	return EXIT_SUCCESS;
//}


////字符指针
//int main()
//{
//	char c = 'a';//c 是一个变量，占一个字节，'a'是一个字符
//	printf("十进制：%d，字符：%c，十六进制：%x\n", c, c, c);
//	char *p = &c;//字符指针
//	printf("十进制：%d，字符：%c，十六进制：%x\n", *p, *p, *p);
//	const char * const str = "Hello World!";
//	printf("%s\n", str);
//	printf("%d,%c\n", *str, *str);
//	printf("%s\n", str + 6);
//	return EXIT_SUCCESS;
//}