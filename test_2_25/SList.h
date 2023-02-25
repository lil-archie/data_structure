#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;  //申明所需要数据的类型


typedef struct  SListNode  // 创建一个链表结构体
{
	SLTDataType data;
	struct SListNode* next; //  储存下一个节点的地址
	 
}SLTNode;


void SLTPrint(SLTNode* phead); //打印链表的内容  


void SLTPushBack(SLTNode** phead, SLTDataType x);//节点，尾插


void SLTPushFront(SLTNode **pphead, SLTDataType x);//头插

void SLTPopBack(SLTNode** pphead);//尾删

void SLTPopFront(SLTNode** pphead);//头删 







