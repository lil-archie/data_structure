#define  _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


void SLTPrint(SLTNode* phead)//��ӡÿ���ڵ������
{
	SLTNode* cur = phead;
	while (cur != NULL)//while(cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");

	
}

SLTNode* BuySLTNode(SLTDataType x) //   ��װһ������ ��ÿ�ε�������һ���ڵ�
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		
	}
	newnode->data = x; //��ֵ
	newnode->next = NULL; //��ָ����һ����ָ���ÿտ���ʵ������һ���ڵ�
	return newnode;
}


void SLTPushBack(SLTNode** pphead, SLTDataType x) //β��
{
	SLTNode*newnode =BuySLTNode(x);


	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else    
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)//����ѭ����ֱ���ҵ����һ���ڵ�
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}



}


void SLTPushFront(SLTNode** pphead, SLTDataType x)//ͷ��
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;//plist ������ֵ��newnode�еĵ�ַ
	*pphead = newnode;//plist=newnode;
}



void SLTPopBack(SLTNode** pphead)//βɾ
{
	if (*pphead == NULL)
		return;
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}


void SLTPopFront(SLTNode** pphead)
{
	if (*pphead == NULL)
		return;
	SLTNode* first = *pphead;

	*pphead = first->next;
	free(first);
	first = NULL;
}