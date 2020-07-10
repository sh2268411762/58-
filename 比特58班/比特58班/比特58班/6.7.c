//#include "58.h"
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
//
//
//int main()
//{
//	//const char* s1 = "abcdef";
//	//const char* s2 = "bbb";
//	//if (strlen(s2) - strlen(s1) > 0)
//	//{
//	//	printf("2>1");
//	//}
//	//else
//	//{
//	//	printf("1>2");
//	//}
//
//
//	const char* s3 = "asdfghjkl";
//	char s4[32];
//	const char* s5 = "oiuo";
//	strcpy(s4, s3);
//	printf("%s\n", s4);
//	strcat(s4, s5);
//	printf("%s\n", s4);
//
//	char* s6 = "aaaaaac";
//	char* s7 = "aaaaaab";
//	int ret = strcmp(s6, s7);
//	if (0 == ret)
//	{
//		printf("=");
//	}
//	else if (1 == ret)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	return EXIT_SUCCESS;
//}
//
////int Find(int a[][5], int row, int col, int key)
////{
////	int i = 0;
////	int j = col - 1;
////	while (i < row && j >= 0)
////	{
////		if (key < a[i][j])
////		{
////			--j;
////		}
////		else if(key>a[i][j])
////		{
////			++i;
////		}
////		else
////		{
////			return 1;
////		}
////	}
////	return -1;
////}
////—Ó œæÿ’Û
////int main()
////{
////	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10} ,{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
////
////	int x = 900;
////	int ret = Find(a, 5, 5, x);
////
////	if (1 == ret)
////	{
////		printf("’“µΩ¡À\n");
////	}
////	else if (-1 == ret)
////	{
////		printf("√ªµ√\n");
////	}
////	else
////	{
////		printf("kkk");
////	}
////	return EXIT_SUCCESS;
////}
//
////void Reverse(char* str, int start, int end)
////{
////	while (start < end)
////	{
////		char t = str[start];
////		str[start] = str[end];
////		str[end] = t;
////		start++;
////		end--;
////
////	}
////}
////void Left(char* str, int len, int num)
////{
////	assert(str);
////	assert(len > 0);
////	assert(num >= 0);
////	num %= len;
////
////	//while (num)
////	//{
////	//	char temp = str[0];
////	//	int i = 0;
////	//	for (i = 0; i < len - 1; i++)
////	//	{
////	//		str[i] = str[i + 1];
////	//	}
////	//	str[i] = temp;
////	//	num--;
////	//}
////
////
////
////	//Reverse(str, 0, num - 1);
////	//Reverse(str, num, len - 1);
////	//Reverse(str, 0, len - 1);
////
////
////
////
////	
////}
//////≈–∂œ◊÷∑˚¥Æ–˝◊™
////int main()
////{
////	char str1[] = "1234abcd";
////	char str2[] = "abcd1234";
////	int len = strlen(str1);
////	int num = 4;//◊Û–˝¥Œ ˝
////
////	char* mem = (char *)malloc(2 * len + 1);
////	if (mem == NULL)
////	{
////		return -1;
////	}
////	strcpy(mem, str1);
////	strcat(mem, str1);
////
////
////	printf("À´±∂¥Æ£∫%s\n\n", mem);
////	if (strstr(mem, str1) != NULL)
////	{
////		printf("Yes\n");
////		printf("%s\n", mem);
////	}
////	else
////	{
////		printf("No\n");
////	}
////	free(mem);
////
////	//int i = 0;
////	//for (i = 0; i < len; i++)
////	//{
////	//	if (strcmp(str1, str2) == 0)
////	//	{
////	//		printf("Yes\n");
////	//		break;
////	//	}
////	//	Left(str1, len, 1);
////	//	if (i == len )
////	//	{
////	//		printf("No\n");
////	//	}
////	//}
////
////
////
////	//printf("%s\n", str1);
////	//Left(str1, len, num);
////	//printf("%s\n", str1);
////
////	return EXIT_SUCCESS;
////}