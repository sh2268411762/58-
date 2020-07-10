//#include "58.h"
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
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
//
//struct Stu
//{
//	char name[16];
//	int age;
//	char sex[5];
//	char id[20];
//};
//
//struct Node
//{
//	int data;
//	struct Node* next;
//	//struct Node next;//非法自引用
//}next;
//struct A
//{
//	char c;
//	short s;
//	int i;
//	double d;
//};
//int main()
//{
//	struct Stu 孙豪 = { "孙豪",20,"男","1830150199" };
//	struct Stu *孙豪_p = &孙豪;
//
//	printf("%s   %d    %s    %s\n", 孙豪.name, 孙豪.age, 孙豪.sex, 孙豪.id);
//	printf("%s   %d    %s    %s\n", 孙豪_p->name, 孙豪_p->age, 孙豪_p->sex, 孙豪_p->id);
//
//	printf("%d\n", sizeof(next));
//	
//	return EXIT_SUCCESS;
//}
//
//
//////strcmp 模拟
////int My_strcmp(const char* str1, const char* str2)
////{
////	assert(str1);
////	assert(str2);
////
////	int ret = 0;
////	//相等为 0
////	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && str1)
////	{
////		str1++;
////		str2++;
////	}
////	//if (0 < ret)
////	//{
////	//	return 1;
////	//}
////	//else if (ret < 0)
////	//{
////	//	return -1;
////	//}
////	//else
////	//{
////	//	;
////	//}
////	//return 0;
////
////	return ret;
////}
////int main()
////{
////	const char* str1 = "qwertyuiop";
////	const char* str2 = "QWERTYUIOP";
////
////	int ret = My_strcmp(str1, str2);
////	if (0 == ret)
////	{
////		printf("相等\n");
////	}
////	else if (ret > 0)
////	{
////		printf("str1 大于 str2\n");
////	}
////	else
////	{
////		printf("str2 大于 str2\n");
////	}
////	return EXIT_SUCCESS;
////}
//
//
//////strstr模拟实现
////char* My_strstr(const char* str, const char* s)
////{
////	assert(str);
////	assert(s);
////
////	const char* str_p = str;
////	const char* s_p = s;
////	const char* start = str_p;
////
////	while (*start)
////	{
////		str_p = start;
////		s_p = s;
////
////		while (*s_p && *str_p && *str_p == *s_p)
////		{
////			str_p++;
////			s_p++;
////		}
////		if (*s_p == '\0')
////		{
////			return start;
////		}
////		start++;
////	}
////	return NULL;
////}
////int main()
////{
////	const char* str = "ytuwgdwt123ftas";
////	char* p = NULL;
////
////	p = My_strstr(str, "wt12");
////	puts(p);
////	return EXIT_SUCCESS;
////}