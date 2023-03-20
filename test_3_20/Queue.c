#define  _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QInit(Queue* pq) //初始化
{
	assert(pq);
	pq->head = pq->Tail = NULL;
	pq->size = 0;
}

void QPush(Queue* pq, QDataType x) //入列
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
		assert(pq->Tail);
		pq->head = pq->Tail = newnode;
	}
	else
	{
		pq->Tail->next = newnode;
		pq->Tail = newnode;
	}
	pq->size++;


	
}

bool QEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

void QPop(Queue* pq) //出列
{
	assert(pq);
	assert(!QEmpty(pq));
	if (pq->head = NULL)
	{
		free(pq->head->next);
		pq->head = pq->Tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq->size--;
}