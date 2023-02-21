#define  _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int* p = NULL;
//	p = (int*)&p; //将p的指针变量内容变成p的变量的地址
//	*p = 10; //将p指向的内容变成10
//	p = 20;  //p的内容变成20。
//	//*p=20;这时再进行解引用就会非法访问空间。编译器就会报错。
//	return 0;
//}


#include"SeqList.h"

//void F2()
//{
//	int b = 0;
//	printf("%p\n", &b);
//}
//
//void F1()
//{
//	int a = 0;
//	printf("%p\n", &a);
//
//	F2();
//}
//
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}

void TestSeqList1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 7);
	SLPushBack(&s, 8);
	SLPushBack(&s, 9);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	//SLPopBack(&s);
	SLPrint(&s);

	SLPushBack(&s, 10);
	SLPushBack(&s, 20);
	SLPrint(&s);

	SLDestroy(&s);
}

int main()
{
	TestSeqList1();

	return 0;
}