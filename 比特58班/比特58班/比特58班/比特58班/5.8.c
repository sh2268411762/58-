//#include "58.h"




//int MyStrlen(char* str)//���ַ�������
//{
////	code1
//	if (NULL == str)//��ָ�뷵��0
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
//int main()//ָ������
//{
//	int a[10];
//	int* p = a;//ָ��������Ԫ�صĵ�ַ
//	int* q = &a[9];//���һ��Ԫ�صĵ�ַ
//	printf("%d\n", q - p);
//
//
//	//char* str = "helloworld";
//	//int len = MyStrlen(str);
//	//printf("%d\n", len);
//	return 0;
//}

//int main()//Խ�����
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = a;
//	//for (size_t i = 0; i <= 5; i++)//�������
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
//	*pi = 0;//*pi����x
//	return 0;
//}

//ָ���1
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("0x��%p\n", &n);
//	printf("0x��%p\n", pc + 1);
//	printf("0x��%p\n", pc);
//	printf("0x��%p\n", pi + 1);
//	printf("0x��%p\n", pi);
//
//	return 0;
//}