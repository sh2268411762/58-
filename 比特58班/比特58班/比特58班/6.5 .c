//#include "58.h"


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return EXIT_SUCCESS;
//}



//int main()
//{
//	char* a[] = { "work","at","alibaba" };//�ַ�������
//	char** pa = a;//����ָ��
//	pa++;
//	pa++;
//	printf("%s\n", *pa);
//	return EXIT_SUCCESS;
//}



//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)(*(a + 1));
//	printf("%d,%d", *(p1 - 1), *(p2 - 1));
//	return EXIT_SUCCESS;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];//����ָ��
//	p = a;
//	printf("0X%p    %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return EXIT_SUCCESS;
//}




//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p = NULL;
//	p = a[0];
//	printf("%d", p[0]);
//	return EXIT_SUCCESS;
//}



//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	printf("%x,%x", p1[-1], *p2);
//	return EXIT_SUCCESS;
//}



//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	p = (struct Test*)0x00100000;
//	printf("%d\n", sizeof(p));//p��һ��ָ��
//	printf("%d\n", sizeof(struct Test));
//	printf("0x%p\n", p + 0x1);
//	printf("0x%p\n", (unsigned long)p + 0x1);//��ָ���޹أ�ֱ�Ӽ�һ
//	printf("0x%p\n", (unsigned int*)p + 0x1);//ָ��Ӽ�
//	return EXIT_SUCCESS;
//}




//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);//�� 1 ��������������
//	//p ָ��a[4] ��ߵ�λ��
//	printf("%d  %d\n", *(a + 1), *(p - 1));//��һ����������
//	return EXIT_SUCCESS;
//}