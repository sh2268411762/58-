//#include "58.h"



////����ָ��
//int main()
//{
//	//int* p1[10];//ָ�����飬p1 ����[] ��ϣ����� * ���
//	//int(*p2)[10];//����ָ�룬p �Ⱥ� * ��ϣ���Ϊһ��ָ����������� [] ��ϣ���Ϊһ������ָ��
//
//	//int arr[10];
//	////1. sizeof(arr)   &arr    arr�����������飬���඼�Ǵ���������Ԫ��
//	//printf("0x%p\n", arr);//������Ԫ�ص�ַ
//	//printf("0x%p\n", &arr);//�����ַ
//	//printf("0x%p\n", arr + 1);//+ 4
//	//printf("0x%p\n", &arr + 1);//= 40
//
//	//int* p = arr;//��ָ�� p ����������
//	//int(*P)[10] = &arr;//����ָ�룬��������ĵ�ַ
//	//printf("0x%p,0x%p\n", p, p + 1);
//
//	return EXIT_SUCCESS;
//}


////�ַ�ָ��
//int main()
//{
//	char c = 'a';//c ��һ��������ռһ���ֽڣ�'a'��һ���ַ�
//	printf("ʮ���ƣ�%d���ַ���%c��ʮ�����ƣ�%x\n", c, c, c);
//	char *p = &c;//�ַ�ָ��
//	printf("ʮ���ƣ�%d���ַ���%c��ʮ�����ƣ�%x\n", *p, *p, *p);
//	const char * const str = "Hello World!";
//	printf("%s\n", str);
//	printf("%d,%c\n", *str, *str);
//	printf("%s\n", str + 6);
//	return EXIT_SUCCESS;
//}