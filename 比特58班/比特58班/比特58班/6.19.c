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
//
//
//int main()
//{
//
//	int a[100];
//	printf("�������ж��ٸ����ݣ�-->");
//	int num = 0;
//	scanf("%d", &num);
//
//	printf("�����������б�");
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	int max = a[0];
//	for (int i = 0; i < num; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//
//	printf("���ֵ��%d\n", max);
//	return EXIT_SUCCESS;
//}
//
//
//
//
//
//////�����屾���С���ǰ��������ͼ������Ĵ�С
//////һ�������������ڲ����Ԫ�صĴ�С����
//////����Ԫ�ع���ռ�
////union _un
////{
////	int a;
////	char b;
////	char c;
////	char d;
////	int e;
////};
////union _UN
////{
////	int a;
////	char b;
////};
////int main()
////{
////	union _un obj;
////	obj.a = 0x11223344;
////	printf("0x%p\n", &obj.a);
////	printf("0x%p\n", &obj.b);
////	printf("0x%p\n", &obj.c);
////	printf("0x%p\n", &obj.d);
////	printf("0x%p\n\n", &obj.e);
////
////	printf("%x\n", obj.a);
////	printf("%x\n", obj.b);
////	printf("%x\n", obj.c);
////	printf("%x\n", obj.d);
////	printf("%x\n\n\n", obj.e);
////
////	union _UN OBJ;
////	OBJ.a = 1;
////	printf("%d\n", OBJ.b);
////
////	return EXIT_SUCCESS;
////}
//
//////union _u {
//////	int a;
//////	int b;
//////	char c;
//////};
//////int f1(int a)
//////{
//////	return 2 * a;
//////}
//////int f2(int b)
//////{
//////	return 3 * b;
//////}
//////char f3(char c)
//////{
//////	return 4 * c;
//////}
//////int main()
//////{
//////	union _u obj;
//////	obj.a = 10;
//////	fi(obj.a);
//////
//////	obj.b = 10;
//////	fi(obj.b);
//////
//////	obj.c = 10;
//////	fi(obj.c);
//////	return EXIT_SUCCESS;
//////}
//
//
//
//
////ö��
////ö����һ�����ͣ�����ʱ��������ͼ��
////enum color
////{
////	RED,
////	BLACK,
////	GREEN,
////	YELLOW,
////	BLUE
////};
////typedef enum color color_c;
////int main()
////{
////	enum color c = RED;
////	printf("%d\n", c);
////	printf("%d\n", RED);
////	printf("%d\n", BLACK);
////	printf("%d\n", GREEN);
////	printf("%d\n", YELLOW);
////	printf("%d\n", BLUE);
//////	RED = 100;  //����ö�����ͱ��������ͳ����������Ա���ֵ
////
////	color_c a = BLUE;
////	printf("\n%d\n", a);
////	return EXIT_SUCCESS;
////}