//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int Fac(int x);
//int BinSearch(int arr[], int sz, int x);
//int binary_search(int arr[], int key, int left, int right);//二分查找
//
//int main(void)
//{
	//int i = 0;
	//while (i <= 10)
	//{
	//	printf("%d ", i);
	//	i++;
	//}
	//puts("");

	//int m = 0;
	//while (m <= 10)
	//{
	//	printf("%d ", m);
	//	m++;
	//	if (m > 5) 
	//	{
	//		break;//结束循环，跳出循环
	//	}
	//}
	//printf("跳出时：-->%d\n\n", m);

	//int n = 0;
	//while (n <= 10)
	//{
	//	//if (n > 5)
	//	printf("%d ", n);
	//	n++;
	//	if(5==n)
	//	{
	//		n++;
	//		continue;
	//	}
	//	
	//}
	//puts("");

	//putchar('a');
	//puts("");
	//int c = getchar();
	//putchar(c);
	/*int ch = 0;
	while ((ch=getchar())!=EOF)
	{
		if (ch == EOF)
		{
			printf("读取完毕！\nEOF=%d\n,ch=%d\n",EOF,ch);
			break;
		}
		putchar(ch);
	}*/

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9') 
	//		//if(ch<48||ch>57)
	//	{
	//		continue;
	//	}
	//	//ch>='0'&&ch<='9'
	//	putchar(ch);
	//}//输出数字字符

	//printf("%d\n",'0');//48
	//printf("%d\n",'10');//12592
	//printf("%d\n", 10);//10
	//printf("%d\n", 0);//0
	//printf("%d\n",'\0');//0

	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	printf("i:%d ", i);
	//}//
	//puts("");
	//int m = 0;
	//for (m = 1; m <= 10; m++)
	//{
	//	if (5 == m)
	//	{
	//		break;
	//	}
	//	printf("m:%d ", m);
	//}//
	//puts("");
	//int n = 0;
	//for (n = 1; n <= 10; n++)
	//{
	//	if (5 == n)
	//	{
	//		continue;
	//	}
	//	printf("n:%d ", n);
	//}
	//puts("");
	//for (;;)
	//{
	//	printf("1 1");
	//}
	//puts("");

	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	//{
	//	printf("0 1");
	//}

	/*int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	printf("%d\n", k);*/

	/*int i = 0;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 10);*/

	//printf("请输入一个数：-->");
	//int i = 0;
	//scanf("%d", &i);
	//int ret = Fac(i);
	//printf("%d的阶乘是%d\n", i, ret);
	//int n = 0;
	//int m = 0;
	//int end = 0;
	//int start = 0;
	//printf("请输入两个数：-->");
	//scanf("%d%d", &start, &end);
	//int s1 = start;
	//for (n = start; n <= end; n++)
	//{
	//	int ret1 = Fac(n);//ret1为阶乘
	//	m += ret1;//ret1为阶乘之和
	//}
	//printf("%d 与 %d 之间数字阶乘之和是%d\n",s1,end, m);

	/*int arr[] = { 11,12,13,14,15,16,17,18,19,110 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	printf("请输入要查找的数：-->");
	scanf("%d", &n);
	int Index = BinSearch(arr, sz, n);
	if (-1 == Index) 
	{
		printf("数组中没有这个数\n");
	}
	else
	{
		printf("要查找的数字下标为：-->%d", Index);
	}*/

	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;
	printf("请输入要查找的数：-->");
	scanf("%d", &key);
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = 0;
	ret = binary_search(arr, key, 0, sz);
	if (ret==-1)
		printf("找不到\n");
	else
		printf("找到了\n%d的下标是：%d\n",key,ret);*/

	/*char s1[] = " hello world...";
	char s2[] = "###############";
	int start = 0;
	int end = strlen(s1) - 1;
	while (start <= end)
	{
		s2[start] = s1[start];
		s2[end] = s1[end];
		Sleep(1000);
		printf("%s\r", s2);
		start++;
		end--;
	}*/
	//for (;start<end;start++,end--)
	//{
	//	s2[start] = s1[start];
	//	s2[end] = s1[end];
	//	Sleep(1000);
	//	printf("%s\n", s2);
	//}

//	const char *str="|/-\\";
//	int i = 0;
//	while (1)
//	{
//		printf("%c\r", str[i % 4]);
//		i++;
//		Sleep(1000);
//	}
//	return 0;
//}
//
//int Fac(int x)
//{
//	int z = 0;
//	if (x<0)
//	{
//		printf("输入有误");
//		return 0;
//	}
//	else if (1 == x||0==x)
//	{
//		z = 1;
//	}
//	else
//	{
//		z = Fac(x - 1) * x;
//	}
//	return z;
//}
//
//int BinSearch(int arr[], int sz, int x)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == x)
//			return i;
//	}
//	return -1;
//}
//int binary_search(int arr[],int key,int left,int right)
//{
//	int mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		return mid;
//	}
//	else
//	{
//		return -1;
//	}
//}