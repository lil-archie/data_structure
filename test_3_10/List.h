#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}LTNode;

LTNode* LTInit();//初始化

void LTPushBack(LTNode* phead,LTDataType x);//尾插

void LTPrint(LTNode* phead);//打印

LTNode* BuyLTNode(LTDataType x); //创建新的节点

void LTPopBack(LTNode* phead);//尾删

void LTPopFront(LTNode* phead);//头删

void LTPushFront(LTNode* phead, LTDataType x);//头插

void LTInsert(LTNode* pos, LTDataType x);//在链表pos位置之前插入数据

void LTErase(LTNode* pos);//删除链表节点位置的

LTNode* LTFind(LTNode* phead, LTDataType x);//查找

void LTDestroy(LTNode* phead); //链表销毁






