//#include "58.h"
//
//
//
//
//
////enum S
////{
////	Mon = 1,
////	Tue,
////	Wed,
////	Thu,
////	Fri,
////	Sat,
////	Sun
////};
////int main()
////{
////	enum S s = Sat;
////	printf("%d\n", s);
////	return EXIT_SUCCESS;
////}
//
//
//////Î»¶Î
////struct A
////{
////	int _a : 2;
////	int _b : 5;
////	int _c : 10;
////	int _d : 30;
////};
////int main()
////{
////	printf("%d\n", sizeof(struct A));
////	return EXIT_SUCCESS;
////}
//
//
////struct B
////{
////	char a;
////	int b;
////	char c[5];
////	double e;
////};//24
////struct A
////{
////	char* c[3];
////	char b[3];
////	double* e;
////	struct B* b1;
////	double d;
////	struct B b2;
////	struct B b3[3];
////	char f;
////};
////int main()
////{
////	printf("%d,%d", sizeof(struct B), sizeof(struct A));
////	return EXIT_SUCCESS;
////}
//
//
////struct A
////{
////	char c[3];
////	double d;
////	short *s;
////};
////struct B
////{
////	double b;
////	char a[3];
////	short** c;
////};
////struct C
////{
////	short c;
////	char a;
////	double* b[3];
////};
////struct D
////{
////	short s;
////	char c;
////	int i;
////};
////struct E
////{
////	char c;
////	struct D d;
////	double e;
////};
////int main()
////{
//////	printf("%d,%d,%d\n", sizeof(struct A), sizeof(struct B), sizeof(struct C));
////	
////	printf("%d,%d\n", sizeof(struct D), sizeof(struct E));
////	return EXIT_SUCCESS;
////}