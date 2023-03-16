#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef  int STDataType;

typedef struct Stack
{
	STDataType* a; //malloc指针
	int top;
	int capacity;
}ST;

void STInit(ST* ps);//初始化

void CheckCapacity(ST* ps); //检查扩容

void STPush(ST* ps,STDataType x);//入栈

void STPop(ST* ps);//出栈

bool STEmpty(ST* ps); //判空

void STDestroy(ST* ps);//销毁

int STSize(ST* ps);//返回大小

STDataType STTop(ST* ps);//返回栈顶值




