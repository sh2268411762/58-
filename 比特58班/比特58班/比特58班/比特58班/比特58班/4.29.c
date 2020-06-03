//#include "58.h"
//
//
//
////指针
//int main()
//{
//	int a = 1;//1是整数
//	int* p = 1;//1是地址
//	int* p;//野指针或悬垂指针，
	//
	//char c = 'c';
	//char* p = &c;

	//printf("&c：0x%p\n", &c);
	//printf("p：0x%p\n", p);
	//printf("p：0x%p\n\n", p + 1);

	//int a = 10;
	//int* q = &a;
	//*q = 20;
	//printf("%p\n", q);
	//q = 20;
	//printf("%d\n", a);
	//printf("%p\n", &a);
	//printf("%d\n", q);
	//printf("%p\n", q);
	//printf("%p\n", &q);

	//printf("&a：0x%p\n", &a);
	//printf("q：0x%p\n", q);
	//printf("q + 1：0x%p\n", q + 1);
	//printf("q + 1：0x%p\n\n", (short*)q + 1);

	//double d = 3.4;
	//double* w = &d;
	//printf("&d：0x%p\n", &d);
	//printf("w：0x%p\n", w);
	//printf("w：0x%p\n\n", w + 1);


//	puts("");
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0; //重点在调试的过程中观察内存的变化。
//	*pi = 0; //重点在调试的过程中观察内存的变化。
//	return 0;
//}


//int main()
//{
//	int a = 10  ;
//	int* p = &a;
//	printf("p:%p\n",p);
//	int b = *p++;
//	printf("p:%p\n",p);
//	printf("%d\n", b);
//	return 0;
//}

//int i;//全局变量，默认为0,有符号
//int main()
//{
//	float f = 3.14;
//	int num = f;
//	i--;//i = i - 1--> -1 二进制是全1
//	if (i < sizeof(int))
//	{
//		printf("aa");
//	}
//	else
//	{
//		printf("bb");
//	}
//	return 0;
//}