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

LTNode* LTInit();//��ʼ��

void LTPushBack(LTNode* phead,LTDataType x);//β��

void LTPrint(LTNode* phead);//��ӡ

LTNode* BuyLTNode(LTDataType x); //�����µĽڵ�

void LTPopBack(LTNode* phead);//βɾ

void LTPopFront(LTNode* phead);//ͷɾ

void LTPushFront(LTNode* phead, LTDataType x);//ͷ��

void LTInsert(LTNode* pos, LTDataType x);//������posλ��֮ǰ��������

void LTErase(LTNode* pos);//ɾ������ڵ�λ�õ�

LTNode* LTFind(LTNode* phead, LTDataType x);//����

void LTDestroy(LTNode* phead); //��������






