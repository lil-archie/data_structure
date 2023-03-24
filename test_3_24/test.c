#define  _CRT_SECURE_NO_WARNINGS 1

Heapsort(int* a, int k) //k是数组元素的个数
{
	//1.将数组的数据建堆，使用向下调整法，建成大堆，方便排成升序
	for (int i =; i < k; i++)
	{
		AdjustDown()
	}

}



int main()
{
	int arr[] = { 46,67,778,546,2334,4456,24 };
	Heapsort();
}

#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

LTNode* BuyLTNode(LTDataType x) //�����µĽڵ�
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



LTNode* LTInit() //��ʼ��
{
	LTNode* head = BuyLTNode(-1);
	head->prev = head;
	head->next = head;
	return head;
}

void LTPushBack(LTNode* phead, LTDataType x) //β��
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
bool LTEmpty(LTNode* phead)//�ж������Ƿ�Ϊ��
{
	assert(phead);
	return phead->next == phead;
}

void LTPopBack(LTNode* phead)//βɾ
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

void LTPopFront(LTNode* phead) //ͷɾ
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

void LTPushFront(LTNode* phead, LTDataType x)//ͷ��
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

void LTInsert(LTNode* pos, LTDataType x)//����
{
	assert(pos);
	LTNode* newnode = BuyLTNode(x);
	LTNode* posFirst = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	posFirst->next = newnode;
	newnode->prev = posFirst;


}

void LTErase(LTNode* pos)//ɾ���ڵ�
{
	assert(pos);
	LTNode* posprev = pos->prev;
	posprev->next = pos->next;
	pos->next->prev = posprev;
	free(pos);
	pos = NULL;
}

LTNode* LTFind(LTNode* phead, LTDataType x)//����
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void LTDestroy(LTNode* phead) //��������
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* Next = cur->next;
		free(cur);
		cur = NULL;
	}
}


void LTPrint(LTNode* phead) //��ӡ
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
