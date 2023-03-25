#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//
//void AdjustDown(int* a, int size, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < size)
//	{
//		if (child + 1 < size && a[child + 1] > a[child])
//		{
//			child++;
//		}
//		if (a[child] > a[parent])
//		{
//			swap(&a[child], &a[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//
//HeapSort(int* a, int size)
//{
//	for (int i = (size - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(a, size, i);
//	}
//
//	
//	for (int end = size - 1; end >= 0; end--)
//	{
//		swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//	}
//}
//
//void CreateNData() //创造数据
//{
//	int n = 1000;
//	srand(time(0));
//	const char* file = "data.txt";
//	FILE* fin = fopen(file, "w");
//	if (fin == NULL)
//	{
//		perror("fopen fail");
//		return;
//	}
//	for (size_t i = 0; i < n; i++)
//	{
//		int data = rand() % 10000;
//		fprintf(fin, "%d\n", data);
//	}
//	fclose(fin);
//
//}
//
//
//void PrintTopK(const char* file, int k)//这里的k是指需要建堆的数据个数
//{
//	//1.先开辟一个个数为k的数组，建成小堆
//	int* topk = (int*)malloc(sizeof(int) * k);
//	if (topk == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//	FILE* fout = fopen(file, "r");
//	if (fout == NULL)
//	{
//		perror("fopen fail");
//		return;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		fscanf(fout, "%d", &topk[i]);
//	}
//	for (int i = (k - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(topk, k, i);
//	}
//	//2.剩余的数据进行交换
//	int val = 0;
//	int ret = fscanf(fout, "%d", &val);
//	while (ret != EOF)
//	{
//		if (val > topk[0])
//		{
//			topk[0] = val;
//			AdjustDown(topk, k, 0);
//		}
//		ret = fscanf(fout, "%d", &val);
//	}
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", topk[i]);
//	}
//	fclose(fout);
//	free(topk);
//
//	
//}
//
//
//int main()
//{
//	/*int Testarr[] = { 23,3445,656,76778,5434,3243,233 };
//	int len = sizeof(Testarr) / sizeof(Testarr[0]);
//	HeapSort(Testarr,len);*/
//	//CreateNData();
//
//}

//	typedef char STDataType;
//
//	typedef struct Stack
//	{
//		STDataType* a;
//		int top;
//		int capacity;
//	}ST;
//
//	void STInit(ST * ps);
//	void STDestroy(ST * ps);
//	void STPush(ST * ps, STDataType x);
//	void STPop(ST * ps);
//	int STSize(ST * ps);
//	bool STEmpty(ST * ps);
//	STDataType STTop(ST * ps);
//
//	void STInit(ST * ps)
//	{
//		assert(ps);
//
//		ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
//		if (ps->a == NULL)
//		{
//			perror("malloc fail");
//			return;
//		}
//
//		ps->capacity = 4;
//		ps->top = 0;   // top是栈顶元素的下一个位置
//
//		//ps->top = -1;   // top是栈顶元素位置
//	}
//
//	void STDestroy(ST * ps)
//	{
//		assert(ps);
//
//		free(ps->a);
//		ps->a = NULL;
//		ps->top = 0;
//		ps->capacity = 0;
//	}
//
//	void STPush(ST * ps, STDataType x)
//	{
//		assert(ps);
//
//		if (ps->top == ps->capacity)
//		{
//			STDataType* tmp = (STDataType*)realloc(ps->a,
//				sizeof(STDataType) * ps->capacity * 2);
//			if (tmp == NULL)
//			{
//				perror("realloc fail");
//				return;
//			}
//
//			ps->a = tmp;
//			ps->capacity *= 2;
//		}
//
//		ps->a[ps->top] = x;
//		ps->top++;
//	}
//
//	void STPop(ST * ps)
//	{
//		assert(ps);
//		assert(!STEmpty(ps));
//
//		ps->top--;
//	}
//
//	int STSize(ST * ps)
//	{
//		assert(ps);
//
//		return ps->top;
//	}
//
//	bool STEmpty(ST * ps)
//	{
//		assert(ps);
//
//		return ps->top == 0;
//	}
//
//	STDataType STTop(ST * ps)
//	{
//		assert(ps);
//		assert(!STEmpty(ps));
//
//		return ps->a[ps->top - 1];
//	}
//	bool isValid(char* s) {
//		ST st;
//		STInit(&st);
//		while (*s)
//		{
//			if (*s == '(' || *s == '[' || *s == '{')
//			{
//				STPush(&st, *s);
//			}
//			else
//			{
//				if (STEmpty(&st))
//				{
//					STDestroy(&st);
//					return false;
//
//				}
//				char top = STTop(&st);
//				STPop(&st);
//				if ((*s == ')' && top != '(') || (*s == ']' && top != '[') || (*s == '}' && top != '{'))
//				{
//					STDestroy(&st);
//					return false;
//				}
//
//			}
//			++s;
//		}
//		bool ret = STEmpty(&st);
//		STDestroy(&st);
//
//		return ret;
//
//
//
//	}
//	PrintTopK("data.txt", 1);
//	return 0;
//}




