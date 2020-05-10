#include  "58.h"


//结构体
typedef struct Stu {
	char name[20];
	int age;
	char telp[20];
}stu;//定义了一个结构体类型
int main()
{
	struct Stu 孙悟空 = { "孙悟空",500,"1234567" };//定义了一个结构体变量
	printf("%s\n%d\n%s\n", 孙悟空.name, 孙悟空.age, 孙悟空.telp);
	puts("");
	stu 猪八戒 = { "猪八戒",700,"2345678" };
	printf("%s\n%d\n%s\n", 猪八戒.name, 猪八戒.age, 猪八戒.telp);

	return 0;
}

////指针初阶
//void show(int(*a)[5], int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		puts(" ");
//	}
//	puts("");
//}
//void Show(int a[][5], int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		puts(" ");
//	}
//	puts("");
//}
//int main()
//{
//	int a[3][5] = { 0 };
//	Show(a, 3);
//	show(a, 3);
//
//	return 0;
//}


//int main()
//{
//	//int* arr[5];//指针数组，每个元素都是一个 int* 类型的指针
//	//int(*arr1)[5];//数组指针，*arr 指向一个数组，该数组——>每个元素都是一个 int 类型数据,
//	
//	//int* arr[5];
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	//char c = 'c';
//	//arr[0] = &c;//让 arr 数组的0号元素存放 c 的地址
//
//	//int(*arr2)[5];
//	//int a[5];
//	//arr2 = &a;//arr2 中存储数组 a 的地址
//	//printf("&a[0]：0x%p\n", a);
//	//printf("&a   ：0x%p\n", &a);
//	//printf("arr   ：0x%p\n", arr2);
//	//printf("arr+1   ：0x%p\n", arr2+1);
//	//printf("&a[0]+1   ：0x%p\n", a+1);
//	//printf("&a+1   ：0x%p\n", &a+1);
//
//	return 0;
//}