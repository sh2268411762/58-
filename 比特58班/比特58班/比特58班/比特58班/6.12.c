//#include "58.h"


////模拟实现strcmp
//
//int My_strcmp(const char* str1, const char* str2)
//{
//	int ret = 0;//保存结果
//	while (!(ret = (unsigned char)*str1 - (unsigned char)*str2 && *str1))
//	{
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[N] = "Hello World!";
//	char str2[N] = "Hello WorlD!";//大写字母 ASCII 码值小，str2 应该小于 str2
//
//	int ret = My_strcmp(str1, str2);
//	if (0 == ret)
//	{
//		printf("两个字符串相等\n");
//	}
//	else if (ret > 0)
//	{
//		printf("字符串\" %s \" > 字符串\" %s \"\n", str1, str2);
//	}
//	else if (ret < 0)
//	{
//		printf("字符串\" %s \" < 字符串\" %s \"\n", str1, str2);
//	}
//	else
//	{
//		printf("不会出现，到这就完蛋了\n");
//	}
//	return EXIT_SUCCESS;
//}




////模拟strcat
//char * My_strcat(char str1[32], const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	char* ret = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++);
//	return ret;
//}
//int main()
//{
//	char s1[32] = "Hello ";
//	const char* s2 = "world";
//
//	My_strcat(s1, s2);
//	puts(s1);
//	return EXIT_SUCCESS;
//}



////模拟 strcpy
//void My_strcpy(char* str1, const char* str2)
//{
//	assert(str2);
//
//	//3
//	//while (*str1++ = *str2++)
//	//	;
//
//	//2
//	//while (*str1 != '\0')
//	//{
//	//	*str1 = *str2;
//	//	str1++;
//	//	str2++;
//	//}
//
//	//1
//	//while (*str1 = *str2)
//	//{
//	//	str1++;
//	//	str2++;
//	//}
//}
//int main()
//{
//	char s1[32] = "uisjuedygeda";
//	char s2[32] = "hello world";
//
//	printf("%s\n%s\n\n", s1, s2);
//	My_strcpy(s1, s2);
//	printf("%s\n%s\n\n", s1, s2);
//
//	return EXIT_SUCCESS;
//}



////模拟strlen
//
//size_t My_strlen(const char* str)
//{
//	//1
//	assert(str);
//	//size_t count = 0;
//	//while (*str)
//	//{
//	//	str++;
//	//	count++;
//	//}
//	//return count;
//
//
//	//2
//	//const char* start = str;
//	//const char* end = str;
//	//while (*end)
//	//{
//	//	end++;
//	//}
//	////end 指向 \0
//	//return end - start;
//
//
//
//	//3
//	//if (*str == '\0')
//	//{
//	//	return 0;
//	//}
//	//return 1 + My_strlen(str + 1);
//}
//int main()
//{
//	const char* s1 = "hello world";
//	printf("%u\n", My_strlen(s1));
//
//	return EXIT_SUCCESS;
//}







////memcmp
////memset
//int main()
//{
//	//char* s1 = "12355";
//	//char* s2 = "12345";
//	//printf("%d\n", memcmp(s1, s2, 5));
//
//
//	int a[10];
//	memset(a, 0, sizeof(a));
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	return EXIT_SUCCESS;
//}


////模拟memmove
////与类型无关-->类型转换
//void* My_memmove(void* dst, const void* src, size_t num)
//{
//	assert(dst);
//	assert(src);
//
//
//	const char* src_p = (char*)src;
//	char* dst_p = (char*)dst;
//
//
//	if (dst_p > src_p && dst_p < num + src_p)
//	{
//		src_p = src_p + num - 1;//指向最后一个有效为止
//		dst_p = dst_p + num - 1;
//		while (num > 0)
//		{
//			*dst_p = *src_p;
//			dst_p--;
//			src_p--;
//			num--;
//		}
//		return dst;
//	}
//	else
//	{
//		while (num > 0)
//		{
//			*dst_p = *src_p;
//			dst_p++;
//			src_p++;
//			num--;
//		}
//		return dst;
//	}
//}
//int main()
//{
//	char str[32] = "oiisijijduv";
//	char dst[32];
//	size_t len = strlen(str) + 1;
//	My_memmove(dst, str, len);
//	My_memmove(str, str + 3, len);
//
//	My_memmove(str + 3, str, len);//错误
//	return EXIT_SUCCESS;
//}




////memcopy   内存复制
////memmove   复制的过程就好比是第二个实参中的字节先被复制到一个临时的字符数组中，
////          然后再从这个临时数组复制到第一个实参中
//
//struct Stu {
//	char name[16];
//	int age;
//	char sex[8];
//};
//int main()
//{
//	//struct Stu Tom = { "Tom",19,"男" };
//	//struct Stu Tom_copy;
//	//memcpy(&Tom_copy, &Tom, sizeof(Tom));
//	//printf("%s   %d    %s\n", Tom.name, Tom.age, Tom.sex);
//	//printf("%s   %d    %s\n", Tom_copy.name, Tom_copy.age, Tom_copy.sex);
//
//	//char str[32] = "abcdefg123456";
//	//int len = strlen(str);
//	//printf("%s\n", str);
//	//memmove(str + 3, str, len);
//	//printf("%s\n", str);
//	//memmove(str, str + 3, len);
//	//printf("%s\n", str);
//	return EXIT_SUCCESS;
//}