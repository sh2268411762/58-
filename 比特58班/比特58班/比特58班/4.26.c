//#include "58.h"
//
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	puts("");
//
//
//	char c1 = 1;
//	printf("%u\n", sizeof(c1));
//	printf("%u\n", sizeof(+c1));
//	printf("%u\n", sizeof(!c1));//4
//	return 0;
//}




//void show(void)
//{
//	printf("cccccccccc\n");
//}
//
//typedef struct Stu//typedef 类型重命名
//{
//	char name[128];
//	int age;
//	char sex[10];
//	int telephone;
//}S_t;
//void set_age1(struct Stu S1)
//{
//
//	printf("%s\n%d\n%s\n%d\n", S1.name, S1.age, S1.sex, S1.telephone);
//}
//void set_age2(struct Stu* pS1)
//{
//	pS1->age = 18;
//}
//int main()//下标引用、函数调用和结构成员
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", arr[0]);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[2]);
//
//	//show();
//
//	struct Stu S1 = { "四球",18,"不男不女",123476 };
//	struct Stu* pS1 = &S1;
//	S1.age = 20;
//	set_age1(S1);
//
//	pS1->age = 20;
//	set_age2(pS1);
//
//
//	struct Stu S2 = { "二球",18,"w",123456 };
//	S_t S3 = { "三球",39,"w",234567 };
//
//	printf("name：%s\n", S2.name);
//	printf("%d\n%s\n%d\n", S3.age, S3.sex, S3.telephone);
//	return 0;
//}


//int main()//逗号表达式
//{
//	int a = (1, 2, 3, 4, 5, 1);
//	//printf("%d\n", a);
//
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}


//int main()//三目操作符
//{
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a++ : b++;
//	printf("Max=%d\n", max);
//	return 0;
//}


//int main()// 逻辑与 逻辑或
//{
//	int i = 0;
//	int a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\ni = %d\n", a, b, c, d, i);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//if (a == b)
//	//{
//	//	printf("a等于b\n");
//	//}
//	//else
//	//{
//	//	printf("a不等于b\n");
//	//}
//
//	//if (a >= 10 && b <= 20 && c == 30)
//	//{
//	//	printf("aaaaaaaaaaaaaaa\n");
//	//}
//
//	int flag = 1;
//	flag == 0 || printf("a\n");
//	return 0;
//}