#define  _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QInit(Queue* pq) //��ʼ��
{
	assert(pq);
	pq->head = pq->Tail = NULL;
	pq->size = 0;
}

void QPush(Queue* pq, QDataType x) //����
{
	assert(pq);
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
		if(pq->Tail==NULL)
		 pq->head = pq->Tail = newnode;
	}
	else
	{
		pq->Tail->next = newnode;
		pq->Tail = newnode;
	}
	pq->size++;


	
}

bool QEmpty(Queue* pq) //�п�
{
	assert(pq);
	return pq->size == 0;
}

void QPop(Queue* pq) //����
{
	assert(pq);
	assert(pq->head);
	if (pq->head->next == NULL)
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


void QDestroy(Queue* pq) 
//���ٶ���
{
	assert(pq);
	
	Queue* cur = pq->head;
		while (cur)
		{
			Queue* next = pq->head->next;
			free(cur);
			cur = next;
		}
		pq->head = pq->Tail = NULL;
		pq->size = 0;
			
	
}

int QueueSize(Queue* pq) //����size

{
	assert(pq);
	return pq->size;
}


QDataType QFront(Queue* pq) //����ͷ������
{
	assert(pq);
	assert(!QEmpty(pq));
	return pq->head->data;
}

QDataType QBack(Queue* pq)//����β������
{
	assert(pq);
	assert(!QEmpty(pq));
	return pq->Tail->data;
}
