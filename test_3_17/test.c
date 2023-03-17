#define  _CRT_SECURE_NO_WARNINGS 1

#define  _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void STInit(ST* ps)//��ʼ��
{
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->top = 0; //��ʱ�򷵻�topֵʱ��һ  ���߽�top��ֵΪ-1
	ps->capacity = 4;
}

void CheckCapacity(ST* ps) //�������
{
	if (ps->capacity == ps->top)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
	return;
}


void STPush(ST* ps, STDataType x)//��ջ
{
	assert(ps);
	//����Ƿ���Ҫ����
	CheckCapacity(ps);
	ps->a[ps->top] = x;
	ps->top++;

}

bool STEmpty(ST* ps) //�п�
{
	assert(ps);
	return ps->top == 0;
}

void STPop(ST* ps)//��ջ
{
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}

void STDestroy(ST* ps)//����
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

STDataType STTop(ST* ps)//����ջ��ֵ
{
	assert(ps);
	assert(!STEmpty(ps));
	return ps->a[ps->top - 1];

}

int STSize(ST* ps) //���ش�С
{
	assert(ps);
	return ps->top;
}



