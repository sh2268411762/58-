#include "58.h"


int main()
{//sizeof不是函数
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
//	printf("%d\n", !x);//逻辑反，非0则为0，0则为1
//	printf("%d\n", ~x);//按位取反
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//存储：原码——>反码+1——>补码
//	//取出：补码-1——>反码——>原码
//	return 0;
//}

//int main()//赋值：右值赋给左值，内容赋给空间
//{
//	int a = 10;
//	int y = 20;
//	float f = 3.14f;
//	double d = 1.234;
//	a = y;//a的空间和y的内容
//	y = a;//y的空间和a的内容
//
//	int A = 10;
//	int B = 20;
//	int C = 30;
//	C = A = B;
//	//从右向左依次赋值
//	return 0;
//}


////统计一个整数二进制中1的个数
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
//	//C2  不能用于负数
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


////异或交换数字
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
//	printf("请输入# ");
//	scanf("%d %d", &x, &y);
//
//	printf("before ：x = %d , y = %d\n", x, y);
//	Swap(&x, &y);
//	printf("now ：x = %d , y = %d\n", x, y);
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
//	//相异为真，相同为假
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

//int main()//移位操作符
//{
//	int x = 10;
//	x = x << 1;//x左移1
//	printf("%u\n", x);
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//后面补0，前面丢掉
//	//000 0000 0000 0000 0000 0000 0000 10100
//	int z = -1;
//	//原码 1000 0000 0000 0000 0000 0000 0000 0001
//	//反码 1111 1111 1111 1111 1111 1111 1111 1110
//	//补码 1111 1111 1111 1111 1111 1111 1111 1111 >> 1
//	printf("%d\n", (unsigned int)z >> 1);
//
//	char y = 10;
//	y = y << 1;
//	printf("%u\n", y);
//	return 0;
//}