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
//	////һά����
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16    ���� a �ĳ���
//	//printf("%d\n", sizeof(a + 0));//4    ��һ��Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*a));//4   a ��ʾ��Ԫ�ص�ַ��������Ϊ int    
//	//printf("%d\n", sizeof(a + 1));//4   ��ַ
//	//printf("%d\n", sizeof(a[1]));//4     a[1] �ĳ���
//	//printf("%d\n", sizeof(&a));//4       ����ĵ�ַ
//	//printf("%d\n", sizeof(*&a));//16  ���� a �ĳ���
//	//printf("%d\n", sizeof(&a + 1));//4   ����ĵ�ַ��һ
//	//printf("%d\n", sizeof(&a[0]));//4    ��һ��Ԫ�صĵ�ַ
//	//printf("%d\n\n\n", sizeof(&a[0] + 1));//4  ��ַ��һ
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
////	printf("%d\n", strlen(arr));//s>=6  ��ȷ��
////	printf("%d\n", strlen(arr + 0));//s>=6  ��ȷ��
//////	printf("%d\n", strlen(*arr));//����
//////	printf("%d\n", strlen(arr[1]));//����
////	printf("%d\n", strlen(&arr));//s
////	printf("%d\n", strlen(&arr + 1));//s-6  ��ȷ��
////	printf("%d\n", strlen(&arr[0] + 1));//s-1  ��ȷ��
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
////	printf("%d\n", strlen(&a + 1));//���ֵ
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
//////	printf("%d\n", strlen(*p));//����
//////	printf("%d\n", strlen(p[1]));//����
//////	printf("%d\n", strlen(&p));//����     ���
//////	printf("%d\n", strlen(&p + 1));//����  ���
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