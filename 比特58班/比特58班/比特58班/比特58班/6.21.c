//#include "58.h"
//
//
//
//
//
//
////char* fun(void)
////{
////	char p[] = "hello world";
////	return p;
////}
//void fun_(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//int main()
//{
////	char* str = NULL;
////	str = fun();
//////	str = "hello world";
////	printf(str);
////	printf("\n");
////	puts(str);
//
//
//	char* str = NULL;
//	fun_(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	return EXIT_SUCCESS;
//}
//
//
//
//////realloc
//////������������ڴ��С
////int main()
////{
////	char * ptr = (char *)malloc(5);
////	if (NULL == ptr)
////	{
////		perror("malloc");
////		return 1;
////	}
////	printf("ptr:     0x%p\n", ptr);
////	
////	char* new_addr = realloc(ptr, 10000000);
////	if (NULL == new_addr)
////	{
////		perror("realloc");
////		return 2;
////	}
////	printf("ptr:     0x%p\n", ptr);
////	printf("new_addr:0x%p\n", new_addr);
////	return EXIT_SUCCESS;
////}
//
//
//
//
//
//
////int main()
////{
////	int sum = 0;
////	printf("������Ҫ�����������ָ�����-->");
////	int num = 0;
////	scanf("%d", &num);
////
////
////	int* ptr = (int*)malloc(num * sizeof(int));
//////	int* ptr = (int*)calloc(num * sizeof(int));
////	if (NULL == ptr)
////	{
////		printf("����ʧ��\n");
////		return 1;
////	}
////	else
////	{
////		printf("���������ݣ�-->\n\t");
////		for (int i = 0; i < num; i++)
////		{
////			scanf("%d", ptr + i);
////		}
////
////
////		for (int i = 0; i < num; i++)
////		{
////			if (num - 1 == i)
////			{
////				printf("%d=", ptr[i]);
////			}
////			else
////			{
////				printf("%d+", ptr[i]);
////			}
////			sum += ptr[i];
////		}
////
////		printf("%d\n", sum);
////		free(ptr);
////	}
////
////	return EXIT_SUCCESS;
////}
//
//
//
//////malloc �� free
//////realloc�����ռ�
//////��ѿռ����������ڴ棬����ֵ void*
////int main()
////{
////	int num = 0;
////	scanf("%d", &num);
////	int* p = (int *)malloc(num * sizeof(int));
////	if (NULL == p)
////	{
////		printf("����ʧ��\n");
////	}
////	else
////	{
////		for (int i = 0; i < num; i++)
////		{
////			scanf("%d", p + i);
//////			scanf("%d", &a[i]);
////		}
////		printf("��ӡ��");
////		int max = 0;
////		for (int i = 0; i < num; i++)
////		{
////			printf("%d   ", p[i]);
////			if (max < p[i])
////			{
////				max = p[i];
////			}
////		}
////		printf("\n\n���ֵ��%d\n", max);
////		free(p);
////	}
////	return EXIT_SUCCESS;
////}