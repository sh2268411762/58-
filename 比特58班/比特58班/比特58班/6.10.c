//#include "58.h"
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
////
////
////
////
////int main()
////{
////
////	return EXIT_SUCCESS;
////}
//
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
//
////int main()
////{
////	//char str1[20], str2[20];
////	//strcpy(str1, "To be ");
////	//strcpy(str2, "or not to be");
////	//strncat(str1, str2, 6);
////	//puts(str1);
////	//puts(str2);
////
////
////
////	//char str[][5] = { "R2D2","C3PO","R2A6" };
////	//int n;
////	//for (n = 0; n < 3; n++)
////	//{
////	//	if (strncmp(str[n], "R2xx", 2) == 0)
////	//	{
////	//		printf("%s\n", str[n]);
////	//	}
////	//}
////
////
////
////	//char str[] = "sudyfgeuyy simple string";
////	//char* p;
////	//p = strstr(str, "simple", 6);
////	//puts(str);
////	//strncpy(p, "sample", 6);
////	//puts(str);
////
////
////
////	//const char* p = "2268411762@qq.com";
////	//const char* sep = ".@";
////	//char arr[30];
////	//char* str = NULL;
////	//strcpy(arr, p);
////	//for(str=strtok(arr,sep);str!=NULL;str=strtok(NULL,sep))
////	//{
////	//	printf("%s\n",str);
////	//}
////	return EXIT_SUCCESS;
////}
//
//
//
//#define N 128
//int main()
//{
////	const char *s1 = "Hello world!";//s1 不可更改
////	char s2[N] = "0000!Hello world! 0000!";
//
//	//strncpy(s2, s1, strlen(s1) + 1);
//	//strncpy(s2, s1, 4);
//	//printf("s1 = %s\ns2 = %s\n\n", s1, s2);
//
//	//strncat(s2, s1, strlen(s1) + 1);
//	//strncat(s2, s1, 4);
//	//strncat(s2, s1, 0);
//	//strcat(s2, s1);
//	//printf("s1 = %s\ns2 = %s\n\n", s1, s2);
//
//	//strcpy(s2, s1);
//	//const char* s3 = "hello world!";
//	//printf("s1 与 s2：%d\n", strncmp(s1, s2, strlen(s1) + 1));
//	//printf("s1 与 s2：%d\n", strncmp(s2, s1, strlen(s1) + 1));
//	//printf("s1 与 s2：%d\n", strncmp(s1, s3, strlen(s1) + 1));
//	//printf("s1 与 s2：%d\n", strncmp(s3, s1, strlen(s1) + 1));
//	//printf("s1 与 s2：%d\n", strncmp(s3, s2, strlen(s1) + 1));
//	//printf("s1 与 s2：%d\n", strncmp(s2, s3, strlen(s1) + 1));
//	//printf("s1 与 s2：%d\n", strncmp(s1, s2, 4));
//	//printf("s1 与 s2：%d\n", strncmp(s1, s3, 4));
//	//printf("s1 与 s2：%d\n", strncmp(s3, s2, 4));
//
////	printf("%s\n", strstr(s2, s1));
//
////	char s4[] = "abcd,1234 xyz|789";
//	//printf("%s\n", strtok(s4, ", |"));
//	//printf("%s\n", strtok(NULL, ", |"));
//	//printf("%s\n", strtok(NULL, ", |"));
//	//printf("%s\n", strtok(NULL, ", |"));
//
//
//	////使全局变量用或使用static来保存历史字符串的剩余子串
//	////只截取有效字符串
//	////自动进行分隔符过滤
//	//char* sub = strtok(s4, ", |");
//	//while (sub)
//	//{
//	//	printf("%s\n", sub);
//	//	sub = strtok(NULL, ", |");
//	//}
//
//
//	//printf("%d\n", errno);
//	//FILE* fp = fopen("test.txt", "r");
//	//if (NULL == fp)
//	//{
//	//	printf("%d\n", errno);
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//
//
//	//int arr[5] = { 11,22,33,44,55 };
//	//int str[5];
//	//memcpy(str, arr, sizeof(arr));
//
//	//}
//
//
//
//
//	return EXIT_SUCCESS;
//}