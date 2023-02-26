#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#pragma once

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** pphead, SLTDataType x); 
void SLTPushFront(SLTNode** pphead, SLTDataType x);


void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

SLTNode*  SLTFind(SLTNode* phead, SLTDataType x);

void SLTErase(SLTNode** pphead, SLTNode*pos);



void SLTModify(SLTNode* phead, SLTNode* pos, SLTDataType x);


void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SLTInsertBack(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SLTDestroy(SLTNode** pphead);

