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
//	Func();     // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	Func(10);   // ����ʱ��ʹ��ָ����ʵ��
//
//	return 0;
//}

// ȫȱʡ
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

// ��ȱʡ -- ��������ȱʡ
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
//	// ����100������
//
//	struct Stack st2;
//	//StackInit(&st2); -> StackInit(&st2, 4);
//	// ��֪��Ҫ�����������
//
//	return 0;
//}

// 1���������Ͳ�ͬ
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


// 1���Ƿ񹹳����� -- ����
// 2�����⡣�޲ε��ô�������
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
//	f(); // ��f��: �����غ����ĵ��ò���ȷ
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////
//
// 10:38����
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

// ΪʲôC���Բ�֧�֣�Cpp֧�����أ�CPP��ô֧�ֵ���
// �������ӹ���
// ���������ι���

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
//	Func(); // ��������
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
//	// d���x������(����)�أ�
//	// x��ֵ��d��
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

