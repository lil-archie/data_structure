#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef  int STDataType;

typedef struct Stack
{
	STDataType* a; //mallocָ��
	int top;
	int capacity;
}ST;

void STInit(ST* ps);//��ʼ��

void CheckCapacity(ST* ps); //�������

void STPush(ST* ps,STDataType x);//��ջ

void STPop(ST* ps);//��ջ

bool STEmpty(ST* ps); //�п�

void STDestroy(ST* ps);//����

int STSize(ST* ps);//���ش�С

STDataType STTop(ST* ps);//����ջ��ֵ




