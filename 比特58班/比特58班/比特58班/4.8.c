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
//	printf("����������3���Ӻ�ػ�����������������������Źػ���\n");
//	char input[SIZE];
//
//	while (1)
//	{
//		printf("input:-->");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			printf("�ػ�����ȡ��\n");
//			break;
//		}
//		else
//		{
//			printf("�ú�˵��\n");
//		}
//	}
//	return 0;
//}

//ģ���û���¼

//int main()
//{
//	char name[SIZE];
//	char passwd[SIZE];
//	int count = TRY_COUNT;
//	LOOP:count = TRY_COUNT;
//	puts("");
//	while (count>0) 
//	{
//		printf("����������˺�# ��-->");
//		scanf("%s", name);//scanf�����鲻��Ҫ  &
//		printf("�������������# ��-->");
//		scanf("%s", passwd);
//
//		if (0 == strcmp(name, NAME) && 0 == strcmp(passwd, PASSWD))
//		{
//			printf("��ӭ %s ����\n", name);
//			//count = 0;
//			break;
//		}
//		else
//		{
//			count--;
//			printf("��½ʧ�ܣ�������Ϣ\n�㻹��[%d]�λ���\n",count);
//		}
//	}
//	if (0 == count)
//	{
//		printf("��60��֮������\n");
//		int time=1;
//		while (time <= 60)
//		{
//			printf(" ���ϴε�¼���Ѿ�����--> %d��\r",time);
//			Sleep(100);
//			time++;
//		}
//		goto LOOP;
//	}
//
//	return 0;
//}

//������
//void MENU();
//void GAME();
//int main()
//{
//	int quit = 0;//0ȡ����Ϊ��
//	while (!quit)//���ƶ����Ϸ
//	{
//		MENU();
//		int select = 0;
//		printf("���������ѡ�� 1����ʼ��Ϸ   2���˳�\n");
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
//			printf("����������������\n");
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
//	printf("���������ѡ��-->");
//}
//void GAME()
//{
//	//printf("GAME\n");
//	printf("................��Ϸ��ʼ................\n");
//	srand((unsigned int)time(NULL));//��ȡһ�������
//	int data = rand() % 100 + 1;//1��100
//	//printf("%d ",rand);
//	int count = 5;
//	while (1)
//	{
//		printf("������֣�-->");
//		int x = 0;
//		scanf("%d", &x);
//
//		if (0 == count)
//		{
//			printf("��Ϸʧ��\n");
//			goto LOOP;
//		}
//		if (x > data)
//		{
//			printf("�´��ˣ�����\n");
//			count--;
//		}
//		else if (x < data)
//		{
//			printf("��С�ˣ�����\n");
//			count--;
//		}
//		else
//		{
//			printf("�¶��ˣ������� ��--> %d",data);
//			puts("");
//			break;
//		}
//	}
//	printf("................��Ϸ����................\n");
//	LOOP:;
//}