//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 20
//
//int IsOdd(int _num);
//struct Student
//{
//	char name[SIZE];
//	int age;
//	char sex[5];
//	char id[SIZE];
//};
//int main(void)
//{
	//struct Student S1 = { "张三",20,"男","00001801" };
	//struct Student S2 = { "李四",28,"男","00001802" };
	//struct Student S3;
	//strcpy(S3.name, "王麻子");
	//S3.age = 26;
	//strcpy(S3.sex, "男");
	//strcpy(S3.id, "00001803");
	//struct Student* pS2 = &S2;//定义S2的指针
	//printf("%s  %d  %s  %s\n", S1.name, S1.age, S1.sex, S1.id);
	//printf("%s  %d  %s  %s\n",pS2->name,pS2->age,pS2->sex,pS2->id);
	//printf("%s  %d  %s  %s\n", (*pS2).name, (*pS2).age, (*pS2).sex, (*pS2).id);
	//printf("%s  %d  %s  %s\n", S3.name, S3.age, S3.sex, S3.id);
	//结构体


	//int flag = 1;
	//flag = 3;
	//if (1 == flag)
	//{
	//	printf("HAHA\n");
	//}
	//if (1 == flag % 2)
	//{
	//	printf("haha\n");
	//}
	//else
	//{
		//printf("AAAAAAAA\n");
	//}		
	//两个条件都要判断,双分支条件语句

	//if (1 == flag)
	//{
	//	printf("AAAAAAAAAA");
	//	puts("");
	//	printf("hehe\n");
	//}
	//else if (2 == flag)
	//{
	//	printf("aaaaaaaaaaaaaaa\n");
	//	puts("");
	//	printf("haha\n");
	//}
	//else
	//{
	//	printf("BBBBBBBBB\n");
	//	printf("偶吼\n");
	//}
	//多选一


	//puts("请输入你的年龄\nPlease Enter Your Age:-->");
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//{
	//	puts("未成年");
	//}
	//else if(age>=18&&age<30)
	//{
	//	puts("青年");
	///}
	//else if (age >= 10 && age < 60)
	//{
	//	puts("中年");
	//}
	//else
	//{
	//	printf("老年\n");
	//}
	//多分支条件语句

	//int num = 0;
	//printf("请输入一个判断数：-->");
	//scanf("%d", &num);
	//int ret = IsOdd(num);
	//if (1 == ret)
	//{
	//	puts("是");
	//}
	//else
	//{
	//	puts("不是");
	//}

	//printf("请输入范围:-->");
	//int start = 0;
	//int end = 0;
	//int count = 0;
	//scanf("%d%d", &start, &end);
	//int start1 = start;
	//if (1 == start % 2)
	//{
	//	for (; start <= end; start += 2)
	//	{
	//		printf("%d,", start);
	//		count++;
	//	}
	//}
	//else
	//{
	//	start + 1;
	//	for (; start <= end; start += 2)
	//	{
	//		printf("%d,", start + 1);
	//		count++;
	//	}
	//}
	//printf("\n%d到%d之间有%d个奇数\n", start1, end, count);

	//int day = 0;
	//puts("请输入日期:-->");
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	puts("weekday");
	//	break;

	//case 2:
	//	printf("星期二\n");
	//	puts("weekday");
	//	break;

	//case 3:
	//	printf("星期三\n");
	//	puts("weekday");
	//	break;

	//case 4:
	//	printf("星期四\n");
	//	puts("weekday");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	puts("weekday");
	//	break;

	//case 6:
	//	printf("星期六\n");
	//	puts("weekend");
	//	break;

	//case 7:
	//	printf("星期日\n");
	//	puts("weekend");
	//	break;

	// default :
	//	 printf("输入有误！！！\n");
	//	 break;
	//}

	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	m++;
	//case 2:
	//	n++;
	//case 3:
	//	switch (n)
	//	{//switch允许嵌套使用
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d, n = %d\n", m, n);


//	int i = 0;
//	while (i <= 100)
//	{
//		if (5 == i)
//		{
//			break;
//		}//跳出当前循环，永久终止循环
//		if (5 == i)
//		{
//			continue;
//		}//结束本次循环，continue之后的语句不再执行
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int IsOdd(int _num)
//{
//	if (1 == _num % 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
