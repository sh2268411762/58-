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
	//struct Student S1 = { "����",20,"��","00001801" };
	//struct Student S2 = { "����",28,"��","00001802" };
	//struct Student S3;
	//strcpy(S3.name, "������");
	//S3.age = 26;
	//strcpy(S3.sex, "��");
	//strcpy(S3.id, "00001803");
	//struct Student* pS2 = &S2;//����S2��ָ��
	//printf("%s  %d  %s  %s\n", S1.name, S1.age, S1.sex, S1.id);
	//printf("%s  %d  %s  %s\n",pS2->name,pS2->age,pS2->sex,pS2->id);
	//printf("%s  %d  %s  %s\n", (*pS2).name, (*pS2).age, (*pS2).sex, (*pS2).id);
	//printf("%s  %d  %s  %s\n", S3.name, S3.age, S3.sex, S3.id);
	//�ṹ��


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
	//����������Ҫ�ж�,˫��֧�������

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
	//	printf("ż��\n");
	//}
	//��ѡһ


	//puts("�������������\nPlease Enter Your Age:-->");
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//{
	//	puts("δ����");
	//}
	//else if(age>=18&&age<30)
	//{
	//	puts("����");
	///}
	//else if (age >= 10 && age < 60)
	//{
	//	puts("����");
	//}
	//else
	//{
	//	printf("����\n");
	//}
	//���֧�������

	//int num = 0;
	//printf("������һ���ж�����-->");
	//scanf("%d", &num);
	//int ret = IsOdd(num);
	//if (1 == ret)
	//{
	//	puts("��");
	//}
	//else
	//{
	//	puts("����");
	//}

	//printf("�����뷶Χ:-->");
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
	//printf("\n%d��%d֮����%d������\n", start1, end, count);

	//int day = 0;
	//puts("����������:-->");
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	puts("weekday");
	//	break;

	//case 2:
	//	printf("���ڶ�\n");
	//	puts("weekday");
	//	break;

	//case 3:
	//	printf("������\n");
	//	puts("weekday");
	//	break;

	//case 4:
	//	printf("������\n");
	//	puts("weekday");
	//	break;
	//case 5:
	//	printf("������\n");
	//	puts("weekday");
	//	break;

	//case 6:
	//	printf("������\n");
	//	puts("weekend");
	//	break;

	//case 7:
	//	printf("������\n");
	//	puts("weekend");
	//	break;

	// default :
	//	 printf("�������󣡣���\n");
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
	//	{//switch����Ƕ��ʹ��
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
//		}//������ǰѭ����������ֹѭ��
//		if (5 == i)
//		{
//			continue;
//		}//��������ѭ����continue֮�����䲻��ִ��
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
