#include "58.h"




//��������:�ж��Ƿ񱻶���
#define DEBUG 0
int main()
{
#if defined(DEBUG)
	printf("debug0");
#endif
	return EXIT_SUCCESS;
}
//��������:�ж��Ƿ�Ϊ��
#define DEBUG 10
int main()
{
	printf("1:%d\n", DEBUG);
#if DEBUG
	printf("2:%d\n", DEBUG);
#endif
	return EXIT_SUCCESS;
}
//
//
////��������
//#define DEBUG
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (; i <= 10; i++)
//	{
//#ifdef DEBUG
//		printf("before debug:%d\n", sum);
//#endif
//		sum += i;
//#ifdef DEBUG
//		printf("after debug:%d\n", sum);
//#endif
//	}
//	printf("%d\n", sum);
//
//	return EXIT_SUCCESS;
//}
//
//
////��ͺ����Ա�
////�곣����ִ�м򵥵�����
//
//void fun()
//{
//
//}
//int main()
//{
//
//	return EXIT_SUCCESS;
//}

////�������õĺ����
////x+1 ����������
////x++ ���и�����
//#define MAX(x,y) (x)>(y)?(x):(y)
//
//int main()
//{
//
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("%d,%d,%d\n", x, y, z);
//
//	printf("%d\n", MAX(10, 9));
//	return EXIT_SUCCESS;
//}


////##���԰������ߵķ��źϳ�һ�����š�
////������궨��ӷ�����ı��ı�Ƭ�δ�����ʶ��
//#define ADD(num,value) x##num += value
//int main()
//{
//	int x1 = 1;
//	int x2 = 2;
//	int x3 = 3;
//	ADD(1, 100);
//	ADD(2, 100);
//	ADD(3, 100);
//	printf("x1 = %d,x2 = %d,x3 = %d\n", x1, x2, x3);
//	return EXIT_SUCCESS;
//}