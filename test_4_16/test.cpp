#define  _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Func();     // 没有传参时，使用参数的默认值
//	Func(10);   // 传参时，使用指定的实参
//
//	return 0;
//}

// 全缺省
//void Func(int a = 10, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    Func();
//    Func(1);
//    Func(1,2);
//    Func(1,2,3);
//
//    return 0;
//}

// 半缺省 -- 从右往左缺省
//void Func(int a, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    //Func();
//    Func(1);
//    Func(1,2);
//    Func(1,2,3);
//
//    return 0;
//}

//struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//};
//
//void StackInit(struct Stack* pst, int defaultCapacity = 4)
//{
//	pst->a = (int*)malloc(sizeof(int) * defaultCapacity);
//	if (pst->a == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//
//	pst->top = 0;
//	pst->capacity = defaultCapacity;
//}
//
////#define DEFAULT_CAPACITY 100
////void StackInit(struct Stack* pst)
////{
////	pst->a = (int*)malloc(sizeof(int) * DEFAULT_CAPACITY);
////	if (pst->a == NULL)
////	{
////		perror("malloc fail");
////		return;
////	}
////
////	pst->top = 0;
////	pst->capacity = DEFAULT_CAPACITY;
////}

//#include"Stack.h"
//
////void StackInit(struct Stack* pst, int defaultCapacity = 4 );
//
//int main()
//{
//	struct Stack st1;
//	StackInit(&st1, 100);
//	// 插入100个数据
//
//	struct Stack st2;
//	//StackInit(&st2); -> StackInit(&st2, 4);
//	// 不知道要插入多少数据
//
//	return 0;
//}

// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//
//	return left + right;
//}
//
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.1, 2.2) << endl;
//
//	return 0;
//}

//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char a, int b)
//{
//	cout << "f(int b,char a)" << endl;
//}
//
//int main()
//{
//	f(1, 'x');
//	f('x', 1);
//
//
//	return 0;
//}


// 1、是否构成重载 -- 构成
// 2、问题。无参调用存在歧义
//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a = 0)
//{
//	cout << "f(int a)" << endl;
//}
//
//int main()
//{
//	f(); // “f”: 对重载函数的调用不明确
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////
//
// 10:38继续
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//
//	return left + right;
//}
//
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.1, 2.2) << endl;
//
//	return 0;
//}

// 为什么C语言不支持，Cpp支持重载，CPP怎么支持的呢
// 编译链接过程
// 函数名修饰规则

#include"Stack.h"

//int main()
//{
//	struct Stack st;
//	StackInit(&st);      
//	StackPush(&st, 1);  
//	StackPush(&st, 1.1);
//
//	return 0;
//}

//int Func();
//double Func();
//
//int main()
//{
//	Func(); // 调用歧义
//
//	return 0;
//}

//int main()
//{
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& c = b;
//	int& d = a;
//
//
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//
//	b++;
//	d++;
//
//	int x = 11;
//	// d变成x的引用(别名)呢？
//	// x赋值给d？
//	d = x;
//
//	return 0;
//}

void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Swap(int*& a, int*& b)
{
	int* tmp = a;
	a = b;
	b = tmp;
}

typedef struct ListNode
{
	int val;
	struct ListNode* next;
}LTNode, * PLTNode;

//void ListPushBack(struct ListNode*& phead, int x)
//void ListPushBack(LTNode*& phead, int x)
void ListPushBack(PLTNode& phead, int x)
{
	// ...
	// phead = newnode;
	// ...
}

int main()
{
	int x = 0, y = 1;
	Swap(x, y);
	cout << x << " " << y << endl;

	int* px = &x, * py = &y;
	cout << px << " " << py << endl;
	Swap(px, py);
	cout << px << " " << py << endl;

	PLTNode plist = NULL;
	ListPushBack(plist, 1);

	return 0;
}

