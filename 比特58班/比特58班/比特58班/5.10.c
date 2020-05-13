//#include  "58.h"
//
//
////结构体
//typedef struct Stu {
//	char name[20];
//	int age;
//	char telp[20];
//}stu;//定义了一个结构体类型
//
//typedef struct pos {
//	int x;
//	int y;
//	char addr[128];
//	char add[128];
//	int* p;
//}pos_t, * pos_p, pos_arr[10];
//
//struct STU {
//	char name[16];
//	int age;
//	char sex;
//	int score[8];//成绩
//};
//
//void Show(struct STU x)
//{
//	printf("Show：%p\n", &x);
//	printf("%s  %d  %c\n", x.name, x.age, x.sex);
//	long sz = sizeof(x.score) / sizeof(x.score[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d：%d\n", i, x.score[i]);
//	}
//}
//void Show1(struct STU* p,int sz)
//{
//	printf("Show1：0x%p\n", p);
//	printf("%s  %d  %c\n", p->name, p->age, p->sex);
//	sz = sizeof(p->score) / sizeof(p->score[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d：%d\n", i, p->score[i]);
//	}
//	puts("");
//}
//
//int main()
//{
//	//struct Stu 孙悟空 = { "孙悟空",500,"1234567" };//定义了一个结构体变量
//	//printf("%s\n%d\n%s\n", 孙悟空.name, 孙悟空.age, 孙悟空.telp);
//	//puts("");
//	//stu 猪八戒 = { "猪八戒",700,"2345678" };
//	//printf("%s\n%d\n%s\n", 猪八戒.name, 猪八戒.age, 猪八戒.telp);
//	//puts("\n");
//
//	////初始化
//	//int a = 100;
//	//pos_t sust_pos = { 23,25 ,{'i','t','u'},{"二球大学"},&a };//x = 23  y = 25，必须以初始化的形式向整体赋值
//	//pos_arr arr;//结构体数组类型
//	////赋值
//	//pos_p P = &sust_pos;
//	//sust_pos.x = 24;
//	//sust_pos.y = 46;
//	//sust_pos.addr[0] = 's';
//	//sust_pos.addr[1] = 'e';
//	//printf("%d\n%d\n%s\n%s\n0x%p\n\n", sust_pos.x, sust_pos.y, sust_pos.addr, sust_pos.add, sust_pos.p);
//	//printf("P：0x%p\n结构体地址：0x%p\n\n", P, &sust_pos);
//	//pots("");
//
//	struct STU tom = { "tom",21,'m',{90,89,78,67,54,34,78,89} };
//	struct STU* p = &tom;
//	printf("%s  %d  %c\n", tom.name, tom.age, tom.sex);
//	int sz = sizeof(tom.score) / sizeof(tom.score[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d：%d\n", i, tom.score[i]);
//	}
//	puts("");
//	p->age = 80;
//	p->sex = 'w';
//	printf("%s  %d  %c\n", p->name, p->age, p->sex);
//	sz = sizeof(p->score) / sizeof(p->score[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d：%d\n", i, p->score[i]);
//	}
//	puts("");
//	printf("main：0x%p\n", &tom);
//	Show(tom);//值拷贝，按值传参
//	puts("\n");
//	printf("main：0x%p\n", p);
//	Show1(p, sz);
//	//Show1(&tom, sz);
//
//
//	return 0;
//}
//
//////指针初阶
////void show(int(*a)[5], int n)
////{
////	int i = 0;
////	for (; i < n; i++)
////	{
////		int j = 0;
////		for (; j < 5; j++)
////		{
////			printf("%4d", a[i][j]);
////		}
////		puts(" ");
////	}
////	puts("");
////}
////void Show(int a[][5], int n)
////{
////	int i = 0;
////	for (; i < n; i++)
////	{
////		int j = 0;
////		for (; j < 5; j++)
////		{
////			printf("%4d", a[i][j]);
////		}
////		puts(" ");
////	}
////	puts("");
////}
////int main()
////{
////	int a[3][5] = { 0 };
////	Show(a, 3);
////	show(a, 3);
////
////	return 0;
////}
//
//
////int main()
////{
////	//int* arr[5];//指针数组，每个元素都是一个 int* 类型的指针
////	//int(*arr1)[5];//数组指针，*arr 指向一个数组，该数组——>每个元素都是一个 int 类型数据,
////	
////	//int* arr[5];
////	//printf("%d\n", sizeof(arr));
////	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));
////	//char c = 'c';
////	//arr[0] = &c;//让 arr 数组的0号元素存放 c 的地址
////
////	//int(*arr2)[5];
////	//int a[5];
////	//arr2 = &a;//arr2 中存储数组 a 的地址
////	//printf("&a[0]：0x%p\n", a);
////	//printf("&a   ：0x%p\n", &a);
////	//printf("arr   ：0x%p\n", arr2);
////	//printf("arr+1   ：0x%p\n", arr2+1);
////	//printf("&a[0]+1   ：0x%p\n", a+1);
////	//printf("&a+1   ：0x%p\n", &a+1);
////
////	return 0;
////}