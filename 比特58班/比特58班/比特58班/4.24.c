#include "58.h"


int main()
{//sizeof���Ǻ���
	int a = 10;
	//int arr[10];
	char arr[10];
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a );
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof 10);
	printf("%d\n", sizeof(int));

	puts("");
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 1));//4
	printf("%d\n", sizeof(arr[1]));
	return 0;
}


//int main()
//{
//	int x = 10;
//	printf("%d\n", !x);//�߼�������0��Ϊ0��0��Ϊ1
//	printf("%d\n", ~x);//��λȡ��
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//�洢��ԭ�롪��>����+1����>����
//	//ȡ��������-1����>���롪��>ԭ��
//	return 0;
//}

//int main()//��ֵ����ֵ������ֵ�����ݸ����ռ�
//{
//	int a = 10;
//	int y = 20;
//	float f = 3.14f;
//	double d = 1.234;
//	a = y;//a�Ŀռ��y������
//	y = a;//y�Ŀռ��a������
//
//	int A = 10;
//	int B = 20;
//	int C = 30;
//	C = A = B;
//	//�����������θ�ֵ
//	return 0;
//}


////ͳ��һ��������������1�ĸ���
//int CountOne(int _x)
//{
//	//C3
//	int count = 0;
//	while (_x)
//	{
//		_x &= (_x - 1);
//		count++;
//	}
//
//	//C2  �������ڸ���
//	//int count = 0;
//	//while (_x)
//	//{
//	//	if (_x % 2)
//	//	{
//	//		count++;
//	//	}
//	//	_x /= 2;
//	//}
//	//return count;
//
//
//	//C1
//	//int count = 0;
//	//int i = 0;
//	//while (i < sizeof(_x) * 8)
//	//{
//	//	if (_x & 1 << i)
//	//	{
//	//		count++;
//	//	}
//	//	i++;
//	//}
//	return count;
//}
//int main()
//{
//	int x = -1;
//	int ret = CountOne(x);
//	printf("%d\n", ret);
//	return 0;
//}


////��򽻻�����
//void Swap(int* xp, int* yp)
//{
//	*xp ^= *yp;
//	*yp ^= *xp;
//	*xp ^= *yp;
//
//	//int temp = *xp;
//	//*xp = *yp;
//	//*yp = temp;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("������# ");
//	scanf("%d %d", &x, &y);
//
//	printf("before ��x = %d , y = %d\n", x, y);
//	Swap(&x, &y);
//	printf("now ��x = %d , y = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 1 & 1);
//	printf("%d\n", 2 & 1);
//	puts("");
//
//	printf("%d\n", 1 | 0);
//	printf("%d\n", 0 | 1);
//	printf("%d\n", 1 | 1);
//	printf("%d\n", 0 | 0);
//	puts("");
//
//	//����Ϊ�棬��ͬΪ��
//	printf("%d\n", 1 ^ 0);
//	printf("%d\n", 0 ^ 1);
//	printf("%d\n", 1 ^ 1);
//	printf("%d\n", 0 ^ 0);
//
//	int x = 10;
//	int y = 20;
//	printf("%d\n", x ^ y);
//	printf("%d\n", x ^ y ^ x);
//	//00000000 00000000 00000000 00001010
//	//00000000 00000000 00000000 00010100
//	//00000000 00000000 00000000 00011110
//	return 0;
//}

//int main()
//{
//	int x = 100;//x << 1 = x * 2    x >> 1 = x/2
//	printf("%d\n", x << 1);
//	printf("%d\n", x << 2);
//	printf("%d\n", x << 3);
//	printf("%d\n", x << 4);
//
//	printf("%d\n", x >> 1);
//	printf("%d\n", x >> 2);
//	printf("%d\n", x >> 3);
//	printf("%d\n", x >> 4);
//	return 0;
//}

//int main()//��λ������
//{
//	int x = 10;
//	x = x << 1;//x����1
//	printf("%u\n", x);
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//���油0��ǰ�涪��
//	//000 0000 0000 0000 0000 0000 0000 10100
//	int z = -1;
//	//ԭ�� 1000 0000 0000 0000 0000 0000 0000 0001
//	//���� 1111 1111 1111 1111 1111 1111 1111 1110
//	//���� 1111 1111 1111 1111 1111 1111 1111 1111 >> 1
//	printf("%d\n", (unsigned int)z >> 1);
//
//	char y = 10;
//	y = y << 1;
//	printf("%u\n", y);
//	return 0;
//}