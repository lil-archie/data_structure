#define  _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void STInit(ST* ps)//初始化
{
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->top = 0; //到时候返回top值时减一  或者将top赋值为-1
	ps->capacity = 4;
}

void CheckCapacity(ST* ps) //检查扩容
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


void STPush(ST* ps, STDataType x)//入栈
{
	assert(ps);
	//检查是否需要扩容
	CheckCapacity(ps);
	ps->a[ps->top] = x;
	ps->top++;

}

bool STEmpty(ST* ps) //判空
{
	assert(ps);
	return ps->top==0;
}

void STPop(ST* ps)//出栈
{
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}

void STDestroy(ST* ps)//销毁
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

STDataType STTop(ST* ps)//返回栈顶值
{
	assert(ps);
	assert(!STEmpty(ps));
	return ps->a[ps->top - 1];
	
}

int STSize(ST* ps) //返回大小
{
	assert(ps);
	return ps->top;
}




