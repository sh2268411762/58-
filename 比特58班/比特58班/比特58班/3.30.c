//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
////extern int g_value;    声明第三方代码
//int g_value = 1000; //全局变量，整个程序都可以用
//
//#define M 1234
//#define DOUBLE(x) ((x)+(x))
//
//int ADD(int _x, int _y)
//{
//	int _z = _x + _y;
//	return _z;
//}
//
//void SWAP(int _x, int _y)
//{
//	int temp = _x;
//	_x = _y;
//	_y = temp;
//	printf("交换后m=%d,n=%d\n", _x, _y);
//}
//
//void Show()
//{
//	//int i = 0;
//	static int i = 0;
//	i++;
//	printf("current i is : %d\n", i);
//}
//
//int Double(int x)
//{
//	return x * x;
//}
//void SHOW()//static修饰
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		puts("hello world!!!!");
//	}
//}

//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//printf("请输入两个数：-->\n");
	//scanf("%d%d", &num1, &num2);
	//int ret = ADD(num1, num2);
	//printf("%d+%d=%d\n", num1, num2, ret);

	//int m = 8;
	//int n = 9;
	//printf("交换前m=%d,n=%d\n", m, n);
	//SWAP(m, n);

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	Show();
	//	Sleep(1000);
	//}

	//SHOW();

	//printf("M=%d\n", M);

	//int i = 0;
	//printf("请输入i的值:-->\n");
	//scanf("%d", &i);
	//int ret = Double(i);
	//printf("%d\n", ret);
	//printf("%d\n", DOUBLE(i));
	//printf("%d\n", 10*DOUBLE(10 + 1));

	//int a = 10;
	//int* p = &a;//指针就是地址,p就是指针变量，p指向a
	////p内存放a的地址
	//printf("0x=%p, 0x=%p, %d, %d\n", &a, p, a, *p);
	//*p = 20;//*p就是1，用的a的空间，左值
	//int b = *p;//用的a的内容，右值
	//printf("%d %d\n", a, b);
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(double*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(float*));

	//return 0;
//}