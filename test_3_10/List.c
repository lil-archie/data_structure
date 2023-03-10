#define  _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

LTNode * BuyLTNode(LTDataType x) //创建新的节点
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->data = x;
	return newnode;
}



LTNode* LTInit() //初始化
{
	LTNode* head = BuyLTNode(-1);
	head->prev = head;
	head->next = head;
	return head;
}

void LTPushBack(LTNode* phead,LTDataType x) //尾插
{
	assert(phead);
	/*LTNode* newnode = BuyLTNode(x);
	LTNode* tail = phead->prev;
	phead->prev = newnode;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;*/
	LTInsert(phead, x);

}
bool LTEmpty(LTNode* phead)//判断链表是否为空
{
	assert(phead);
	return phead->next == phead;
}

void LTPopBack(LTNode* phead)//尾删
{
	assert(phead);
	assert(!LTEmpty(phead));
	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	phead->prev = tailprev;
	tailprev->next = phead;
	free(tail);
	tail = NULL;
}

void LTPopFront(LTNode*phead) //头删
{
	assert(phead);
	assert(!LTEmpty(phead));
	LTNode* first = phead->next;
	LTNode* firstNext = first->next;
	phead->next = firstNext;
	firstNext->prev = phead;
	free(first);
	first = NULL;

}

void LTPushFront(LTNode* phead,LTDataType x)//头插
{
	assert(phead);
	/*LTNode* newnode = BuyLTNode(x);
	LTNode* first = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;*/
	LTInsert(phead->next, x);
}

void LTInsert(LTNode* pos, LTDataType x)//插入
{
	assert(pos);
	LTNode* newnode = BuyLTNode(x);
	LTNode* posFirst = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	posFirst->next = newnode;
	newnode->prev = posFirst;

	
}

void LTErase(LTNode* pos)//删除节点
{
	assert(pos);
	LTNode* posprev = pos->prev;
	posprev->next = pos->next;
	pos->next->prev = posprev;
	free(pos);
	pos = NULL;
}

LTNode* LTFind(LTNode* phead, LTDataType x)//查找
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur!=phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void LTDestroy(LTNode* phead) //链表销毁
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* Next = cur->next;
		free(cur);
		cur = NULL;
	}
}


void LTPrint(LTNode* phead) //打印
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


