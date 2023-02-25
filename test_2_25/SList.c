#define  _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"


void SLTPrint(SLTNode* phead)//打印每个节点的内容
{
	SLTNode* cur = phead;
	while (cur != NULL)//while(cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");

	
}

SLTNode* BuySLTNode(SLTDataType x) //   封装一个函数 ，每次调用增加一个节点
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		
	}
	newnode->data = x; //赋值
	newnode->next = NULL; //将指向下一个的指针置空可以实现新增一个节点
	return newnode;
}


void SLTPushBack(SLTNode** pphead, SLTDataType x) //尾插
{
	SLTNode*newnode =BuySLTNode(x);


	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else    
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)//不断循环，直到找到最后一个节点
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}



}


void SLTPushFront(SLTNode** pphead, SLTDataType x)//头插
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;//plist 将内容值给newnode中的地址
	*pphead = newnode;//plist=newnode;
}



void SLTPopBack(SLTNode** pphead)//尾删
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