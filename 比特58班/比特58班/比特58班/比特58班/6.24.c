//#include "58.h"
//
//struct A
//{
//	int a;
//	char arr[0];//��������
//};//1.��struct��  2.һ����һ���ṹ������һ��Ԫ��  3.Ԫ�ظ���Ϊ0  4.�������鱾��ռ�ýṹ���ڴ��С
////���ڼ�ֵ��1.�ܹ������Աʵ��һ���ṹ���ڵı䳤����
//         // 2.��
//
//struct B
//{
//	int num;
//	int* mem;//ָ��һ���䳤�Ŀռ�
//};
//
//int main()
//{
//	struct A* p = malloc(sizeof(struct A) + 100 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	p->a = 100;
//	for (int i = 0; i < p->a; i++)
//	{
//		p->arr[i] = i;
//	}
//	free(p);
//
//
//
//
//
//
//	//struct B arr;
//	//arr.num = 100;
//	//arr.mem = (int*)malloc(arr.num * sizeof(int));
//
//	//struct B* a1 = (struct B*)malloc(sizeof(struct B));
//	//if (a1->mem == NULL)
//	//{
//	//	return 1;
//	//}
//	//a1->num = 100;
//	//a1->mem = (int*)malloc(a1->num * sizeof(int));//
//	//if (a1->mem == NULL)
//	//{
//	//	return 2;
//	//}
//
//	//free(a1->mem);
//	//free(a1);
//
//
//
//
//	return EXIT_SUCCESS;
//}
//
//
//
////int main()
////{
////
////	return EXIT_SUCCESS;
////}