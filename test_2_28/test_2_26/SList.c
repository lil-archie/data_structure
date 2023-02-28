#define  _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur!=NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		

	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}




void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}


void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}


void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
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
	{
		return;
	}
	else
	{
		SLTNode* first = *pphead;
		*pphead = first->next;
		free(first);
		first = NULL;
	}
}


SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* find = phead;
	
	while (find != NULL)
	{
		if (find->data == x)
		{
			return find;
		}
		find = find->next;
	}
	return NULL;

}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	//头删
	//非头删
	assert(pos);
	assert(pphead);
	if (*pphead == pos)
	{
		SLTNode* first = *pphead;
		*pphead = first->next;
		free(first);
		first = NULL;
	}
	else
	{
		SLTNode* cur = *pphead;
		
		while (cur->next != pos)
		{
			
			cur = cur->next;
			assert(cur);
		}
		cur->next = pos->next;
		free(pos);
	}
}

void SLTModify(SLTNode* phead, SLTNode* pos, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur != pos)
	{
		cur = cur->next;
		assert(cur);
	}
	cur->data = x;

}


void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next != pos)
		{
			cur = cur->next;
			assert(cur);
		}
		cur->next = newnode;
		newnode->next = pos;
	}
}


void SLTInsertBack(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	assert(pphead);
	SLTNode* newnode = BuySLTNode(x);
	SLTNode* cur = *pphead;
	while (cur != pos)
	{
		cur = cur->next;
		assert(cur);
	}
	
	newnode->next = pos->next;
	pos->next = newnode;
	
	
}
void SLTInsertBack1(SLTNode* pos, SLTDataType x)//在pos后插入
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	

}
void SLTEraseBack(SLTNode* pos, SLTDataType x)
{
	assert(pos->next);
	assert(pos);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(pos);




}
	
	


void SLTDestroy(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}
