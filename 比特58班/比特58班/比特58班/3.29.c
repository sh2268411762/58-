//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//
//typedef unsigned long long ull_t;
//类型重命名

//int ADD(int _x,int _y)
//{
//	int _z = _x + _y;
//	return _z;
//}
//int DIV(int _x, int _y)
//{
//	if (0 == _y)
//	{
//		printf("DIV zero!!!\nERROR\n");
//		return - 1;
//	}
//	int _z = _x / _y;
//	return _z;
//}
//int main()
//{
	//char arr1[] = "bit";
	//char arr2[] = { 'b','i','t' };
	//char arr3[] = { 'b','i','t','\0' };
	//printf("arr1==%s\n", arr1);
	//printf("arr2==%s\n", arr2);
	//printf("arr3==%s\n", arr3);
	//printf("arr1长度==%d\n", strlen(arr1));
	//printf("arr2长度==%d\n", strlen(arr2));//没有\0随机值
	//printf("arr3长度==%d\n", strlen(arr3));

	//int coding = 0;
	//printf("你会去敲代码吗？（1 Or 0）：-->");
	//scanf("%d", &coding);
	//if (coding == 1)
	//{
	//	printf("大牛");
	//}
	//else
	//{
	//	*/printf("菜鸟");
	//}

	//int x = 0;
	//int y = 0;
	//printf("请输入你的数据<x,y>:-->");
	//scanf("%d %d", &x, &y);
	//int ret = x + y;
	//printf("%d+%d=%d\n",x,y, ret);

	//int x = 0;
	//int y = 0;
	//printf("请输入你的数据<x,y>:-->");
	//scanf("%d %d", &x, &y);
	//int ret = ADD(x, y);
	//printf("%d+%d=%d\n", x, y, ret);

	//int x = 0;
	//int y = 0;
	//printf("请输入你的数据<x,y>:-->");
	//scanf("%d %d", &x, &y);
	//int ret = DIV(x, y);
	//printf("%d/%d=%d\n", x, y, ret);

	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//char arr2[] = {'a'};
	//double arr3[] = { 2.34 };
	//int i = 0;
	//int sum = 0;
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	////整个数组的大小除以一个元素的大小
	//for (i = 0; i < sz; i++)
	//{
	//	sum += arr1[i];
	//	printf("arr1[%d] = %d\n",i, arr1[i]);
	//}
	//printf("数组内数字之和为%d\n",sum);

	//int x = 15;//1000 100 10 1-->00000000 00000000 00000000 0000 1111
	//printf("%d右移一位%d\n",x,x >> 1);//右移一位
	//printf("%d左移一位%d\n",x,x << 1);//左移一位
	//printf("%d\n",x);
	//int x = 1;
	//printf("%d ", x << 1);//2
	//printf("%d ", x << 2);//4
	//printf("%d ", x << 3);//8
	//printf("%d ", x << 4);//16
	//printf("%d ", x << 5);//32

	//printf("%d\n", 1 & 1);
	//printf("%d\n", 1 & 0);
	//printf("%d\n", 0 & 0);
	//printf("%d\n", 0 & 1);
	//printf("%d\n", 2 & 6);
	//puts(" ");
	//printf("%d\n", 1 | 1);
	//printf("%d\n", 1 | 0);
	//printf("%d\n", 0 | 1);
	//printf("%d\n", 0 | 0);
	//printf("%d\n", 2 | 6);
	//puts(" ");
	//printf("%d\n", 1 ^ 1);
	//printf("%d\n", 1 ^ 0);
	//printf("%d\n", 0 ^ 1);
	//printf("%d\n", 0 ^ 0);
	//printf("%d\n", 2 ^ 6);

	//int flag = 1;
	////if (!(1 == flag))//!逻辑取反
	//if(1==flag)
	//{
	//	printf("CCCCCCC\n");
	//}
	//else
	//{
	//	printf("BBBBBBBBBBBB\n");
	//}

	//int x = 10;
	//printf("%d\n", x);
	//printf("0x%p\n",&x);

	//unsigned int x = 1;
	//printf("%u\n", ~x);

	//int x = 10;
	//int y = 20;
	//if (x > y)
	//{
	//	printf("X>Y");
	//}
	//else if (y > x)
	//{
	//	printf("y>x");
	//}
	//else
	//{
	//	printf("x=y");
	//}

	//int x = 10;
	//int y = 20;
	//if (x > 10 && y <= 20)
	//{
	//	printf("AAAAAAAAAAAAAAAAAAAA\n");
	//}
	//else
	//{
	//	printf("aaaaaaaaaa\n");
	//}
	//puts("");
	//if (x > 10 || y <= 20)
	//{
	//	printf("AAAAAAAAAAAAAAAAAAAA\n");
	//}
	//else
	//{
	//	printf("aaaaaaaaaa\n");
	//}

	//printf("请输入两个数<x,y>:-->");
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y);
	//int max = 0;
	//max = x > y ? x : y;
	//printf("max=%d", max);
	//if (x > y)
	//{
	//	max = x;
	//}
	//else
	//{
	//	max = y;
	//}
	//printf("max=%d", max);

	//char arr[] = {'b','i','t'};
	//printf("%s\n", arr);
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", strlen(arr));
	//printf("%d\n%d\n", sizeof(arr), strlen(arr));

	//unsigned long long x = 1000000;
	//unsigned long long y = 98000000;
	//ull_t z = 8763200;
	//ull_t a = 8283472453;
	//printf("%lld %lld %lld %lld\n", x, y, z, a);
	//return 0;
//}