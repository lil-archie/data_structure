#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;  //��������Ҫ���ݵ�����


typedef struct  SListNode  // ����һ������ṹ��
{
	SLTDataType data;
	struct SListNode* next; //  ������һ���ڵ�ĵ�ַ
	 
}SLTNode;


void SLTPrint(SLTNode* phead); //��ӡ���������  


void SLTPushBack(SLTNode** phead, SLTDataType x);//�ڵ㣬β��


void SLTPushFront(SLTNode **pphead, SLTDataType x);//ͷ��

void SLTPopBack(SLTNode** pphead);//βɾ

void SLTPopFront(SLTNode** pphead);//ͷɾ 







