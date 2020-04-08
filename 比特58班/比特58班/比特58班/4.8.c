//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <math.h>
//#include <time.h>
//#define SIZE 128
//#define NAME "admin"
//#define PASSWD "bitnb"
//#define TRY_COUNT 3



//int main()
//{
//	system("shut -t -s 180");
//	printf("机器将会在3分钟后关机，除非输入我是猪，否则等着关机吧\n");
//	char input[SIZE];
//
//	while (1)
//	{
//		printf("input:-->");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			printf("关机程序取消\n");
//			break;
//		}
//		else
//		{
//			printf("好好说话\n");
//		}
//	}
//	return 0;
//}

//模拟用户登录

//int main()
//{
//	char name[SIZE];
//	char passwd[SIZE];
//	int count = TRY_COUNT;
//	LOOP:count = TRY_COUNT;
//	puts("");
//	while (count>0) 
//	{
//		printf("请输入你的账号# ：-->");
//		scanf("%s", name);//scanf传数组不需要  &
//		printf("请输入你的密码# ：-->");
//		scanf("%s", passwd);
//
//		if (0 == strcmp(name, NAME) && 0 == strcmp(passwd, PASSWD))
//		{
//			printf("欢迎 %s 进入\n", name);
//			//count = 0;
//			break;
//		}
//		else
//		{
//			count--;
//			printf("登陆失败，请检查信息\n你还有[%d]次机会\n",count);
//		}
//	}
//	if (0 == count)
//	{
//		printf("请60秒之后再试\n");
//		int time=1;
//		while (time <= 60)
//		{
//			printf(" 离上次登录，已经过了--> %d秒\r",time);
//			Sleep(100);
//			time++;
//		}
//		goto LOOP;
//	}
//
//	return 0;
//}

//猜数字
//void MENU();
//void GAME();
//int main()
//{
//	int quit = 0;//0取反即为真
//	while (!quit)//控制多次游戏
//	{
//		MENU();
//		int select = 0;
//		printf("请输入你的选择 1，开始游戏   2，退出\n");
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 1:
//			GAME();
//			printf("AGAIN?\n");
//			break;
//
//		case 2:
//			quit = 1;
//			printf("GAME END\n");
//			break;
//
//		default:
//			printf("输入有误，重新输入\n");
//			break;
//		}
//	}
//	return 0;
//}
//void MENU()
//{
//	printf("###################################\n");
//	printf("##   1. play            2. quit  ##\n");
//	printf("###################################\n");
//	printf("请输入你的选择：-->");
//}
//void GAME()
//{
//	//printf("GAME\n");
//	printf("................游戏开始................\n");
//	srand((unsigned int)time(NULL));//获取一个随机数
//	int data = rand() % 100 + 1;//1到100
//	//printf("%d ",rand);
//	int count = 5;
//	while (1)
//	{
//		printf("请猜数字：-->");
//		int x = 0;
//		scanf("%d", &x);
//
//		if (0 == count)
//		{
//			printf("游戏失败\n");
//			goto LOOP;
//		}
//		if (x > data)
//		{
//			printf("猜大了，二球\n");
//			count--;
//		}
//		else if (x < data)
//		{
//			printf("猜小了，二球\n");
//			count--;
//		}
//		else
//		{
//			printf("猜对了，数字是 ：--> %d",data);
//			puts("");
//			break;
//		}
//	}
//	printf("................游戏结束................\n");
//	LOOP:;
//}