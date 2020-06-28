//#include "58.h"
//
//struct A
//{
//	int a;
//	char arr[0];//柔性数组
//};//1.在struct内  2.一定是一个结构体的最后一个元素  3.元素个数为0  4.柔性数组本身不占用结构体内存大小
////存在价值：1.能够帮程序员实现一个结构体内的变长数组
//         // 2.简单
//
//struct B
//{
//	int num;
//	int* mem;//指向一个变长的空间
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