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
//	printf("请输入有多少个数据：-->");
//	int num = 0;
//	scanf("%d", &num);
//
//	printf("请输入数据列表：");
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
//	printf("最大值：%d\n", max);
//	return EXIT_SUCCESS;
//}
//
//
//
//
//
//////联合体本身大小不是把所有类型加起来的大小
//////一般是有联合体内部最大元素的大小决定
//////所有元素共享空间
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
////枚举
////枚举是一种类型，编译时会进行类型检查
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
//////	RED = 100;  //错误，枚举类型本身是整型常量，不可以被赋值
////
////	color_c a = BLUE;
////	printf("\n%d\n", a);
////	return EXIT_SUCCESS;
////}