typedef int  STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);
void STDestroy(ST* ps);
void STPush(ST* ps, STDataType x);
void STPop(ST* ps);
int STSize(ST* ps);
bool STEmpty(ST* ps);
STDataType STTop(ST* ps);

void STInit(ST* ps)
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	ps->capacity = 4;
	ps->top = 0;   // top是栈顶元素的下一个位置

	//ps->top = -1;   // top是栈顶元素位置
}

void STDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a,
			sizeof(STDataType) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	ps->top--;
}

int STSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool STEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

STDataType STTop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	return ps->a[ps->top - 1];
}


typedef struct {
	ST pushst;
	ST popst;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	if (obj == NULL)
	{
		perror("malloc fail");
		return;
	}
	STInit(&obj->pushst);
	STInit(&obj->popst);
	return obj;
}

void myQueuePush(MyQueue* obj, int x) {
	STPush(&obj->pushst, x);
}

int myQueuePeek(MyQueue* obj) {
	if (STEmpty(&obj->popst))
	{
		while (!STEmpty(&obj->pushst))
		{
			STPush(&obj->popst, STTop(&obj->pushst));
			STPop(&obj->pushst);
		}
	}
	return STTop(&obj->popst);
}
int myQueuePop(MyQueue* obj) {
	int front = myQueuePeek(obj);
	STPop(&obj->popst);
	return front;
}



bool myQueueEmpty(MyQueue* obj) {
	return STEmpty(&obj->popst) && STEmpty(&obj->pushst);
}

void myQueueFree(MyQueue* obj) {
	free(&obj->popst);
	free(&obj->pushst);
	free(obj);
}


int main()
{
	MyQueue *pst;
	pst=myQueueCreate();

	myQueuePush(pst, 1);
	myQueuePush(pst, 1);
	myQueuePush(pst, 1);
	myQueuePush(pst, 1);


}


typedef char QDatatype;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDatatype data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

// 10:40
void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDatatype x);
void QueuePop(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
QDatatype QueueFront(Queue* pq);
QDatatype QueueBack(Queue* pq);


void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;
	pq->size = 0;
}

void QueuePush(Queue* pq, QDatatype x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		assert(pq->tail == NULL);

		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}

	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);

	/*QNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;

	if (pq->head == NULL)
		pq->tail = NULL;*/

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

	pq->size--;
}

int QueueSize(Queue* pq)
{
	assert(pq);

	return pq->size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->size == 0;
}

QDatatype QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

QDatatype QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}


typedef struct {
	Queue q1;
	Queue q2;

} MyStack;


MyStack* myStackCreate() {
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	if (obj == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	QueueInit(&obj->q1);
	QueueInit(&obj->q2);
	return obj;


}

void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	Queue* empty = &obj->q1;
	Queue* nonempty = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		nonempty = &obj->q1;
		empty = &obj->q2;
	}
	if (QueueEmpty(empty))
	{
		while (QueueSize(nonempty) > 1)
		{
			QueuePush(empty, QueueFront(nonempty));
			QueuePop(nonempty);
		}
	}
	int top = QueueFront(nonempty);
	QueuePop(nonempty);
	return top;
}

int myStackTop(MyStack* obj) {
	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}

bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	free(&obj->q1);
	free(&obj->q2);
	free(obj);

}
