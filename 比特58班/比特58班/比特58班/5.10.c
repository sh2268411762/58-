#include  "58.h"


//�ṹ��
typedef struct Stu {
	char name[20];
	int age;
	char telp[20];
}stu;//������һ���ṹ������
int main()
{
	struct Stu ����� = { "�����",500,"1234567" };//������һ���ṹ�����
	printf("%s\n%d\n%s\n", �����.name, �����.age, �����.telp);
	puts("");
	stu ��˽� = { "��˽�",700,"2345678" };
	printf("%s\n%d\n%s\n", ��˽�.name, ��˽�.age, ��˽�.telp);

	return 0;
}

////ָ�����
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
//	//int* arr[5];//ָ�����飬ÿ��Ԫ�ض���һ�� int* ���͵�ָ��
//	//int(*arr1)[5];//����ָ�룬*arr ָ��һ�����飬�����顪��>ÿ��Ԫ�ض���һ�� int ��������,
//	
//	//int* arr[5];
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	//char c = 'c';
//	//arr[0] = &c;//�� arr �����0��Ԫ�ش�� c �ĵ�ַ
//
//	//int(*arr2)[5];
//	//int a[5];
//	//arr2 = &a;//arr2 �д洢���� a �ĵ�ַ
//	//printf("&a[0]��0x%p\n", a);
//	//printf("&a   ��0x%p\n", &a);
//	//printf("arr   ��0x%p\n", arr2);
//	//printf("arr+1   ��0x%p\n", arr2+1);
//	//printf("&a[0]+1   ��0x%p\n", a+1);
//	//printf("&a+1   ��0x%p\n", &a+1);
//
//	return 0;
//}