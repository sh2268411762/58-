//#include "58.h"
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
//
//int main()
//{
//	////一维数组
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16    数组 a 的长度
//	//printf("%d\n", sizeof(a + 0));//4    第一个元素的地址
//	//printf("%d\n", sizeof(*a));//4   a 表示首元素地址，解引用为 int    
//	//printf("%d\n", sizeof(a + 1));//4   地址
//	//printf("%d\n", sizeof(a[1]));//4     a[1] 的长度
//	//printf("%d\n", sizeof(&a));//4       数组的地址
//	//printf("%d\n", sizeof(*&a));//16  数组 a 的长度
//	//printf("%d\n", sizeof(&a + 1));//4   数组的地址加一
//	//printf("%d\n", sizeof(&a[0]));//4    第一个元素的地址
//	//printf("%d\n\n\n", sizeof(&a[0] + 1));//4  地址加一
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//
////	printf("%d\n", strlen(arr));//s>=6  不确定
////	printf("%d\n", strlen(arr + 0));//s>=6  不确定
//////	printf("%d\n", strlen(*arr));//错误
//////	printf("%d\n", strlen(arr[1]));//错误
////	printf("%d\n", strlen(&arr));//s
////	printf("%d\n", strlen(&arr + 1));//s-6  不确定
////	printf("%d\n", strlen(&arr[0] + 1));//s-1  不确定
//
////	char a[] = "abcdef";
////	printf("%d\n", sizeof(a));//7
////	printf("%d\n", sizeof(a + 0));//4
////	printf("%d\n", sizeof(*a));//1
////	printf("%d\n", sizeof(a[1]));//1
////	printf("%d\n", sizeof(&a));//4
////	printf("%d\n", sizeof(&a + 1));//4
////	printf("%d\n\n\n", sizeof(&a[0] + 1));//4
////
////	printf("%d\n", strlen(a));//6
////	printf("%d\n", strlen(a + 0));//6
//////	printf("%d\n", strlen(*a));//
//////	printf("%d\n", strlen(a[1]));//
////	printf("%d\n", strlen(&a));//6
////	printf("%d\n", strlen(&a + 1));//随机值
////	printf("%d\n", strlen(&a[0] + 1));//5
//
//
////	char *p = "abcdef";
////	//printf("%d\n", sizeof(p));//4
////	//printf("%d\n", sizeof(p + 0));//4
////	//printf("%d\n", sizeof(*p));//1
////	//printf("%d\n", sizeof(p[1]));//1
////	//printf("%d\n", sizeof(&p));//4
////	//printf("%d\n", sizeof(&p + 1));//4
////	//printf("%d\n\n\n", sizeof(&p[0] + 1));//4
////
////	printf("%d\n", strlen(p));//6
////	printf("%d\n", strlen(p + 1));//5
//////	printf("%d\n", strlen(*p));//错误
//////	printf("%d\n", strlen(p[1]));//错误
//////	printf("%d\n", strlen(&p));//错误     随机
//////	printf("%d\n", strlen(&p + 1));//错误  随机
////	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	int a[3][4] = { 0 };
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0] + 1));//4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//
//
//	return EXIT_SUCCESS;
//}